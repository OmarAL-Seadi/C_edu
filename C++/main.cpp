#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size=4, i;
	string items[size]={"FarsOB","Ahmad","RamiMI","SamMD"},rotatedItems[size]={"FarsOB", "Ahmad","RamiMI","SamMD"};
	int items2[size]={5,10,7,10};
	string f,g;
for ( i = 1; i < size; i++)
  {
    for (int j = 0; j < size-i; j++)
    {
      if (rotatedItems[j] > rotatedItems[j+1])
      {
        string temp = rotatedItems[j];
        rotatedItems[j] = rotatedItems[j+1];
        rotatedItems[j+1] = temp;
    }
  }
}
cout<<"\nItems before rotation : \n";
for (int i=0;i<size;i++)
cout<<items[i]<<"\t";
cout<<"\n";
cout<<"\nItems after rotation : \n";
for (int i=0;i<size;i++)
cout<<rotatedItems[i]<<"\t";
cout<<"\n";
cout<<"enter your name";
cin>>f;
for(i=0;i<size;i++)
if(items[i]==f)
{
cout<<"enter your updated name";
cin>>g;
items[i]=g;
break;
}
int sum=0;
 for(int i = 0; i < size; i++)
  {
    sum = sum + items2[i];
  }
cout<<"s"<<sum<<endl;
cout <<sum/size;
return 0;
}
