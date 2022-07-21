#ifndef _SPAWN_H_
#define _SPAWN_H_

#include <stdint.h>
#include <string>
#include "Inventory.h"
#include "ItemSlotList.h"

using std::string;

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

inline const char* toString( Classes cClass)
{
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

class Spawn
{
   
    friend void complexMenu( string, Spawn);
     
private:
              
    string name;
    Races race;
    Classes cClass;
    
    uint8_t lvl;
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
        
    Spawn( string name="None",  Races=Races::None, Classes cClass=Classes::None, uint8_t lvl=1);
    ~Spawn();

};

#endif
