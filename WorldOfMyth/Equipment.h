#ifndef EQUIPMENT_H_
#define EQUIPMENT_H_

#include <string>
#include <vector>
#include "Item.h"

using std::string;
using std::vector;

struct SetInfo{
    
    string tittle;
    vector<string> setItems;
    string setSummary;
};

class Equipment : public Item{
    
protected:

    string gearType;
    unsigned short minDmg;
    unsigned short maxDmg;
    float speed;
    float dps;
    unsigned short armor;
    unsigned short block;
    unsigned short str;
    unsigned short agi;
    unsigned short sta;
    unsigned short inte;
    unsigned short sprt;
    unsigned short arcRes;
    unsigned short fireRes;
    unsigned short frostRes;
    unsigned short holyRes;
    unsigned short natuRes;
    unsigned short shadoRes;
    unsigned short cDurability;
    unsigned short iDurability;
    
    vector<string> iClass;
    vector<string> equips;
    vector<string> chances;
    
    SetInfo setInfo;
    
    void printPart1_5() const;
    void printPart2_5() const;
    void printPart3_5() const;
    
public:

    Equipment( string name, short int itemLvl, bool questItem, unsigned short bind, unsigned short unique, 
        unsigned int duration, bool beginsAQuest, bool opens, string gearSlot, 
        unsigned short lvlReq, string skillTypeReq, unsigned short skillPointsReq, 
        string repTypeReq, unsigned short repPointsReq, string use, string summary, 
        unsigned short cStack, unsigned short iStack, Cost sellPrice,
        
        string gearType="None", unsigned short minDmg=0, unsigned short maxDmg=0,
        float speed=0.0, float dps=0.0, unsigned short armor=0, unsigned short block=0, unsigned short str=0,
        unsigned short agi=0, unsigned short sta=0, unsigned short inte=0, unsigned short sprt=0,
        unsigned short arcRes=0, unsigned short fireRes=0, unsigned short frostRes=0,
        unsigned short holyRes=0, unsigned short natuRes=0, unsigned short shadoRes=0,
        unsigned short cDurability=0, unsigned short iDurability=0, vector<string> iClass={},
        vector<string>&& equips={}, vector<string>&& chances={}, SetInfo setInfo={"None",{},"None"});
    
    //Equipment( const Equipment& equipment);
    
    virtual void printItem() const override;  // virtual here is not needed but is used as good prgramming technique
    
    ~Equipment();

};

#endif // EQUIPMENT_H_