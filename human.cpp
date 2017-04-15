#include<iostream>
#include"human.h"
#include<string>

using namespace std;

human::human():type('S'){//default construct

}

human::human(char type):type((type=='S'||type=='R'||type=='P')?type:'S'){
    //this is a function that if a type='s'or'r'or'p', it will equie to type, otherwise will equie to 's',this is initialized the value.
}

char human::getType(){//get value
    return type;
}

void human::setType(char type){//set value
    this->type = type;
}
