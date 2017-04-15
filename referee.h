#ifndef referee_H
#define referee_H
#include"computer.h"
#include"human.h"
#include"randomcomputer.h"
#include"avalanche.h"
#include"bureaucrat.h"
#include"toolbox.h"
#include"crescendo.h"
#include"paperdoll.h"
#include"fistfullodollars.h"
#include<vector>
using namespace std;

class referee{
public:
    char refoutput(computer& h,computer& c);
    bool fisrtOneWins(computer *player1,computer *player2);//根据两个玩家的指针来判断胜负关系
    string Judge(vector<string> names);
};
#endif
