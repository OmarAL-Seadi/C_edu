#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void adding (string &Name,int &ID,int &Age,string &Job, int &sal, int &numberOfItems , int size);
void printing (int size,string Name,int ID, int Age,string Job , int sal );
void Updating (string &Name, int &ID, int &Age ,string &Job, int &sal, int numberOfItems);
void Delete (string &Name , int &ID , int &Age,string &Job, int &sal, int &numberOfItems);
int main()
{
int size=5 ,numberOfItems=size ;
string Name[size]={"ff","gg""ee","hh","ll","kk"}, Job[size]={"ff","gg","ee","hh","ll","kk"},PickItUp, list[8]{"Adding","Aearch ","Update ","Delete","Sort","Display"};
int Age[size]={1,2,3,4,5}, ID[size]={1,2,3,4,5} , sal[size]={1,2,3,4,5};
cout<<"Main Services: ";

void printing (int size,string Name,int ID, int Age,string Job , int sal );

	
	
}
void adding (string Name[] ,int ID,int Age,string Job, int sal, int numberOfItems , int size)
{
if (numberOfItems < size)
{
	string Nname ,Njob;
	int Nid , Nage , Nsal;
	cout<<"new name";
	cin>>Nname;
	cout<<"new ID";
	cin>>Nid;
	cout<<"new age";
	cin>>Nage;
		cout<<"new job";
	cin>>Njob;
		cout<<"new salary";
	cin>>Nsal;
Name[numberOfItems]= Nname;
ID[numberOfItems]= Nid;
Age[numberOfItems]= Nage;
Job[numberOfItems]= Nname;
sal[numberOfItems]= Nid;
numberOfItems++;
}
}
void printing (int size,string Name,int ID, int Age,string Job , int sal )
{
	for(i=0;i<size;i++)
	cout<<Name[i];
		for(i=0;i<size;i++)
	cout<<ID[i];
		for(i=0;i<size;i++)
	cout<<Age[i];
			for(i=0;i<size;i++)
	cout<<Job[i];
			for(i=0;i<size;i++)
	cout<<sal[i];
}
void Updating (string &Name, int &ID, int &Age ,string &Job, int &sal, int numberOfItems);
string sName ,updatedName , updatedjob ;
int updatedID, updatedAge , updatedsal;
cout<<"name need to update";
cin>>sName;
for (int i=0;i< numberOfItems ;i++)
{
if (Name[i]== sName) {
cout<<"Enter new name:";
cin>>updatedName ;
Name [i]= updatedName;
cout<<"Enter new ID:" ;
cin>>updatedID ;
ID[i]= updatedID;
cout<<"Enter new Age";
cin>>updatedAge ;
Age[i]= updateAge;
cout<<"Enter new job";
cin>>updatedjob ;
Job[i]= updatedjob;
cout<<"Enter new salary";
cin>>updatedsal ;
sal[i]= updatedsal;
break ;
}
void Delete (string &Name , int &ID , int &Age,string &Job, int &sal, int &numberOfItems);
if (numberOfItems > 0)
 {
 string sName;
  cout<<"Enter student name to delete: ";
cin>>sName;
for (int i=0;i< numberOfItems;i**)
  if (names [i]== sName) {
   for (int j=i; j< numberOfItems-1; j++)
    {
     names [j] =names [j+1];
     ID [j] =ID [j+1];
      Age [j] =Age [j+1];
      Job [j] =Job [j+1];
      sal [j] =sal [j+1];
    }
     numberOfItems--;
      break;
   }


