
#include <iostream>
using namespace std;
struct computeT{
 double price;
 double quantity;
 double total;
};
computeT total( computeT c ){
 c.total=c.price*c.quantity;
 return c;
}

int main(){
 computeT c;
 cout <<"Enter the price";
 cin >>c.price;
 cout <<"Enter the quantity";
 cin >>c.quantity;
cout<<"Total ="<<total(c).total;
}







