#include "paperdoll.h"
#include "computer.h"
PaperDoll::PaperDoll()
{
    computer();
    char newTypes[5];
    newTypes[0] = 'P';
    newTypes[1] = 'S';
    newTypes[2] = 'S';
    newTypes[3] = 'P';
    newTypes[4] = 'S';
    this->setTypes(newTypes);
}

PaperDoll::PaperDoll(char type)
{
    this->type=type;
}
PaperDoll::PaperDoll(string name)
{
    this->name=name;
}
