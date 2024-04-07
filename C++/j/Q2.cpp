#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	char a[26];
	
	for (int i=0; i<26; i++){
		cout << "Enter letter " << i+1 << ": ";
		cin >> a[i];
	}
	 ifstream inFile;
	 ofstream outFile;
	 
	 outFile.open("alphabet.txt");
	 for (int i=0; i<26; i++)
	 outFile << a[i] << endl;
	 outFile.close();
	 
	 inFile.open("alphabet.txt");
	 if (inFile.fail()){
	 	cout << "Fail to open the file!";
	 	return 1;
	 }
	 for (int i=0; i<10; i++){
	 	cout << "letter "<< i+1 <<": "<< a[i] << endl;
	 }
	inFile.close();
	
	return 0;
}
