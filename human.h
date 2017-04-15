#ifndef HUMAN_H
#define HUMAN_H
#include<string>
using namespace std;

class human{
public:
    human();
    human(char type);
    char getType();
    void setType(char type);
private:
    char type;
};
#endif
