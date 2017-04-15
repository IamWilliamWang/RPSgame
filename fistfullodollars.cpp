#include "fistfullodollars.h"
#include "computer.h"
FistfullODollars::FistfullODollars()
{
    computer();
    char newTypes[5];
    newTypes[0] = 'R';
    newTypes[1] = 'P';
    newTypes[2] = 'P';
    newTypes[3] = 'R';
    newTypes[4] = 'P';
    this->setTypes(newTypes);
}

FistfullODollars::FistfullODollars(char type)
{
    this->type=type;
}
FistfullODollars::FistfullODollars(string name)
{
    this->name=name;
}
