/*
 * 
 *  Date   : 09/07/22 02:52
 *  Author : Mars Lee Falcon
 *  Title  : World of Myth
 *  Program: Game - MMORPG wanna be!
 * 
 * 
 *  To_do_list Wow Example
 * 
 * 
 *  Create character & creature stuts: 
 * 
 * 
 *      HP, (Mana, Energy, Rage, Spirit*)
 *      
 *      Armour, Strength, Agility, Stamina, Intellect, Spirit,
 *      
 *      movement_speed, 
 * 
 *      level, experience points, talent points, inventory, itemSlotList,
 * 
 *      Defence, Dodge, Parry, Block, Avoidance, 
 *      Resiliance, 
 * 
 *      spell damage, spell healing, spell haste, 
 *      spell hit chance, spell crit chance, 
 *      
 *      melee damage,
 *      melee attack speed, attack power, melee hit chance,
 *      melee crit chance, melee experties, melee penetration,
 *      
 *      ranged damage, ranged attack speed, ranged attack power, 
 *      ranged hit chance, ranged crit chance, ranged experties, 
 *      ranged penetration.
 *      
 *      (* NPCs are specific kind of creatures)
 * 
 * 
 *  Create character & creature races: 
 *      
 * 
 *      Tauren, Orc, Troll, Undead, Goblin, Blood Elf, Pandaren,
 *      Human, Dwarf, Night Elf, Gnome, Draenei, Worgen.
 * 
 * 
 *  Create additional creature only races : 
 * 
 * 
 *      xxx
 * 
 * 
 *  Create creature types: 
 * 
 * 
 *      Aberrations, Beasts, Critters, Demons, Dragonkin,
 *      Elementals, Giants, Humanoids, Mechanicals, Undead,
 *      Uncategorized.
 * 
 *      (* characters are always Humanoids unless they are transformed)
 * 
 * 
 *  Create character & creature classes & tallent trees :
 * 
 * 
 *      Warrior : Arms, Furry, Protection
 *      Mage    : Arcane, File, Frost
 *      Priest  : Discipline, Holy, Shadow
 *      Rogue   : Assassination, Combat, Subtlety
 *      Hunter  : Beast Mastery, Marksmanship, Survival
 *      Warlock : Affliction, Demonology, Destruction
 *      Shaman  : Elemental, Enchancement, Restoration
 *      D Night : Blood, Frost, Unholy
 *      D Hunter: Havoc, Vengeance
 *      Paladin : Holy, Protection, Retribution
 *      Monk    : Brewmaster, Mistweaver, Windwalker
 *      Druid   : Balance, Feral Combat, Restoration
 * 
 * 
 *  Create character & creature abilities and spells : 
 * 
 * 
 *      Warrior : xxx
 * 
 *      Mage    : Polymorph, Ice Block, Time Warp, Spellsteal, Mirror Image, Portal: Oribos,
 *                Arcane Explosion, Arcane Portal: Dalaran, Illusion, Couterspell,
 *                Teleport: Oribos, Blink, Portal: Shattrath, Portal: Stonard, Arcane Intellect,
 *                Portal: Dalaran - Northrend, Frost Nova, Frostbolt, Portal: Theramore, Invisibility,
 *                Remove Curse, Slow Fall, Teleport: Shattrath, Arcane Linguist, 
 *                Ancient Teleport: Dalaran, Teleport: Hall of the Guardian, 
 *                Teleport: Dalaran - Northrend, Teleport: Stonard, Portal: Shattrath, Portal,
 *                Teleport: Stormwind, Portal: Stormshield, Teleport: Orgrimmar, Portal: Darnassus,
 *                Portal: Exodar, Portal: Warspear, Teleport: Dalaran - Broken Isles, Fire Blast, 
 *                Conjure Refreshment, Mage.
 * 
 *      Priest  : xxx
 *      Rogue   : xxx
 * 
 *      Hunter  : Freezing Trap, Aspect of the Turtle, Feign Death,Aspect of the Cheetah,
 *                Hunter's Mark, Flare, Death Chakram, Tar Trap, Tame Beast, Misdirection,
 *                Wailing Arrow, Tranquilizing Shot, Revive Pet, Arcane Shot, Steady Shot,
 *                Disengate, Mend Pet, Play Dead, Exhilaration, Kill Shot, Fetch, Call Pet 2,
 *                Dismiss Pet, Wing Clip, Eagle Eye, Call Pet 4, Scare Beast, Volley, 
 *                Ancient Zandalari Knowledge, Feed Pet, Beast Lore, Call Pet 1, 
 *                Aspect of the Chameleon, Command Pet, Track Hidden, Eyes of the Beast,
 *                Call Pet 3, Track Beasts, Chakrams, Track Dragonkin, Call Pet 5, Steel Trap,
 *                Fireworks, Hybrid Kinship, Wake Up, Mecha-Bond Imprint Matrix, Track Giants,
 *                Track Humanoids, Track Mechanicals, Track Undead, Control Pet, Hunter,
 *                Track Elementals, Fury of the Eagle, Improved Traps, Track Demons,
 *                Critical Strike, Bestial Wrath.
 * 
 *      Warlock : xxx
 *      Shaman  : xxx
 * 
 *      D Night : Death & Decay, Anti-Magic Zone, Rune of the Fallen Crusader, 
 *                Death Grip, Control Undead, Rune of Razorace, Rune of Spellwarding, 
 *                Rune of Hysteria, Death's Advice, Death Strike, Anti-Magic Shell, 
 *                Icebound Fortitude, Rune of Sanguination, Mind Freeze, Blood Plague, 
 *                Death Coil, Scrificial Pact, Frost Fever, Raise Ally, Chains of Ice, 
 *                Death Gate, On a pale horse, Corpse Exploder, Raise Dead, 
 *                Veteran of the Third War, Rune of the Stoneskin Gargoyle, Dark Command, 
 *                Runeforging, Lichborne, Rune of Unending Thirst, Path of Frost, 
 *                Rune of the Apocalypse, Rune Strike, Val'kyr, Veteran of the Forth War, 
 *                Frost Breath, Death Knight, Consumption, Parry, Death's Advice 2.
 * 
 *      D Hunter: Metamorphsis, Blur, Throw Glaive, Consume magic, Imprison, Chaos brand,
 *                Spectral Sight, Immolation Aura, Disrupt, Glide, Torment, 
 *                Fodder of the Flame, Double Jump, Chaos Strike, Fel Rush, Demon's Bite,
 *                Soul Carver, Spectral Sight, Chaos Nova, Disrupt 2, Critical Strike,
 *                Throw Glaive 2, Immolation Aura 2, Consume Magic 2, Vengeful retreat,
 *                Parry.
 * 
 *      Paladin : xxx
 *      Monk    : xxx
 * 
 *      Druid   : Archdruid's Lunarwing Form, Cyclone, Bear Form, Travel Form, Hibernate,
 *                Cat Form, Mount Form, Barkskin, Rebirth, Entangling Roots, Thrash Cat,
 *                Dash, Flap, Dreamwalk, Soothe, Teleport: Moonglade, Regroth, Moonfire,
 *                Thrash Bear, Clearcasting, Mangle, Ironfur, Ferotious Bite, Prowl, Shred,
 *                Wrath, Stampeding Roar, Revive, Flight Form, Growl, Sunfire, Aquatic Form,
 *                Charm Woodland Creature, Druid, Feline Grave, Entangling Roots 2, 
 *                Flight Form 2, Track Humanoids, Track Beasts, Regroth 2, Rage of the Sleeper,
 *                Moonfire 2, Barkskin 2, Strength of the Wild, Rebirth 2.
 * 
 * 
 *  Create other character & creature stats:
 *      
 * 
 *      Gender, weight, height, size category, body type, body colour, 
 *      eyes colour, hair type, hair colour, tattoos.
 * 
 * 
 *  Create the main menu: 
 * 
 *      
 *      Choose a character & play   ---> character list
 *      Create a new character      ---> new character menu
 *      Delete existing character   ---> character list
 *      Exit
 *      
 * 
 *  Create new character menu:
 * 
 * 
 *      Choose faculty
 *      Choose a race
 *      Choose a gender
 *      Choose a class
 *      Choose other character stuts
 *      Choose a name
 *      Done!
 *      back
 * 
 * 
 *      Characters.txt
 * 
 *      ex.
 * 
 *      Gravehunter Tauren Warrior 85
 *      Bladaholick Troll Shaman 85
 * 
 * 
 *      GraveHunter.txt
 * 
 *      stuts....
 * 
 * 
 * 
 * 
 * 
 * */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
