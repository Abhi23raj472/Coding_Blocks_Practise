#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;   //Initialisation
	//Stopping criteria
	while(n>0){
		int last_digit=n%10;
		sum=sum+last_digit;
		//update statement
		n=n/10;
	}
	//print the output
	cout<<"Sum of Digit is : "<<sum<<endl;
	return 0;
	
}
