#ifndef ITEM_H_
#define ITEM_H_

#include <string>

using std::string;

//class Equipment;

class Item{
    
protected:
    
    string name;
    short int itemLvl;
    bool questItem;
    bool bind;
    unsigned short unique;
    unsigned int duration;
    bool beginsAQuest;
    bool opens;
    
    string gearSlot;    // Backpacks & mounts
    // for Equipment  ->  Head, One-Hand, Trinket etc.
    
    //string gearType;
    //unsigned short minDmg;
    //unsigned short maxDmg;
    //unsigned float speed;
    //unsigned float dps;
    //unsigned short armor;
    //unsigned short str;
    //unsigned short agi;
    //unsigned short sta;
    //unsigned short inte;
    //unsigned short sprt;
    //unsigned short arcRes;
    //unsigned short fireRes;
    //unsigned short frostRes;
    //unsigned short holyRes;
    //unsigned short natuRes;
    //unsigned short shadoRes;
    //unsigned short cDurability;
    //unsigned short iDurability;
    //string iClass;
    
    unsigned short lvlReq;
    string skillTypeReq;
    unsigned short skillPointsReq;
    string repTypeReq;
    unsigned short repPointsReq;
    string use;
    
    //vector<string> equips;
    //vector<string> chances;
    
    string summary;
    unsigned short cStack;
    unsigned short iStack;
    
    //string setInfo;
    
    unsigned int sellPrice;
    
    string morphString( string str, bool isText) const;

public:

    Item( string name="None", short int itemLvl=1, bool questItem=false, bool bind=false, 
        unsigned short unique=0, unsigned int duration=0, bool beginsAQuest=false, bool opens=false, 
        string gearSlot="None", unsigned short lvlReq=1, string skillTypeReq="None", 
        unsigned short skillPointsReq=0, string repTypeReq="None", unsigned short repPointsReq=0,
        string use="None", string summary="None", unsigned short cStack=1, 
        unsigned short iStack=1, unsigned int sellPrice=0);
    
    Item( const Item& item);
    
    virtual void printItem() const;
    void printPart1() const;
    void printPart2() const;
    void printPart3() const;
    void printPart4() const;
    ~Item();

};

#endif // ITEM_H_
