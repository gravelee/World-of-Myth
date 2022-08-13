#ifndef _SPAWN_H_
#define _SPAWN_H_

#include <string>

using std::string;

//enum class 

enum class ExpPerLvl{ lvl1=400, lvl2=900, lvl3=1400, lvl4=2100, lvl5=2800, 
    lvl6=3600, lvl7=4500, lvl8=5400, lvl9=6500, lvl10=7600, lvl11=8800, 
    lvl12=10100, lvl13=11400, lvl14=12900, lvl15=14400, lvl16=16000, 
    lvl17=17700, lvl18=19400, lvl19=21300 ,lvl20=23200, lvl21=25200, 
    lvl22=27300, lvl23=29400, lvl24=31700, lvl25=34000, lvl26=36400, 
    lvl27=38900, lvl28=41400, lvl29=44300, lvl30=47400, lvl31=50800, 
    lvl32=54500, lvl33=58600, lvl34=62800, lvl35=67100, lvl36=71600, 
    lvl37=76100, lvl38=80800, lvl39=85700, lvl40=90700, lvl41=95800, 
    lvl42=101000, lvl43=106300, lvl44=111800, lvl45=117500, lvl46=123200, 
    lvl47=129100, lvl48=135100, lvl49=141200, lvl50=147500, lvl51=153900, 
    lvl52=160400, lvl53=167100, lvl54=173900, lvl55=180800, lvl56=187900, 
    lvl57=195000, lvl58=202300, lvl59=209800, lvl60=217400, lvlXX=666666};
    
