#include "randomcomputer.h"
#include "computer.h"
#include "time.h"
RandomComputer::RandomComputer()
{
    computer();
    srand(time(NULL));
    char newTypes[5];
    for(int i=0;i<5;i++)
    {
        switch(rand()%3)
        {
        case 0:
            newTypes[i] = 'S';//用computer类里的types来储存每一局要出什么
            break;
        case 1:
            newTypes[i] = 'P';
            break;
        case 2:
            newTypes[i] = 'R';
            break;
        }
    }
    this->setTypes(newTypes);
}

RandomComputer::RandomComputer(char type)
{
    this->type=type;
}
RandomComputer::RandomComputer(string name)
{
    this->name=name;
}
