#include<iostream>
#include<vector>
#include<time.h>
#include<stdlib.h>
#include"referee.h"
using namespace std;

int main()
{
    cout << "Please input names:";
    vector<string> names;//储存输入的名字
    for(int i=0;i<8;i++)
    {
        string temp;
        cin >> temp;
        names.push_back(temp);
    }\

    referee myReferee;

    cout << "Congratulations! The winner is " << myReferee.Judge(names) << "." << endl;

    return 0;
}
