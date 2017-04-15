#include "toolbox.h"
#include "computer.h"
Toolbox::Toolbox()
{
    computer();
    char newTypes[5];
    for(int i=0;i<5;i++)
        newTypes[i] = 'S';
    this->setTypes(newTypes);
}

Toolbox::Toolbox(char type)
{
    this->type=type;
}
Toolbox::Toolbox(string name)
{
    this->name=name;
}
