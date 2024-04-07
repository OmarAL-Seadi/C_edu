#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;
void list (string Main[], int size);
void printing (int size,string Name[],int ID[], int Age[],string Job[] , int sal[] );
int main()
{
int size=6 ,numberOfItems=size ;
string Name[size]={"ff","gg""ee","hh","ll"}, Job[size]={"ff","gg","ee","hh","ll"},PickItUp;
string Main[size]{"Adding","Search ","Update ","Delete","Sort","Display"};
int Age[size]={1,2,3,4,5}, ID[size]={1,2,3,4,5} , sal[size]={1,2,3,4,5};
cout<<"Main Services: ";
list (Main,size);
cin>>PickItUp;
  transform(PickItUp.begin(), PickItUp.end(), PickItUp.begin(), ::toupper);
if (PickItUp==ADDING);
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
void list (string Main[], int size)
{

	for(int i=0;i<size;i++){
	cout<<Main[i]<<endl;}	
}
