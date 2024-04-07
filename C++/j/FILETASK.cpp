#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string name;
string id;
string number;


ofstream Myfile("MyInfo.txt");
if(Myfile.is_open())
{
cout<<"pls enter your name: ";
cin>>name;
cout<<"pls enter your ID: ";
cin>>id;
Myfile<<"Name:"<<name<<endl;
Myfile<<endl<<"ID:"<<id<<endl;


Myfile.close();
}
else
 cout<<"File did not open: ";
 
Myfile.open("MyInfo.txt",ios::app);
if(Myfile.is_open())
{
cout<<"pls enter your phone number: ";
cin>>number;
Myfile<<endl<<"Number: "<<number;
Myfile.close();
}
else
cout<<"file did not open";

string B;

ifstream infile("MyInfo.txt");
if(infile.is_open())
{
while(getline(infile,B))
 cout<<endl<<B<<endl;
}

return 0;
}
