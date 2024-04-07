#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
int a = 7;
int b = 17;
int *c = &b;
a = *c;
*c = *c + 1;
cout << a << " " << b << endl;

	
return 0;
}
