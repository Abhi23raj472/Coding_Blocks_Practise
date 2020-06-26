#include<iostream>
using namespace std;
int main(){
	int n;
	//Take input
	cin>>n;
	//Initial condition
	int i=0;
	int sum=0;
	while(i<=n){        //Stopping criteria
		sum=sum+i;
		i=i+1;  //update criteria
		
	}
	cout<<sum<<endl;
	return 0;
	
}