#include <exception>
#include <sstream>
#include <regex>

#include "Spawn.h"

using namespace std;


void goodbyeMessage();

void welcomeMessage(){
    
    cout<<"Welcome to the \"World of Myth\" v.0.0."<<endl;
    cout<<"This is the best text, fantasy MMORPG."<<endl<<endl;
}



void loadCharacterFile( vector<string> &characters){
    
    characters.clear();
    ifstream charFile{"characters.txt"};
    
    if( !charFile){
        
        cerr<<"File not Found! Initiate new game sequence!"<<endl;
        return;
    }
    
    string temp{};
    while( getline(charFile, temp))
        characters.push_back(temp);

    charFile.close();
}



void updateCharacterFile( const vector<string> &characters){
    
    ofstream charFile{"characters.txt"};
    
    if( !charFile){
        
        cerr<<"Error, file not Found! Upadate failed!"<<endl;
        return;
    }
    
    string str{};
    for( uint8_t i=0; i<characters.size(); i++){
        
        str = characters.at(i);
        if( i != characters.size()-1)
            charFile<<str<<" "<<endl;
        else
            charFile<<str;
    }
    
        
    
    charFile.close();
}



uint8_t simpleMenu( string menu, uint8_t numberOfChoices){
    
    uint8_t choice{};
    string menuChoice{};
    
    do{
    
        cout<<menu;
        cin>>menuChoice;
        cout<<endl;
        
        try  {         
            choice = stoi(menuChoice);}
        catch( exception){
            choice = -1;}
        
        if( choice<1 || choice>numberOfChoices)
                cout<<"\nWrong choice, choose between 1 & "
                    <<to_string(numberOfChoices)<<" choices.\n\n\n";
        
    }while( choice<1 || choice>numberOfChoices);
    
    return choice;
}



