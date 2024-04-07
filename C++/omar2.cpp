#include <iostream>
using namespace std;
struct	iteam {
int price;
int qun;
int total;};
iteam computerT(iteam c){
c.total=c.price*c.qun;
return c;}		
int main(){
iteam c;
cout<<"Enter Price :";
cin>>c.price;
cout<<"Enter Quantity :";
cin>>c.qun;
cout<<"Total ="<<computerT(c).total;
}
