#include<iostream>
using namespace std;
/*print the following pattern for given N=5
ABCDE
ABCD
ABC
AB
A
*/

void printABCDPattern(/*int n*/){
	
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int cnt_alphabets=n-i+1;
		char alphabets='A';
		for(int j=1;j<=cnt_alphabets;j++){
			cout<<alphabets;
			alphabets=alphabets+1;
		}
		cout<<endl;
	}
	
}


int main(){
	//int n;
	//cin>>n;
	printABCDPattern(/*n*/);
	
	return 0;
}
