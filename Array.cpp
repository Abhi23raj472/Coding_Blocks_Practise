#include<iostream>
using namespace std;
 
 
 int main(){
 	//init of an array
    int a[10]={0};
    
    //size of
    cout<<sizeof(a)<<endl;
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    
    //
    
    //Input from user
	for(int i=0;i<5;i++){
    	cin>>a[i];
	}
	
	//update a single index
	a[8]=100;
 	//PRINT ALL THE FIRST 10 ELEMENT
    for(int i=0;i<10;i++){
 		cout<<a[i]<<" ,";
	}
	return 0;
 }
 
 
 /*
 
 40(size)
10
10 20 30 40 50
10 ,20 ,30 ,40 ,50 ,0 ,0 ,0 ,100 ,0 ,
 */
