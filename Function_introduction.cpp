//Functions

#include<iostream>
using namespace std;
//1st function
void sayHello(){     
 	
 	cout<<"Hello Everyone"<<endl;
}

//2nd fumction- for factorial
int factorial(int n){
	int ans=1;
	for(int i=2;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}
int main(){
	
	//1st
	cout<<"Before Function!"<<endl;
 	sayHello();
 	cout<<"After function!"<<endl;
 	
 	//2nd
 	int n;
 	cout<<"Enter number:"<<endl;
 	cin>>n;
 	factorial(n);
 	cout<<factorial(n)<<endl;
 	return 0;
}
