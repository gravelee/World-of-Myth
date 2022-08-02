#include <iostream>
#include "Equipment.h"
#include "Item.h"

Equipment::Equipment(

    string name, short int itemLvl, bool questItem, bool bind, unsigned short unique, 
    unsigned int duration, bool beginsAQuest, bool opens, string gearSlot, 
    unsigned short lvlReq, string skillTypeReq, unsigned short skillPointsReq, 
    string repTypeReq, unsigned short repPointsReq, string use, string summary, 
    unsigned short cStack, unsigned short iStack, unsigned int sellPrice,
    
    string gearType, unsigned short minDmg, unsigned short maxDmg,
    float speed, float dps, unsigned short armor, unsigned short str,
    unsigned short agi, unsigned short sta, unsigned short inte, unsigned short sprt,
    unsigned short arcRes, unsigned short fireRes, unsigned short frostRes,
    unsigned short holyRes, unsigned short natuRes, unsigned short shadoRes,
    unsigned short cDurability, unsigned short iDurability, string iClass,
    vector<string>&& equips, vector<string>&& chances, string setInfo): 
    
        Item(name,itemLvl,questItem,bind,unique,duration,beginsAQuest,opens,gearSlot,
            lvlReq,skillTypeReq,skillPointsReq,repTypeReq,repPointsReq,use,summary,
            cStack,iStack,sellPrice),
            
        gearType{gearType}, minDmg{minDmg}, maxDmg{maxDmg}, speed{speed}, dps{dps},
        armor{armor}, str{str}, agi{agi}, sta{sta}, inte{inte}, sprt{sprt}, 
        arcRes{arcRes}, fireRes{fireRes}, frostRes{frostRes}, holyRes{holyRes}, 
        natuRes{natuRes}, shadoRes{shadoRes}, cDurability{cDurability}, 
        iDurability{iDurability}, iClass{iClass}, setInfo{setInfo}{
    
    this->equips = std::move(equips);
    this->chances = std::move(chances);
}

void printItem(){
    
    /*
    
    string name, short int itemLvl, bool questItem, bool bind, unsigned short unique, 
    unsigned int duration, bool beginsAQuest, bool opens, string gearSlot,
 
    string gearType, unsigned short minDmg, unsigned short maxDmg,
    float speed, float dps, unsigned short armor, unsigned short str,
    unsigned short agi, unsigned short sta, unsigned short inte, unsigned short sprt,
    unsigned short arcRes, unsigned short fireRes, unsigned short frostRes,
    unsigned short holyRes, unsigned short natuRes, unsigned short shadoRes,
    unsigned short cDurability, unsigned short iDurability, string iClass,
    
    unsigned short lvlReq, string skillTypeReq, unsigned short skillPointsReq, 
    string repTypeReq, unsigned short repPointsReq, string use,
    
    vector<string>&& equips, vector<string>&& chances, 
    
    string summary, unsigned short cStack, unsigned short iStack, 
    
    string setInfo, 
    
    unsigned int sellPrice
    
    
    std::cout<<"\n"<<Item::name
        <<"\nItem Level "<<itemLvl
        <<(questItem?"\nQuest Item":"")
        <<(bind?"\nBinds when picked up":"")
        <<((unique!=0)?"\nUnique" 
            + ((unique!=1)?" (" + std::to_string(unique) + ")":"")   :"")   // it is updated further from vanilla
        <<(duration?"\nDuration: " + std::to_string(duration):"")   // What duration?
        <<(beginsAQuest?"\nThis item begins a quest":"")
        <<(opens?"\n<Right click to open>":"")
        <<((gearSlot!="None")?"\n" + gearSlot:"")
        <<((lvlReq!=1)?"\nRequires Level " + std::to_string(lvlReq):"")
        <<((skillTypeReq!="None")?"\nRequires " 
            + skillTypeReq + "(" + std::to_string(skillPointsReq) + ")":"")
        <<((repTypeReq!="None")?"\nRequires " 
            + repTypeReq + "(" + std::to_string(repPointsReq) + ")":"")
        <<((use!="None")?"\n" + morphString(use,false) + "\n":"")
        <<((summary!="None")?"\n" + morphString(summary,true):"")
        <<((cStack>1)?"\nMax Stack: " + std::to_string(cStack):"")
        <<((iStack>1)?"\nMax Stack: " + std::to_string(iStack):"")
        <<((sellPrice!=0)?"\nSell Price: " + std::to_string(sellPrice):"")
        <<"\n\n";
    
     //*/
    
    //(*this).printPart1();
    
    //std::cout<<
    
}

Equipment::~Equipment(){
    
    equips.clear();
    chances.clear();
}

