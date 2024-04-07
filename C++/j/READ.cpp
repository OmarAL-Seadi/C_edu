#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string STRING;
	char CHAR;
	int NUM;
	
	ifstream inFile("input1.txt"); 
	if(inFile.is_open())
{
	  while(!inFile.eof())
	  {
	  getline (inFile,STRING);
	  cout<<STRING<<endl;
	  }
	  inFile.close();
}
else cout << "Failed  !" <<endl;

	ifstream inFile2("input2.txt");
	if(inFile2.is_open())
{
	  while(!inFile2.eof())
	  {
	  getline (inFile2 , STRING, ',');
	  cout<<STRING<<endl;
	  }
	  inFile2.close();
}
else cout << "Failed  !!" <<endl;

	ifstream inFile3("input3.txt");
	if(inFile3.is_open())
{
	  while(!inFile3.eof())
	  {
	  inFile3.get(CHAR);
	  cout<<CHAR<<endl;
	  }
	  inFile3.close();
}
else cout << "Failed  !!!" <<endl;
	ifstream inFile4("input4.txt");
	if(inFile4.is_open())
{
	  while(!inFile4.eof())
	  {	
	 inFile4>>NUM;
	  cout<<NUM<<endl;   
	  }
	  inFile4.close();
}
else cout << "Failed  !!!!" <<endl;
}