inline ExpPerLvl toExpPerLvl( string expPerLvl){

    if ( expPerLvl=="lvl1")
        return ExpPerLvl::lvl1;
    else if( expPerLvl=="lvl2")
        return ExpPerLvl::lvl2;
    else if( expPerLvl=="lvl3")
        return ExpPerLvl::lvl3;
    else if( expPerLvl=="lvl4")
        return ExpPerLvl::lvl4;
    else if( expPerLvl=="lvl5")
        return ExpPerLvl::lvl5;
    else if( expPerLvl=="lvl6")
        return ExpPerLvl::lvl6;
    else if( expPerLvl=="lvl7")
        return ExpPerLvl::lvl7;
    else if( expPerLvl=="lvl8")
        return ExpPerLvl::lvl8;
    else if( expPerLvl=="lvl9")
        return ExpPerLvl::lvl9;
    else if( expPerLvl=="lvl10")
        return ExpPerLvl::lvl10;
    else if( expPerLvl=="lvl11")
        return ExpPerLvl::lvl11;
    else if( expPerLvl=="lvl12")
        return ExpPerLvl::lvl12;
    else if( expPerLvl=="lvl13")
        return ExpPerLvl::lvl13;
    else if( expPerLvl=="lvl14")
        return ExpPerLvl::lvl14;
    else if( expPerLvl=="lvl15")
        return ExpPerLvl::lvl15;
    else if( expPerLvl=="lvl16")
        return ExpPerLvl::lvl16;
    else if( expPerLvl=="lvl17")
        return ExpPerLvl::lvl17;
    else if( expPerLvl=="lvl18")
        return ExpPerLvl::lvl18;
    else if( expPerLvl=="lvl19")
        return ExpPerLvl::lvl19;
    else if( expPerLvl=="lvl20")
        return ExpPerLvl::lvl20;
    else if( expPerLvl=="lvl21")
        return ExpPerLvl::lvl21;
    else if( expPerLvl=="lvl22")
        return ExpPerLvl::lvl22;
    else if( expPerLvl=="lvl23")
        return ExpPerLvl::lvl23;
    else if( expPerLvl=="lvl24")
        return ExpPerLvl::lvl24;
    else if( expPerLvl=="lvl25")
        return ExpPerLvl::lvl25;
    else if( expPerLvl=="lvl26")
        return ExpPerLvl::lvl26;
    else if( expPerLvl=="lvl27")
        return ExpPerLvl::lvl27;
    else if( expPerLvl=="lvl28")
        return ExpPerLvl::lvl28;
    else if( expPerLvl=="lvl29")
        return ExpPerLvl::lvl29;
    else if( expPerLvl=="lvl30")
        return ExpPerLvl::lvl30;
    else if( expPerLvl=="lvl31")
        return ExpPerLvl::lvl31;
    else if( expPerLvl=="lvl32")
        return ExpPerLvl::lvl32;
    else if( expPerLvl=="lvl33")
        return ExpPerLvl::lvl33;
    else if( expPerLvl=="lvl34")
        return ExpPerLvl::lvl34;
    else if( expPerLvl=="lvl35")
        return ExpPerLvl::lvl35;
    else if( expPerLvl=="lvl36")
        return ExpPerLvl::lvl36;
    else if( expPerLvl=="lvl37")
        return ExpPerLvl::lvl37;
    else if( expPerLvl=="lvl38")
        return ExpPerLvl::lvl38;
    else if( expPerLvl=="lvl39")
        return ExpPerLvl::lvl39;
    else if( expPerLvl=="lvl40")
        return ExpPerLvl::lvl40;
    else if( expPerLvl=="lvl41")
        return ExpPerLvl::lvl41;
    else if( expPerLvl=="lvl42")
        return ExpPerLvl::lvl42;
    else if( expPerLvl=="lvl43")
        return ExpPerLvl::lvl43;
    else if( expPerLvl=="lvl44")
        return ExpPerLvl::lvl44;
    else if( expPerLvl=="lvl45")
        return ExpPerLvl::lvl45;
    else if( expPerLvl=="lvl46")
        return ExpPerLvl::lvl46;
    else if( expPerLvl=="lvl47")
        return ExpPerLvl::lvl47;
    else if( expPerLvl=="lvl48")
        return ExpPerLvl::lvl48;
    else if( expPerLvl=="lvl49")
        return ExpPerLvl::lvl49;
    else if( expPerLvl=="lvl50")
        return ExpPerLvl::lvl50;
    else if( expPerLvl=="lvl51")
        return ExpPerLvl::lvl51;
    else if( expPerLvl=="lvl52")
        return ExpPerLvl::lvl52;
    else if( expPerLvl=="lvl53")
        return ExpPerLvl::lvl53;
    else if( expPerLvl=="lvl54")
        return ExpPerLvl::lvl54;
    else if( expPerLvl=="lvl55")
        return ExpPerLvl::lvl55;
    else if( expPerLvl=="lvl56")
        return ExpPerLvl::lvl56;
    else if( expPerLvl=="lvl57")
        return ExpPerLvl::lvl57;
    else if( expPerLvl=="lvl58")
        return ExpPerLvl::lvl58;
    else if( expPerLvl=="lvl59")
        return ExpPerLvl::lvl59;
    else if( expPerLvl=="lvl60")
        return ExpPerLvl::lvl60;
    else
        return ExpPerLvl::lvlXX;
}

enum class Races{ None,Tauren,Orc,Troll,Undead,Goblin,Blood_Elf,Pandaren,
                Human,Dwarf,Night_Elf,Gnome,Draenei,Worgen};
                
inline const char* toString( Races race){
    
    switch ( race){
        
        case Races::None:   return "None";
        case Races::Tauren:   return "Tauren";
        case Races::Orc: return "Orc";
        case Races::Troll:   return "Troll";
        case Races::Undead:   return "Undead";
        case Races::Goblin: return "Goblin";
        case Races::Blood_Elf:   return "Blood_Elf";
        case Races::Pandaren:   return "Pandaren";
        case Races::Human: return "Human";
        case Races::Dwarf:   return "Dwarf";
        case Races::Night_Elf:   return "Night_Elf";
        case Races::Gnome: return "Gnome";
        case Races::Draenei:   return "Draenei";
        case Races::Worgen:   return "Worgen";
        default:      return "None";
    }
}

