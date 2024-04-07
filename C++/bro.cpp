#include <iostream>
#include <string>
#include <fstream>
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
string Age;
string ID;
string sal;
};
void load(lists data[],int &numberOfItems,int size);
void saveed (lists data[], int size );
void sort (lists data[],int size);
void search (lists data[],int numberOfItems);
void List (string Main[]);
void adding (lists data[], int &numberOfItems , int size);
void printing (lists data[],int numberOfItems );
void Updating (lists data[], int &numberOfItems);
void Delete (lists data[], int &numberOfItems);
int main()
{
int size=100, numberOfItems=0, k=0;
lists data[size];

string Main[7]{"Adding","Search ","Update ","Delete","Sort","Display","Stop"};

load(data,numberOfItems,size);
string	PickItUp;
do{
cout<<endl<<"Main Services: "<<endl;
List (Main);
cin>>PickItUp;
transform(PickItUp.begin(), PickItUp.end(), PickItUp.begin(), ::toupper);
if (PickItUp =="STOP"){
	break;}
	if (PickItUp =="ADDING"){
 adding (data,numberOfItems,size);}
 if (PickItUp =="UPDATE"){
 	Updating (data,numberOfItems);}
 	if (PickItUp =="DELETE"){
 		Delete (data,numberOfItems);}
 		if(PickItUp =="DISPLAY"){
             printing (data,numberOfItems);}
             	if(PickItUp =="SORT"){
                  sort (data,size);}
                      if(PickItUp =="SEARCH"){
                       search (data,numberOfItems);}

}
while (PickItUp != "STOP");
return 0;
}

void adding (lists data[], int &numberOfItems , int size)
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
data[numberOfItems].Name= NewVl.updatedName;
data[numberOfItems].ID= NewVl.updatedID;
data[numberOfItems].Age= NewVl.updatedAge;
data[numberOfItems].Job= NewVl.updatedjob;
data[numberOfItems].sal= NewVl.updatedsal;
numberOfItems++;}
} 



void printing (lists data[],int numberOfItems )
{
	cout<<"Names :"<<endl;
	for(int i=0;i<numberOfItems;i++){
	cout<<data[i].Name<<"\t";}
	cout<<endl;
	cout<<"IDs :"<<endl;
		for(int i=0;i<numberOfItems;i++){
	cout<<data[i].ID<<"\t";}
		cout<<endl;
			cout<<"AGEs :"<<endl;
		for(int i=0;i<numberOfItems;i++){
	cout<<data[i].Age<<"\t";}
		cout<<endl;
			cout<<"Jobs :"<<endl;
			for(int i=0;i<numberOfItems;i++){
	cout<<data[i].Job<<"\t";}
		cout<<endl;
			cout<<"salaries :"<<endl;
			for(int i=0;i<numberOfItems;i++){
	cout<<data[i].sal<<"\t";}
}


void Updating (lists data[], int &numberOfItems){
int k=0;
Update NewVl ;
string sName;
cout<<"name need to update";
cin>>sName;
for (int i=0;i< numberOfItems ;i++)
{
if (data[i].Name== sName) {
cout<<"Enter new name:"<<endl;
cin>>NewVl.updatedName ;
data[i].Name= NewVl.updatedName;
cout<<"Enter new ID:" <<endl;
cin>>NewVl.updatedID ;
data[i].ID= NewVl.updatedID;
cout<<"Enter new Age"<<endl;
cin>>NewVl.updatedAge ;
data[i].Age= NewVl.updatedAge;
cout<<"Enter new job"<<endl;
cin>>NewVl.updatedjob ;
data[i].Job= NewVl.updatedjob;
cout<<"Enter new salary"<<endl;
cin>>NewVl.updatedsal ;
data[i].sal= NewVl.updatedsal;
 k=1;
break ;}}
if (k<=0){
cout<<"Not found"<<endl;}}



void Delete (lists data[], int &numberOfItems){
	int k=0;
	if (numberOfItems > 0)
 {
 string sName;
  cout<<"Enter student name to delete: "<<endl;
cin>>sName;
for (int i=0;i< numberOfItems;i++){
  if (data[i].Name== sName) {
   for (int j=i; j< numberOfItems-1; j++)
    {
     data[j].Name =data[j+1].Name;
    data[j].ID =data[j+1].ID;
       data[j].Job =data[j+1].Job;
    data[j].Age =data[j+1].Age;
      data[j].sal =data[j+1].sal;
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
void sort (lists data[],int size)
{
lists temp[size+1];
for(int i = 1; i < size; ++i) {
for(int j = 0; j < size -1;++j){
if(data[j].Name > data[j+1].Name) {
temp[j] = data[j]; 
data[j] = data[j+1]; 
data[j+1] = temp[j];
}
}
}
}
void search (lists data[],int numberOfItems){
 string sName;
 int k;
  cout<<"Enter student name to search: "<<endl;
cin>>sName;
for (int i=0;i< numberOfItems ;i++)
{
if (data[i].Name== sName) {
	cout<<"iteam found in :"<< i+1;
	break;
	k=1;}
	if (k<=0)
cout<<"Not found"<<endl;}}


void load(lists data[],int &numberOfItems,int size){
	ifstream inFile("Data2.0.txt"); 
if(inFile.is_open())
  {
 	int counter =0;
  	for (int i;i<size;i++){
    getline (inFile,data[i].Name);
	   getline (inFile,data[i].Job);
         getline (inFile,data[i].ID);
          getline (inFile,data[i].Age);
          getline (inFile,data[i].sal);
			counter++;   }
              numberOfItems=counter; 
inFile.close();
  }
else cout << "Failed  !" <<endl;


}


void saveed (lists data[],int size){
		ofstream inFile("Data2.0.txt");
		if(inFile.is_open()){
		
		for (int i;i<size;i++){
inFile << data[i].Name << "\n";
inFile <<data[i].Job<< "\n";
inFile <<data[i].ID<< "\n";
inFile <<data[i].Age<< "\n";
inFile <<data[i].sal<< "\n";}
inFile.close();
cout << "\nData Saved successfully\n";}
else cout<<"Failed";

}

