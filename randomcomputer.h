#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "computer.h"
#include <string>
/*RandomComputer玩家的类，无拓展功能*/
class RandomComputer : public computer
{
public:
    RandomComputer();
    RandomComputer(char type);
    RandomComputer(string name);
};

#endif // RANDOMCOMPUTER_H
