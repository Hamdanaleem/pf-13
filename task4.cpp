#include<iostream>
#include<fstream>
using namespace std;

void getdetails(string names[], int ages[], float matric[], float fsc[],float ecat[], int size, int &count );
void save(string names[], int ages[], float matric[], float fsc[],float ecat[], int count, string filename );


main()
{
     int size=100;
    string names[size];
    int ages[size];
    float matric[size];
    float fsc[size];
    float ecat[size];
    int count=0 ;
    string filename="task.txt";
    getdetails(names, ages, matric, fsc, ecat, size, count );
    save(names, ages, matric, fsc, ecat, count, filename );

}
void getdetails(string names[], int ages[], float matric[], float fsc[],float ecat[], int size, int &count )
{
    string confirm;
    cout<<"Enter the student's name: ";
    cin>>names[count];
    cout<<"Enter the student's age: ";
    cin>>ages[count];
    cout<<"Enter the student's Matric marks: ";
    cin>>matric[count];
    cout<<"Enter the student's Fsc marks: ";
    cin>>fsc[count];
    cout<<"Enter the student's Ecat marks: ";
    cin>>ecat[count];
    count++;
    cout<<"Enter No to Stop or Yes to Continue Enter: ";
    cin>>confirm;
    if(confirm=="Yes")
    {
            getdetails(names, ages, matric, fsc, ecat, size, count );
    }
}
void save(string names[], int ages[], float matric[], float fsc[],float ecat[], int count, string filename )
{
    fstream line;
    string input;
    line.open(filename, ios::out);
    for(int i=0; i<count; i++)
    {
        line<<"Name: ";
        line<<names[i]<<endl;
        line<<"Age: ";
        line<<ages[i]<<endl;
        line<<"Matric Marks: ";
        line<<matric[i]<<endl;
        line<<"Fsc Marks: ";
        line<<fsc[i]<<endl;
        line<<"Ecat Marks: ";
        line<<ecat[i]<<endl;
        cout<<endl;
    }
}