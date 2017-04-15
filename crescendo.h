#ifndef CRESCENDO_H
#define CRESCENDO_H
#include"computer.h"
/*Crescendo玩家的类，无拓展功能*/
class Crescendo : public computer
{
public:
    Crescendo();
    Crescendo(char type);
    Crescendo(string name);
};

#endif // CRESCENDO_H
