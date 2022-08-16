#include <iostream>
#include <sstream>
#include <string>
#include "Item.h"

using std::stringstream;
using std::to_string;
using std::string;
using std::cout;

string Item::morphString( string str, bool isText) const{
    
    string word{};
    string morphedString{};
    stringstream ss{str};
    uint8_t size{};
    
    if( isText)
        morphedString = "\"";
    
    while( ss>>word){
        /*
        cout<<"Summary so far:\n"<<morphedString
            <<"\nNumber of characters MOD 50 + lines: "<<morphedString.size()%50
            <<"\n\nNew Word to be added: "<<word<<"\nSize: "<<word.size()
            <<"\n\n";
        //*/
        size = morphedString.size()%51;
        
        if( (size?size:1) + word.size() + 2 >= 50){
            
            for( uint8_t i{size}; i<49; i++)
                morphedString += " ";
            
            morphedString += "\n";
        }
        
        morphedString += word + " ";
    }
    
    morphedString.pop_back();
    
    if( isText)
        morphedString += "\"";
    
    return morphedString;
}

Item::Item( string name, short int itemLvl, bool questItem, bool bind, unsigned short unique, 
    unsigned int duration, bool beginsAQuest, bool opens, string gearSlot, unsigned short lvlReq, 
    string skillTypeReq, unsigned short skillPointsReq, string repTypeReq, unsigned short repPointsReq,
    string use, string summary, unsigned short cStack, unsigned short iStack, Cost sellPrice):
    
    name{name}, itemLvl{itemLvl}, questItem{questItem}, bind{bind}, unique{unique}, 
    duration{duration}, beginsAQuest{beginsAQuest}, opens{opens}, gearSlot{gearSlot},
    lvlReq{lvlReq}, skillTypeReq{skillTypeReq}, skillPointsReq{skillPointsReq},
    repTypeReq{repTypeReq}, repPointsReq{repPointsReq}, use{use}, summary{summary},
    cStack{cStack}, iStack{iStack}, sellPrice{sellPrice}{
    
}

Item::Item( const Item& item){
    
    name = item.name;
    itemLvl = item.itemLvl;
    questItem = item.questItem;
    bind = item.bind;
    unique = item.unique;
    duration = item.duration;
    beginsAQuest = item.beginsAQuest;
    opens = item.opens;
    gearSlot = item.gearSlot;
    lvlReq = item.lvlReq;
    skillTypeReq = item.skillTypeReq;
    skillPointsReq = item.skillPointsReq;
    repTypeReq = item.repTypeReq;
    repPointsReq = item.repPointsReq;
    use = item.use;
    summary = item.summary;
    cStack = item.cStack;
    iStack =item.iStack;
    sellPrice = item.sellPrice;
    
}

void Item::printItem() const{
    
    printPart1();
    printPart2();
    printPart3();
    printPart4();
}

void Item::printPart1() const{
    
    cout<<"\n"<<name
        <<"\nItem Level "<<itemLvl
        <<((questItem)?"\nQuest Item":"")
        <<((bind)?"\nBinds when picked up":"")
        <<((unique!=0)?"\nUnique" 
            + ((unique!=1)?" (" + to_string(unique) + ")":"")   :"")   // it is updated further from vanilla
        <<((duration)?"\nDuration: " + to_string(duration):"")   // What duration?
        <<((beginsAQuest)?"\nThis item begins a quest":"")
        <<((opens)?"\n<Right click to open>":"")
        <<((gearSlot!="None")?"\n" + gearSlot:"");

}

void Item::printPart2() const{
    
    cout<<((lvlReq!=1)?"\nRequires Level " + to_string(lvlReq):"")
        <<((skillTypeReq!="None")?"\nRequires " 
            + skillTypeReq + "(" + to_string(skillPointsReq) + ")":"")
        <<((repTypeReq!="None")?"\nRequires " 
            + repTypeReq + "(" + to_string(repPointsReq) + ")":"")
        <<((use!="None")?"\n" + morphString(use,false) + "\n":"");
        
}

void Item::printPart3() const{
    
    cout<<((summary!="None")?"\n" + morphString(summary,true):"")
        <<((cStack>1)?"\nMax Stack: " + to_string(cStack):"")
        <<((iStack>1)?"\nMax Stack: " + to_string(iStack):"");
        
}

void Item::printPart4() const{
    
    cout<<((sellPrice.gold!=0 || sellPrice.silver!=0 || sellPrice.copper!=0)?"\nSell Price: ":"")
        <<((sellPrice.gold!=0)?" " + to_string(sellPrice.gold) + " Gold":"")
        <<((sellPrice.silver!=0)?" " + to_string(sellPrice.silver) + " Silver":"")
        <<((sellPrice.copper!=0)?" " + to_string(sellPrice.copper) + " Copper":"")
        <<"\n\n";
        
}

Item::~Item(){
    
    
}
