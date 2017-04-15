#include<iostream>
#include<string>
#include"computer.h"
#include"referee.h"

using namespace std;

char referee::refoutput(computer& h,computer& c){
    char htype = h.getType();
    char ctype = c.getType();

    if (htype == ctype){ //judge a output that is same
        return 'T';
    }
    if ((htype == 'S' && ctype == 'P' || (htype == 'R' && ctype == 'S')) || (htype == 'P' && ctype == 'R')){//human win the output
        return 'W';
    }
    return 'L';//human lose the output
}

//根据两个玩家的指针来判断胜负关系
bool referee::fisrtOneWins(computer *player1,computer *player2)
{
    int score_1=0,score_2=0;//两个比分

    for(int i=0;i<5;i++)
    {
        char htype = player1->types[i];
        char ctype = player2->types[i];

        /*以下皆为计算比分的函数*/
        if (htype == ctype){ //judge a output that is same
            continue;
        }
        if ((htype == 'S' && ctype == 'P' || (htype == 'R' && ctype == 'S')) || (htype == 'P' && ctype == 'R')){//human win the output
            score_1++;
        }
        else
            score_2++;

        //cout << endl << "player1 name=" << player1->getName()<<" type="<<player1->getType()<<endl;
        //cout << endl << "player2 name=" << player2->getName()<<" type="<<player2->getType()<<endl;
    }
    if(score_2 > score_1) //如果player2比player1分高，就是player2赢
        return false;
    else //题目说If both win the same number of plays,
         //then the player with a lower index advances.
        return true;
}
string referee::Judge(vector<string> names)
{
    //初始化
    RandomComputer *randomcomputer = new RandomComputer[5];
    randomcomputer->setName("RandomComputer");

    Avalanche *avalanche = new Avalanche[5];
    avalanche->setName("Avalanche");

    Bureaucrat *bureaucrat = new Bureaucrat[5];
    bureaucrat->setName("Bureaucrat");

    Toolbox *toolbox = new Toolbox[5];
    toolbox->setName("Toolbox");

    Crescendo *crescendo = new Crescendo[5];
    crescendo->setName("Crescendo");

    PaperDoll *paperdoll = new PaperDoll[5];
    paperdoll->setName("PaperDoll");

    FistfullODollars *fistfullODollars = new FistfullODollars[5];
    fistfullODollars->setName("FistfullODollars");

    vector<computer> *gamers = new vector<computer>();
    for(int i=0;i<8;i++)
    {
        if(names[i]=="RandomComputer")
            gamers->push_back(*randomcomputer);
        else if(names[i]=="Avalanche")
            gamers->push_back(*avalanche);
        else if(names[i]=="Bureaucrat")
            gamers->push_back(*bureaucrat);
        else if(names[i]=="Toolbox")
            gamers->push_back(*toolbox);
        else if(names[i]=="Crescendo")
            gamers->push_back(*crescendo);
        else if(names[i]=="PaperDoll")
            gamers->push_back(*paperdoll);
        else if(names[i]=="FistfullODollars")
            gamers->push_back(*fistfullODollars);
    }


    vector<computer> *restGamers = new vector<computer>();
    for(int i=0;i<8;i+=2)
    {
        computer* player1=&gamers->at(i);
        computer* player2=&gamers->at(i+1);
        if(this->fisrtOneWins(player1,player2))
        {
            restGamers->push_back(*player1);
        }
        else
            restGamers->push_back(*player2);
    }

    delete gamers;
    gamers=restGamers;
    restGamers = new vector<computer>();
    for(int i=0;i<4;i+=2)
    {
        computer* player1=&gamers->at(i);
        computer* player2=&gamers->at(i+1);
        if(this->fisrtOneWins(player1,player2))
        {
            restGamers->push_back(*player1);
        }
        else
            restGamers->push_back(*player2);
    }

    delete gamers;
    gamers=restGamers;
    restGamers = new vector<computer>();
    for(int i=0;i<2;i+=2)
    {
        computer* player1=&gamers->at(i);
        computer* player2=&gamers->at(i+1);
        if(this->fisrtOneWins(player1,player2))
        {
            restGamers->push_back(*player1);
        }
        else
            restGamers->push_back(*player2);
    }
    return restGamers->at(0).getName();
}
