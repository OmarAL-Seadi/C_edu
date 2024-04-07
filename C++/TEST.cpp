
#include <iostream>
using namespace std;

struct student{
 double mark;
 double mark2;
 double avg;
};
student Avg(student c){
 c.avg=(c.mark+c.mark2)/2;
 return c;
}

int main(){
 student c;
 cout <<"Enter the  Firts Mark:";
 cin >>c.mark;
 cout <<"Enter the secand Mark:";
 cin >>c.mark2;
 cout << "The Average is : "<<Avg(c).avg;
}






#include <iostream>
using namespace std;
void numberFunction(int i)
{
 if(i>=1){
 	if(i%2!=0)
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