inline Races toRaces( string race){

    if ( race=="None")
        return Races::None;
    else if( race=="Tauren")
        return Races::Tauren;
    else if( race=="Orc")
        return Races::Orc;
    else if( race=="Troll")
        return Races::Troll;
    else if( race=="Undead")
        return Races::Undead;
    else if( race=="Goblin")
        return Races::Goblin;
    else if( race=="Blood_Elf")
        return Races::Blood_Elf;
    else if( race=="Pandaren")
        return Races::Pandaren;
    else if( race=="Human")
        return Races::Human;
    else if( race=="Dwarf")
        return Races::Dwarf;
    else if( race=="Night_Elf")
        return Races::Night_Elf;
    else if( race=="Gnome")
        return Races::Gnome;
    else if( race=="Draenei")
        return Races::Draenei;
    else if( race=="Worgen")
        return Races::Worgen;
    else
        return Races::None;
}

enum class Classes{ None,Warrior,Mage,Priest,Rogue,Hunter,Warlock,Shaman,
                Death_Knight,Demon_Hunter,Paladin,Monk,Druid};

inline const char* toString( Classes cClass){
    switch ( cClass)
    {
        case Classes::None:   return "None";
        case Classes::Warrior:   return "Warrior";
        case Classes::Mage: return "Mage";
        case Classes::Priest:   return "Priest";
        case Classes::Rogue:   return "Rogue";
        case Classes::Hunter: return "Hunter";
        case Classes::Warlock:   return "Warlock";
        case Classes::Shaman:   return "Shaman";
        case Classes::Death_Knight: return "Death_Knight";
        case Classes::Demon_Hunter:   return "Demon_Hunter";
        case Classes::Paladin:   return "Paladin";
        case Classes::Monk: return "Monk";
        case Classes::Druid:   return "Druid";
        default:      return "None";
    }
}

inline Classes toClasses( string cClass){

    if ( cClass=="None")
        return Classes::None;
    else if( cClass=="Warrior")
        return Classes::Warrior;
    else if( cClass=="Mage")
        return Classes::Mage;
    else if( cClass=="Priest")
        return Classes::Priest;
    else if( cClass=="Rogue")
        return Classes::Rogue;
    else if( cClass=="Hunter")
        return Classes::Hunter;
    else if( cClass=="Warlock")
        return Classes::Warlock;
    else if( cClass=="Shaman")
        return Classes::Shaman;
    else if( cClass=="Death_Knight")
        return Classes::Death_Knight;
    else if( cClass=="Demon_Hunter")
        return Classes::Demon_Hunter;
    else if( cClass=="Paladin")
        return Classes::Paladin;
    else if( cClass=="Monk")
        return Classes::Monk;
    else if( cClass=="Druid")
        return Classes::Druid;
    else
        return Classes::None;
}

class Spawn{
     
private:
              
    string name;
    Races race;
    Classes cClass;
    
    unsigned short lvl;
    unsigned long long exp;
    
    //vector<Backpack> invetory;
    
    //Backpack bk1{item1,item2};
    
    
    /*
    
    unsigned long long hp;
    unsigned long long mana;
    uint8_t energy;
        
    unsigned long long armour;
    unsigned long long strength;
    unsigned long long agility;
    unsigned long long stamina;
    unsigned long long intelect;
    unsigned long long spirit;
    
    unsigned int ms;
        
    
    unsigned long long exp;
    uint8_t tp;
    Inventory inv;
    ItemSlotList iSList;
    
    */
       
public:
    
    Spawn( string name="None",  Races race=Races::None, 
    Classes cClass=Classes::None, unsigned short lvl=1, 
    unsigned long long exp=0);
    
    void expGain( unsigned long long exp);
    
    void printSpawn() const;
    unsigned short getLevel() const;
    ~Spawn();

};

#endif
