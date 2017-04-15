#ifndef COMPUTER_H
#define COMPUTER_H
#include<string>

using namespace std;
/*在原有的类增加了一个name属性，因为main中的vector存的是基类computer，所有将这个属性加到这里*/
class computer{
public:
    computer();
    computer(char type);

    char getType();
    void setType(char type);

    void setTypes(char* chs);
    char getTypeAt(int position);

    string getName();
    void setName(string name);

    char types[5];//本来是用setTypes和getTypeAt获取或赋值，但是为了快速就扔到public这里
protected:
    char type;

    string name;
};
#endif
