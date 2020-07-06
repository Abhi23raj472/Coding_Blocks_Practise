#include<iostream>
using namespace std;
int main(){
	
	//Switch case
	/*Design a menu -where pressign a button gives you the corressponding item
	B- burger
	M- maggi
	P- pizza
	C-coke
	D-dosa
	.
	.
	and so on!
	*/
	
	char ch;
	cin>>ch;
	int pizza_orders=0;
	switch(ch){
		case 'b':
		case 'B' :cout<<"Burger"<<endl;
		    break;
		case 'm':			
		case 'M' :cout<<"Maggi"<<endl;
		    break;
		case 'p':
		case 'P' :cout<<"Pizza"<<endl;
		    pizza_orders++;
		    break;
		    
		     
		default :cout<<"Item not available!"<<endl;
		return 0;	
	}
}
