#include<iostream>
#include<fstream>
using namespace std;


main()
{
    int a=0;
    string input;
    fstream line;
    line.open("task1.txt", ios::in);
    while(!line.eof())
    {
        getline(line, input);
        a++;
    }
    cout<<"Total number of lines: "<<a;
}