string chooseName( const vector<string> &characters){
    
    string name{};
    bool isValid{};
            
    do{
        
        isValid = true;
        cout<<"Choose a name for your character: ";
        cin>>name;
        cout<<endl;
           
        string temp{};
        for( string str: characters){
            
            istringstream iss{str};
            iss>>temp;
            
            if( temp == name){
                
                cout<<"\nThat name is already taken!\n";
                isValid = false;
                break;
            }
        }
            
        if( name.size()<3){
            
            cout<<"\nNames needs to be at least 3 characters long!\n";
            isValid = false;
        }
        
        if( !std::regex_match(name, std::regex("^[A-Za-z]+$"))){
            
            cout<<"\nNames needs to be consisted only from letters!\n";
            isValid = false;
        }
        
    }while( !isValid);
    
    return name;
}



Races chooseRace(){
    
    string s{"\n"};
    string menu{" Choose a race from the list below.\n" + s
            + "1)  Tauren" + s
            + "2)  Orc" + s
            + "3)  Troll" + s
            + "4)  Undead" + s
            + "5)  Goblin" + s
            + "6)  Blood_Elf" + s
            + "7)  Pandaren" + s
            + "8)  Human" + s
            + "9)  Dwarf" + s
            + "10  Night_Elf" + s
            + "11) Gnome" + s
            + "12) Draenei" + s
            + "13) Worgen\n\n"};
    
    return static_cast<Races>(simpleMenu(menu,13));
}



Classes chooseClass(){
    
    string s{"\n"};
    string menu{" Choose a class from the list below.\n" + s 
            + "1)  Warrior" + s
            + "2)  Mage" + s
            + "3)  Priest" + s
            + "4)  Rogue" + s
            + "5)  Hunter" + s
            + "6)  Warlock" + s
            + "7)  Shaman" + s
            + "8)  D_Night" + s
            + "9)  D_Hunter" + s
            + "10  Paladin" + s
            + "11) Monk" + s
            + "12) Druid\n\n"};
    
    return static_cast<Classes>(simpleMenu(menu,12));
}



bool chooseDone(string name, Races race, Classes cClass){
    
    return ( name!="None" && race!=Races::None 
        && cClass!=Classes::None)?true:false;
}



bool areYouSure(){
    
    string s{"\n"};
    string menu{"Are you sure you want to go back?\n" 
        + s + "1) Yeah\t 2) No!!\n"};
    
    return ( simpleMenu(menu,2)-1==0)?true:false;
}



