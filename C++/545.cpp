#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;
void List (string Main[]);
void printing (int size,string Name[],int ID[], int Age[],string Job[] , int sal[] );
int main()
{
int size=8, numberOfItems, k=0;
string Name[size]={"ff","gg","ee","hh","ll"}, Job[size]={"ff","gg","ee","hh","ll"};
string Main[7]{"Adding","Search ","Update ","Delete","Sort","Display","Stop"};
int Age[size]={1,2,3,4,5}, ID[size]={1,2,3,4,5} , sal[size]={1,2,3,4,5};
for(int i=0;i<size;i++){
if(Age[i]==0){
numberOfItems=i;
break;}}
string	PickItUp;
do{
cout<<"Main Services: "<<endl;
List (Main);
cin>>PickItUp;
transform(PickItUp.begin(), PickItUp.end(), PickItUp.begin(), ::toupper);
if (PickItUp =="STOP"){
	break;
	}
if (PickItUp =="ADDING"){
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
numberOfItems++;}
} 
if (PickItUp =="UPDATE"){
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
Age[i]= updatedAge;
cout<<"Enter new job";
cin>>updatedjob ;
Job[i]= updatedjob;
cout<<"Enter new salary";
cin>>updatedsal ;
sal[i]= updatedsal;
int k=1;
break ;}}
if (k<=0)
cout<<"Not found"<<endl;
}
if (PickItUp =="DELETE"){
if (numberOfItems > 0)
 {
 string sName;
  cout<<"Enter student name to delete: ";
cin>>sName;
for (int i=0;i< numberOfItems;i++){
  if (Name [i]== sName) {
   for (int j=i; j< numberOfItems-1; j++)
    {
     Name[j] =Name [j+1];
     ID [j] =ID [j+1];
      Age [j] =Age [j+1];
      Job [j] =Job [j+1];
      sal [j] =sal [j+1];
      k=1;
    }
     numberOfItems--;
break ;}}
if (k<=0)
cout<<"Not found"<<endl;
}
}
}
while (PickItUp != "STOP");
return 0;
}

void printing (int size,string Name[],int ID[], int Age[],string Job[] , int sal[] )
{
	for(int i=0;i<size;i++){
	cout<<Name[i];}
		for(int i=0;i<size;i++)
	cout<<ID[i];
		for(int i=0;i<size;i++)
	cout<<Age[i];
			for(int i=0;i<size;i++)
	cout<<Job[i];
			for(int i=0;i<size;i++)
	cout<<sal[i];
}
void List (string Main[])
{

	for(int i=0;i<7;i++){
	cout<<Main[i]<<endl;}	
}
