#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream infile;
	string str;
	infile.open("myfile.txt");
	if(infile.is_open())
	{
		while (getline(infile,str))  
        cout << str <<endl;  
	}
	else cout<<"file not open.";
	double avg;
	avg=(30+40)/2;
	cout<<avg;
	ofstream appfile;
	appfile.open("myfile",ios::app);
	if(appfile.is_open())
	{
		appfile<<endl<<avg;
		appfile.close();
	}
	else cout<<"file not open.";
	return 0;
}
