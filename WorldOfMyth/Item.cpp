#include<iostream>
#include<sstream>
#include<string>
#include "Item.h"

using std::string;

string Item::morphString( string str, bool isText){
    
    string word{};
    string morphedString{};
    std::stringstream ss{str};
    uint8_t size{};
    
    if( isText)
        morphedString = "\"";
    
    while( ss>>word){
        /*
        std::cout<<"Summary so far:\n"<<morphedString
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
    string use, string summary, unsigned short cStack, unsigned short iStack, unsigned int sellPrice):
    
    name{name}, itemLvl{itemLvl}, questItem{questItem}, bind{bind}, unique{unique}, 
    duration{duration}, beginsAQuest{beginsAQuest}, opens{opens}, gearSlot{gearSlot},
    lvlReq{lvlReq}, skillTypeReq{skillTypeReq}, skillPointsReq{skillPointsReq},
    repTypeReq{repTypeReq}, repPointsReq{repPointsReq}, use{use}, summary{summary},
    cStack{cStack}, iStack{iStack}, sellPrice{sellPrice}{
    
}

void Item::printItem(){
    
    printPart1();
    printPart2();
    printPart3();
    printPart4();
}

void printPart1(){
    
    std::cout<<"\n"<<name
        <<"\nItem Level "<<itemLvl
        <<((questItem)?"\nQuest Item":"")
        <<((bind)?"\nBinds when picked up":"")
        <<((unique!=0)?"\nUnique" 
            + ((unique!=1)?" (" + std::to_string(unique) + ")":"")   :"")   // it is updated further from vanilla
        <<((duration)?"\nDuration: " + std::to_string(duration):"")   // What duration?
        <<((beginsAQuest)?"\nThis item begins a quest":"")
        <<((opens)?"\n<Right click to open>":"")
        <<((gearSlot!="None")?"\n" + gearSlot:"");

}

void printPart2(){
    
    std::cout<<((lvlReq!=1)?"\nRequires Level " + std::to_string(lvlReq):"")
        <<((skillTypeReq!="None")?"\nRequires " 
            + skillTypeReq + "(" + std::to_string(skillPointsReq) + ")":"")
        <<((repTypeReq!="None")?"\nRequires " 
            + repTypeReq + "(" + std::to_string(repPointsReq) + ")":"")
        <<((use!="None")?"\n" + morphString(use,false) + "\n":"");
        
}

void printPart3(){
    
    std::cout<<((summary!="None")?"\n" + morphString(summary,true):"")
        <<((cStack>1)?"\nMax Stack: " + std::to_string(cStack):"")
        <<((iStack>1)?"\nMax Stack: " + std::to_string(iStack):"");
        
}

void printPart4(){
    
    std::cout<<((sellPrice!=0)?"\nSell Price: " + std::to_string(sellPrice):"")
        <<"\n\n";
}

Item::~Item(){
    
    
}

