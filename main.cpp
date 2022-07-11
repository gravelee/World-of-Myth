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
 *      level, experience points, talent points, inventory, itemSlots
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
 *  Create additional only creature races : 
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
 *      Unchategorized.
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
 *  Create other character & creature stuts:
 *      
 * 
 *      Gender, weight, height, hight category, body type, body colour, 
 *      eyes colour, hair type, hair colour, tatoos.
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
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void welcome(){
    
    cout<<"Welcome to the \"World of Myth\" v.0.0."<<endl;
    cout<<"This is the best text, fantasy MMORPG."<<endl<<endl;
}

void getChars( vector<string> &characters){
    
    fstream newfile;
    newfile.open( "characters.txt",ios::in);
    
    if( !newfile.is_open()){
        
        cout<<"Wrong!"<<endl;
        return;
    }
    
    string temp{};
    while( getline(newfile, temp)){
         
        characters.push_back(temp);
    }
    
    newfile.close();
}

void mainMenu( vector<string> &characters){
    
    bool newGame{};
    int choice{};
    
    do{
        if( characters.size() == 0){
            
            newGame = 0;
            do{
                
                cout<<"\t\t\tMAIN MENU"<<endl<<endl;
                cout<<"1)\tCreate a new character."<<endl;
                cout<<"2)\tExit"<<endl<<endl;
                
                cin>>choice;
                
                if( choice<1 || choice>2)
                    cout<<endl<<"Wrong choice, choose between 1 & 2 options."<<endl<<endl<<endl;
                
            }while( choice<1 || choice>2);
            
            if( choice == 1){
                
                
            }
        }
        else{
            
            newGame = 1;
            do{
                
                cout<<"\t\t\tMAIN MENU"<<endl<<endl;
                cout<<"1)\tChoose a character."<<endl;
                cout<<"2)\tCreate a new character."<<endl;
                cout<<"3)\tDelete existing character."<<endl;
                cout<<"4)\tExit."<<endl<<endl;
                
                cin>>choice;
                
                if( choice<1 || choice >4)
                    cout<<endl<<"Wrong choice, choose between 1 & 4 options."<<endl<<endl<<endl;
                
            }while( choice<1 || choice>4);
            
            if( choice == 1){
                
                int num{1},chooseChar{0};
                
                do{
                   
                    cout<<"\t\tCHARACTER MENU"<<endl<<endl;
                    
                    for( string character: characters)
                        cout<<num++<<")\t"<<character<<endl;
                        
                    cin>>chooseChar;
                    
                    if( chooseChar<1 || chooseChar>characters.size())
                        cout<<endl<<"Wrong choice, choose between 1 & "<<characters.size()<<" characters."<<endl<<endl<<endl;
                    
                }while( chooseChar<1 || chooseChar>characters.size());
                    
                //  handle num
                
            }
            else if( choice == 2){
                
                
            }
            else if( choice == 3){
                
                
            }
        }
    }
    while( ( newGame && choice!=4) || ( !newGame && choice!=2)); 
}

int main(){
    
    int choice{};
    vector<string> characters{};
    
    welcome();
    getChars(characters);
    mainMenu(characters);
    
    
    
    return 0;
} 