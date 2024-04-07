#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char a= 'L' ,b= 'M' ;
char *p1=&a;
char *p2=&b;
*p1='N';
p2=p1;
cout<<*p1<<"\n"<<*p2;
}
