#include "crescendo.h"
#include "computer.h"
Crescendo::Crescendo()
{
    computer();
    char newTypes[5];
    newTypes[0] = 'P';
    newTypes[1] = 'S';
    newTypes[2] = 'R';
    newTypes[3] = 'P';
    newTypes[4] = 'S';
    this->setTypes(newTypes);
}

Crescendo::Crescendo(char type)
{
    this->type=type;
}
Crescendo::Crescendo(string name)
{
    this->name=name;
}
