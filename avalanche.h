#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "computer.h"
/*Avalanche玩家的类，无拓展功能*/
class Avalanche : public computer
{
public:
    Avalanche();
    Avalanche(char type);
    Avalanche(string name);
};

#endif // AVALANCHE_H
