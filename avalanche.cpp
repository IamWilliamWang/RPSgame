#include "avalanche.h"
#include "computer.h"
Avalanche::Avalanche()
{
    computer();
    char newTypes[5];
    for(int i=0;i<5;i++)
        newTypes[i] = 'R';
    this->setTypes(newTypes);
}
Avalanche::Avalanche(char type)
{
    this->type=type;
}
Avalanche::Avalanche(string name)
{
    this->name=name;
}
