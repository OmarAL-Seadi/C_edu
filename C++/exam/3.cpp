#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int num, num1;
cout<<"enter number"<<endl;
cin>>num1;
ofstream inrfile;
ofstream.open("thefile.txt",ios::app);
if(inrfile.is_open()){	
inrfile<<num1<<endl;
	inrfile.close();}
ifstream infile("thefile.txt");
if(infile.is_open()){
while (!infile.eof()){
	infile>>num;
	}
	infile.close();
	cout<<"sales"<<endl;
	cout<<num<<endl;}
else
cout<<"Error";
double vat;
vat=num*1.15;
cout<<vat;

