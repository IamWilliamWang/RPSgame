#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include"computer.h"
/*PaperDoll玩家的类，无拓展功能*/
class PaperDoll : public computer
{
public:
    PaperDoll();
    PaperDoll(char type);
    PaperDoll(string name);
};

#endif // PAPERDOLL_H
