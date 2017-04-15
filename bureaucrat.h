#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include"computer.h"
/*Bureaucrat玩家的类，无拓展功能*/
class Bureaucrat : public computer
{
public:
    Bureaucrat();
    Bureaucrat(char type);
    Bureaucrat(string name);
};

#endif // BUREAUCRAT_H
