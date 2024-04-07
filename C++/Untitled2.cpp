#include <iostream>
using namespace std;
void numberFunction(int i)
{
 if(i>=1){
 	if(i%2==0)
 cout <<"The number is:"<<i<<"\t";
 --i;
 numberFunction(i);}
 else
 return;
}
int main()
{ 

int n;
cout<<"inter number";
cin>>n;
numberFunction(n);

 return 0; }
