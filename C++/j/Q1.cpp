#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;
	int *p=&x, *q=&y, *r=&z;
	
	cout << "Enter 3 numbers: ";
	cin >> x >> y >> z;
	cout << "x= "<< x << endl;
	cout << "y= "<< y << endl;
	cout << "z= "<< z << endl;
	cout << "p= "<< p << endl;
	cout << "q= "<< q << endl;
	cout << "r= "<< r << endl;
	cout << "*p= "<< *p << endl;
	cout << "*q= "<< *q << endl;
	cout << "*r= "<< *r << endl;
	
	cout << "Swapping Pointers\n";
	
	r = p;
	p = q;
	q = r;
	
	cout << "x= "<< x << endl;
	cout << "y= "<< y << endl;
	cout << "z= "<< z << endl;
	cout << "p= "<< p << endl;
	cout << "q= "<< q << endl;
	cout << "r= "<< r << endl;
	cout << "*p= "<< *p << endl;
	cout << "*q= "<< *q << endl;
	cout << "*r= "<< *r << endl;
	
	return 0;
}
