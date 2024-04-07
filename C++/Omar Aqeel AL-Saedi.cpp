#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string names[8] = {"Mohamed","Ali","Khaled","Naif","Fahd","Yahya","Ahmad","Hassan"};
	cout << "array before rotation: \n";
	for(int i=0;i<8;i++){
	cout << " "<<names[i];
	}
	 for(int i = 0; i < 2; i++){    
        string  last;    
        last = names[8-1];    
        
        for(int j = 8-1; j > 0; j--){    
            names[j] = names[j-1];    
        }    
        names[0] = last;    
    }
	   cout <<"\nArray after right rotation: \n";    
    for(int i = 0; i< 8; i++){    
        cout <<"  " <<names[i];    
    }       
	cout << "\nEnter Position:";
	int pos;
	string new_array[8];
	cin >> pos;
	string new_Value;
	cout << "Enter New Value:";
	cin >> new_Value;
	for(int i=0;i<8;i++){
		if(i == pos){
			new_array[i] = new_Value;
		}
		else if(i>pos){
			new_array[i] = names[i-1];
		}
		else{
			new_array[i] = names[i];
		}
	}
	 for(int i = 0; i< 8; i++){    
        cout <<"  " <<new_array[i];    
    } 
	


}