void createNewCharacter(
    
    vector<string> &characters){
    
    uint8_t choice{0};
    string name{"None"},s{"\n"};
    Races race{Races::None};
    Classes cClass{Classes::None};
    string menu{};
    bool done = false;
    bool back = false;
    
    do{
        
        menu ="\tCREATE NEW CHARACTER\n" + s
                + "1) Name : " + name + s
                + "2) Race : " + toString(race) + s
                + "3) Class: " + toString(cClass) + s
                + "--------------------" + s
                + "4) Done" + s
                + "5) Back\n\n";
        
        choice = simpleMenu(menu,5);
        
        if( choice == 1)
            name = chooseName(characters);
        else if( choice == 2)
            race = chooseRace();
        else if( choice == 3)
            cClass = chooseClass();
        else if( choice == 4)
            done = chooseDone(name,race,cClass);
        else
            back = areYouSure();
    
    }while( !(done || back));
    
    if( back)
        return;
    //  *** create specific character file ***
    
    cout<<"Congratulations, you have created the \""
        <<name<<"\" character.\n"<<"Choose your newly created character to play "
        <<"\"World Of Myth\".\n\n";
    
    characters.push_back(name + " " + toString(race) 
                                + " " + toString(cClass) + " 1");
    updateCharacterFile(characters);
}



void mainMenu(){
    
    uint8_t choice{};
    string menu{},s{"\n"};
    vector<string> characters{};
    
    welcomeMessage();
    loadCharacterFile( characters);
    
    do{     //  MAIN MENU LOOP
        
        if( characters.size()==0){    //  The character list is empty so we have a new game mode.
            
            menu = "\tNEW GAME MODE\n" + s
                + "1) Create a new character" + s
                + "2) Exit\n\n";
            
            choice = simpleMenu( menu,2);
              
            if( choice==1)
                createNewCharacter( characters);
            else
                break;
            
        }
        else{
            
            menu = "\tMAIN MENU\n" + s
                + "1) Select a character to play" + s
                + "2) Create a new character" + s
                + "3) Delete a character" + s
                + "4) Exit\n\n";
            
            choice = simpleMenu( menu,4);
              
            if( choice==1){
                
                string output{};
                uint8_t num{0}, embededChoice{};
                
                menu = "\tSELECT CHARACTER MENU\n";
                for( string str: characters)
                    menu += s + to_string(++num) + ") " + str;
                menu += s + to_string(++num) + ") back\n\n";
                
                embededChoice = simpleMenu(menu,num);
                
                if( embededChoice==num)
                    continue;
                
                istringstream iss(characters.at(embededChoice-1));
                string name{};
                string r{};
                string c{};
                uint8_t lvl{};
                
                iss>>name>>r>>c>>lvl;
                Races race =  toRaces(r);
                Classes cClass = toClasses(c);
                
                Spawn hero{name,race,cClass};
                
                //  YOU ARE READY TO PLAY THE GAME!
                
            }
            else if( choice == 2){
                
                createNewCharacter( characters);
            }
            else if( choice == 3){  //  delete char
                
                string output{};
                uint8_t num{0}, embededChoice{};
                
                menu = "\tDELETE CHARACTER MENU\n";
                for( string str: characters)
                    menu += s + to_string(++num) + ") " + str;
                menu += s + to_string(++num) + ") back\n\n";
                
                embededChoice = simpleMenu(menu,num);
                
                if( embededChoice==num)
                    continue;
                
                //  *** delete specific character file ***
                srand(time(nullptr));
                istringstream iss{characters.at(embededChoice-1)};
                bool dialog{static_cast<bool>(rand()%2)};
                string name{};
                iss>>name;
                
                if( dialog==0)
                    cout<<"\n"<<name<<" says: \"fuck.. Nooooo! Don't do it Fhaedon!!\"\n\n";
                else
                    cout<<"\n"<<name<<" says: \"fuck it! I'm out of here, sorry you sucker!!\"\n\n";
                    
                characters.erase( characters.begin() + embededChoice-1);
                updateCharacterFile(characters);
                
                //  THE CHARACTER HAS BEEN DELETED!
            }
            else
                break;
        }
    }
    while( true); // ENDS MAIN MENU ONLY WITH BREAKs
    
    //  here we are outside main menu.. that means that the user selected exit!
    goodbyeMessage();
    
}



void goodbyeMessage(){
    
    cout<<"\t\"World of Myth\" v.0.0.\n"<<endl;
    cout<<"Now go hero, tell your friends about all the adventures youve been through today"<<endl;
    cout<<"& dont forget to come bk again to the best text, fantasy MMORPG in the universe!\n"<<endl;
}



int main(){
    
    mainMenu();
    return 0;
}