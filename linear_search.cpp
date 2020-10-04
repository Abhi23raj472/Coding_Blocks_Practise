#include<iostream>
using namespace std;

/*linear search
A particular element in the array*/


int main(){
	int n,key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//ask for the  element we want to search 
	cout<<"Enter the element you want to search :"<<endl;
	cin>>key;
	
	//find out the index of that  element by traversing the array
	int i;
	for( i=0;i<=n-1;i++){
		if(a[i]==key){
		    cout<<key<<" found at "<<i<<" index";
		    break;
	    }
	}
	if(i==n){
		cout<<key<< " is not present :"<<endl;
	}
}



/*
Output 1 -
5
10 20 30 40 50
Enter the element you want to search :
40
40 found at 3 index


output 2-

5
10 20 30 40 50
Enter the element you want to search :
60
60 is not present
*/
