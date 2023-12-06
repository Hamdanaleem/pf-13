#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int countCharacters(string filename);
main()
{
    int a=0;
    string filename="task1.txt";
    a=countCharacters(filename);
    cout<<"Total number of characters: "<<a;
}
int countCharacters(string filename)
{
    string input;
    char input_1; 
    int b=0;
    fstream line;
    line.open(filename, ios::in);
    line>>input_1;
    while(!line.eof())
    {   
        getline(line, input);
        for(int i=0; i<input.size(); i++)
        {
            if(tolower(input_1)==tolower(input[i]))
            {
            b=b+1;
            }
        }
    }
    line.close();
    return b;
}
