#include "bureaucrat.h"
#include "computer.h"
Bureaucrat::Bureaucrat()
{
    computer();
    char newTypes[5];
    for(int i=0;i<5;i++)
        newTypes[i] = 'P';
    this->setTypes(newTypes);
}
Bureaucrat::Bureaucrat(char type)
{
    this->type=type;
}
Bureaucrat::Bureaucrat(string name)
{
    this->name=name;
}
