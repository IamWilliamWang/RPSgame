#ifndef TOOLBOX_H
#define TOOLBOX_H
#include"computer.h"
/*Toolbox玩家的类，无拓展功能*/
class Toolbox : public computer
{
public:
    Toolbox();
    Toolbox(char type);
    Toolbox(string name);
};

#endif // TOOLBOX_H
