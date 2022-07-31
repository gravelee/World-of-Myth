#include "Spawn.h"
#include <iostream>
#include <sstream>

Spawn::Spawn( string name, Races race, Classes cClass, unsigned short lvl, unsigned long long exp): name{name}, race{race}, cClass{cClass}, lvl{lvl}, exp{exp}{
    
    std::cout<<"Hero " + name +" has been loaded!!! Get ready! The game is ready to begin!"<<std::endl;
}

void Spawn::expGain( unsigned long long exp){
    
    bool lvlGained{true};
    unsigned long long expToGain{exp};
    
    do{
        
        unsigned long long lvlCap{ 
            static_cast<unsigned long long>(
                toExpPerLvl("lvl" +  std::to_string(lvl)))};
        
        //std::cout<<"lvlCap: "<<lvlCap<<"\n"<<std::endl;
        
        if( ( expToGain + this->exp > lvlCap) && ( lvl < 60)){
            
            std::cout<<"\nGongratz, you reached level "<<lvl+1<<"!"<<std::endl;
            expToGain -= lvlCap;
            lvl++;
        }
        else{
            
            this->exp += expToGain;
            lvlGained = false;
        }
        
    }while( lvlGained);
}

void Spawn::printSpawn() const{
    
    std::cout.flush();
    std::cout<<"\nCharacter\nName: "<<name<<"\nRace: "<<toString(race)
        <<"\nClass: "<<toString(cClass)<<"\nLevel: "<<lvl
        <<"\nExperience: "<<std::to_string(exp)<<std::endl;
}

unsigned short Spawn::getLevel() const{
    
    return lvl;
}

Spawn::~Spawn(){
    
    /*
     *  delete inventory;
     */
    
    std::cout<<"Destractor for the Spawn Class has been called!\n"<<std::endl;
}
