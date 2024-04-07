// Omar Aqeel Al-Seadi 2220004560 M06
#include <iostream>
using namespace std;
void numberFunction(int i)
{
if(i>=1)
{
 
if(i%2!=0)
 cout <<i<<"\t";
--i;
 numberFunction(i);}
else
return;
}
int main()
{ 
int n;
cout<<"Enter any natural number :";
cin>>n;
numberFunction(n);
return 0; }
