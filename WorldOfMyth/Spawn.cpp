#include "Spawn.h"
#include <iostream>

Spawn::Spawn( string name, Races race, Classes cClass, uint8_t lvl): name{name}, race{race}, cClass{cClass}, lvl{lvl}
{
    std::cout<<"Hero has been loaded!!! Congrats!"<<std::endl;
}

Spawn::~Spawn()
{
    std::cout<<"Destractor for the Spawn Class has been called!\n"<<std::endl;
}


