#include <iostream>
#include <string>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
struct Update{
	string updatedName,updatedjob;
	int updatedAge,updatedID,updatedsal;	
};
struct lists{
string Name;
string Job;
int Age;
int ID;
int sal;
};
void List (string Main[]);
void adding (string Name[],int ID[],int Age[],string Job[], int sal[], int &numberOfItems , int size);
void printing (int size,string Name[],int ID[], int Age[],string Job[] , int sal[],int numberOfItems );
void Updating (string Name[], int ID[], int Age[] ,string Job[], int sal[], int &numberOfItems);
void Delete (string Name[] , int ID[] , int Age[],string Job[], int sal[], int &numberOfItems);
int Num (int Age[],int &numberOfItems,int size);
int main()
{
int size=7, numberOfItems, k=0;
lists data[size];

string Name[size]={"Omar","A.l.i","F5amh","Fahad","SoSo"}; 
string Job[size]={"king","ymany","gay","f7al","ysoy 7dad"};
string Main[7]{"Adding","Search ","Update ","Delete","Sort","Display","Stop"};
int Age[size]={19,19,17,20,19};
int ID[size]={6921,6969,2121,2169,69216921} ;
int sal[size]={100000,10000000000000000,0,10000000000000,-5};

for(int i=0;i<size;i++)
data[i].Name=Name[i];
for(int i=0;i<size;i++)
data[i].Age=Age[i];
for(int i=0;i<size;i++)
data[i].ID=ID[i];
for(int i=0;i<size;i++)
data[i].Job=Job[i];
for(int i=0;i<size;i++)
data[i].sal=sal[i];
Num (Age,numberOfItems,size);
string	PickItUp;
do{
cout<<endl<<"Main Services: "<<endl;
List (Main);
cin>>PickItUp;
transform(PickItUp.begin(), PickItUp.end(), PickItUp.begin(), ::toupper);
if (PickItUp =="STOP"){
	break;}
	if (PickItUp =="ADDING"){
 adding (Name,ID,Age,Job,sal,numberOfItems,size);}
 if (PickItUp =="UPDATE"){
 	Updating (Name,ID,Age,Job,sal,numberOfItems);}
 	if (PickItUp =="DELETE"){
 		Delete (Name,ID,Age,Job,sal,numberOfItems);}
 		if(PickItUp =="DISPLAY"){
             printing (size,Name,ID,Age,Job,sal,numberOfItems);}

}
while (PickItUp != "STOP");
return 0;
}

void adding (string Name[] ,int ID[],int Age[],string Job[], int sal[], int &numberOfItems , int size)
{
if (numberOfItems < size)
{
Update NewVl;
	cout<<"new name"<<endl;
	cin>>NewVl.updatedName;
	cout<<"new ID"<<endl;
	cin>>NewVl.updatedID;
	cout<<"new age"<<endl;
	cin>>NewVl.updatedAge;
		cout<<"new job"<<endl;
	cin>>NewVl.updatedjob;
		cout<<"new salary"<<endl;
	cin>>NewVl.updatedsal;
Name[numberOfItems]= NewVl.updatedName;
ID[numberOfItems]= NewVl.updatedID;
Age[numberOfItems]= NewVl.updatedAge;
Job[numberOfItems]= NewVl.updatedjob;
sal[numberOfItems]= NewVl.updatedsal;
numberOfItems++;}
} 

int Num (int Age[],int &numberOfItems, int size){
for(int i=0;i<size;i++){
if(Age[i]==0){
numberOfItems=i;
break;}}}

void printing (int size,string Name[],int ID[], int Age[],string Job[] , int sal[],int numberOfItems )
{
	cout<<"Names :"<<endl;
	for(int i=0;i<numberOfItems;i++){
	cout<<Name[i]<<"\t";}
	cout<<endl;
	cout<<"IDs :"<<endl;
		for(int i=0;i<numberOfItems;i++){
	cout<<ID[i]<<"\t";}
		cout<<endl;
			cout<<"AGEs :"<<endl;
		for(int i=0;i<numberOfItems;i++){
	cout<<Age[i]<<"\t";}
		cout<<endl;
			cout<<"Jobs :"<<endl;
			for(int i=0;i<numberOfItems;i++){
	cout<<Job[i]<<"\t";}
		cout<<endl;
			cout<<"salaries :"<<endl;
			for(int i=0;i<numberOfItems;i++){
	cout<<sal[i]<<"\t";}
}


void Updating (string Name[], int ID[], int Age[] ,string Job[], int sal[], int &numberOfItems){
int k=0;
Update NewVl ;
string sName;
cout<<"name need to update";
cin>>sName;
for (int i=0;i< numberOfItems ;i++)
{
if (Name[i]== sName) {
cout<<"Enter new name:"<<endl;
cin>>NewVl.updatedName ;
Name [i]= NewVl.updatedName;
cout<<"Enter new ID:" <<endl;
cin>>NewVl.updatedID ;
ID[i]= NewVl.updatedID;
cout<<"Enter new Age"<<endl;
cin>>NewVl.updatedAge ;
Age[i]= NewVl.updatedAge;
cout<<"Enter new job"<<endl;
cin>>NewVl.updatedjob ;
Job[i]= NewVl.updatedjob;
cout<<"Enter new salary"<<endl;
cin>>NewVl.updatedsal ;
sal[i]= NewVl.updatedsal;
 k=1;
break ;}}
if (k<=0){
cout<<"Not found"<<endl;}}



void Delete (string Name[] , int ID[] , int Age[],string Job[], int sal[], int &numberOfItems){
	int k=0;
	if (numberOfItems > 0)
 {
 string sName;
  cout<<"Enter student name to delete: "<<endl;
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
cout<<"Not found"<<endl;}}



void List (string Main[])
{

	for(int i=0;i<7;i++){
	cout<<Main[i]<<endl;}	
}
