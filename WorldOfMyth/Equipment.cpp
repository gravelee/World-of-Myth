#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Equipment.h"
#include "Item.h"

using std::to_string;
using std::for_each;
using std::vector;
using std::string;
using std::cout;
using std::move;

Equipment::Equipment(

    string name, short int itemLvl, bool questItem, unsigned short bind, unsigned short unique, 
    unsigned int duration, bool beginsAQuest, bool opens, string gearSlot, 
    unsigned short lvlReq, string skillTypeReq, unsigned short skillPointsReq, 
    string repTypeReq, unsigned short repPointsReq, string use, string summary, 
    unsigned short cStack, unsigned short iStack, Cost sellPrice,
    
    string gearType, unsigned short minDmg, unsigned short maxDmg,
    float speed, float dps, unsigned short armor, unsigned short block, unsigned short str,
    unsigned short agi, unsigned short sta, unsigned short inte, unsigned short sprt,
    unsigned short arcRes, unsigned short fireRes, unsigned short frostRes,
    unsigned short holyRes, unsigned short natuRes, unsigned short shadoRes,
    unsigned short cDurability, unsigned short iDurability, vector<string> iClass,
    vector<string>&& equips, vector<string>&& chances, SetInfo setInfo): 
    
        Item(name,itemLvl,questItem,bind,unique,duration,beginsAQuest,opens,gearSlot,
            lvlReq,skillTypeReq,skillPointsReq,repTypeReq,repPointsReq,use,summary,
            cStack,iStack,sellPrice),
            
        gearType{gearType}, minDmg{minDmg}, maxDmg{maxDmg}, speed{speed}, dps{dps},
        armor{armor}, block{block}, str{str}, agi{agi}, sta{sta}, inte{inte}, sprt{sprt}, 
        arcRes{arcRes}, fireRes{fireRes}, frostRes{frostRes}, holyRes{holyRes}, 
        natuRes{natuRes}, shadoRes{shadoRes}, cDurability{cDurability}, 
        iDurability{iDurability}, setInfo{setInfo}{
    
    this->iClass = move(iClass);      
    this->equips = move(equips);
    this->chances = move(chances);
}

void Equipment::printItem() const{
    
    /*  Prints
    
    string name, short int itemLvl, bool questItem, bool bind, unsigned short unique, 
    unsigned int duration, bool beginsAQuest, bool opens, string gearSlot,
  
    */
    printPart1();
    
    
    /*  Prints
    
    string gearType, unsigned short minDmg, unsigned short maxDmg,
    float speed, float dps, unsigned short armor, unsigned short block, unsigned short str,
    unsigned short agi, unsigned short sta, unsigned short inte, unsigned short sprt,
    unsigned short arcRes, unsigned short fireRes, unsigned short frostRes,
    unsigned short holyRes, unsigned short natuRes, unsigned short shadoRes,
    unsigned short cDurability, unsigned short iDurability, vector<string> iClass,
    
    */
    printPart1_5();
    
    
    /*  Prints
    
    unsigned short lvlReq, string skillTypeReq, unsigned short skillPointsReq, 
    string repTypeReq, unsigned short repPointsReq, string use,
    
    */
    printPart2();
    
    
    /*  Prints
    
    vector<string>&& equips, vector<string>&& chances, 
    
    */
    printPart2_5();
    
    
    /*  Prints
    
    string summary, unsigned short cStack, unsigned short iStack, 
    
    */
    printPart3();
    
    
    /*  Prints
    
    SetInfo setInfo, 
    
    */
    printPart3_5();
    
    
    /*  Prints
    
    Cost sellPrice.
    
    */
    printPart4();
    
}

void Equipment::printPart1_5() const{
    
    /*  Prints
    
    string gearType, unsigned short minDmg, unsigned short maxDmg,
    float speed, float dps, unsigned short armor, unsigned short block, unsigned short str,
    unsigned short agi, unsigned short sta, unsigned short inte, unsigned short sprt,
    unsigned short arcRes, unsigned short fireRes, unsigned short frostRes,
    unsigned short holyRes, unsigned short natuRes, unsigned short shadoRes,
    unsigned short cDurability, unsigned short iDurability, vector<string> iClass,
    
    */
    
        //  formate everything better with stream flags
    
    cout<<(gearType!="None"?"\t\t\t\t" + gearType:"")
        <<(minDmg!=0?"\n" + to_string(minDmg):"")
        <<(maxDmg!=0?"-" + to_string(maxDmg) + " Damage":"")
        <<(speed!=0.0?"\tSpeed " + to_string(speed):"")
        <<(dps!=0.0?"\n(" + to_string(dps) + " damage per second)":"")
        <<(armor!=0?"\n" + to_string(armor) + " Armor":"")
        <<(block!=0?"\n" + to_string(block) + " Block":"")
        <<(str!=0?"\n+" + to_string(str) + " Strength":"")
        <<(agi!=0?"\n+" + to_string(agi) + " Agility":"")
        <<(sta!=0?"\n+" + to_string(sta) + " Stamina":"")
        <<(inte!=0?"\n+" + to_string(inte) + " Intelect":"")
        <<(sprt!=0?"\n+" + to_string(sprt) + " Spirit":"")
        <<(arcRes!=0?"\n+" + to_string(arcRes) + " Arcane Resistance":"")
        <<(fireRes!=0?"\n+" + to_string(fireRes) + " Fire Resistance":"")
        <<(frostRes!=0?"\n+" + to_string(frostRes) + " Frost Resistance":"")
        <<(holyRes!=0?"\n+" + to_string(holyRes) + " Holy Resistance":"")
        <<(natuRes!=0?"\n+" + to_string(natuRes) + " Natural Resistance":"")
        <<(shadoRes!=0?"\n+" + to_string(shadoRes) + " Shadow Resistance":"")
        <<(cDurability!=0?"\nDurability " + to_string(cDurability):"")
        <<(iDurability!=0?" / " + to_string(iDurability):"");
        
        string temp{};
        for( string str: iClass)
            (((*(iClass.end()-1))!=str)?temp += str + ", ":temp += str);
        
        cout<<"\n" + morphString(temp,false);
        //  Make iClass a vector<string> !!!
        
}

void Equipment::printPart2_5() const{
    
    for( string str: equips)
        cout<<"\n" + morphString(str,false);
    
    for( string str: chances)
        cout<<"\n" + morphString(str,false);
    
}

void Equipment::printPart3_5() const{
    
    if(setInfo.tittle!="None"){
        
        cout<<"\n\n" + setInfo.tittle + "\n";
        
        for_each(setInfo.setItems.begin(),setInfo.setItems.end(),
            [](string str){cout<<" " + str + "\n";});
        
        cout<<"\n"<<morphString(setInfo.setSummary,false);
    }
}

Equipment::~Equipment(){
    
    equips.clear();
    chances.clear();
}