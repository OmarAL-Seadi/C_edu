#include<iostream>
#include<fstream>
int pw(int *pbase);
using namespace std;
int main()
{
int number;
int *pointer;
cout<<"enter Number:";
cin>>number;
pointer=&number;
cout<<pw(pointer);
}
int pw(int *pbase){
int power;
power=*pbase* *pbase;
return power;
}
