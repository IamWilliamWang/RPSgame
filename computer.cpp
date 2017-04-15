#include<iostream>
#include<string>
#include "computer.h"

using namespace std;

computer::computer():type('S'){//default construct

}

computer::computer(char type):type((type=='S'||type=='R'||type=='P')?type:'S'){
    //this is a function that if a type='s'or'r'or'p', it will equie to type, otherwise will equie to 's', this is initialized the value.
}

char computer::getType(){//get value
    return type;
}
void computer::setType(char type){//set value
    this->type = type;
}
string computer::getName()
{
    return this->name;
}

void computer::setName(string name)
{
    this->name=name;
}

void computer::setTypes(char* chs)
{
    for(int i=0;i<5;i++)
        types[i]=chs[i];
}

char computer::getTypeAt(int position)
{
    return this->types[position];
}
