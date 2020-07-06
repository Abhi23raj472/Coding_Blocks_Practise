//Write a program to calculate digits,whitespace ,alphabets and other character terminated by &*/


#include<iostream>
using namespace std;
int main(){
	char ch;
	ch=cin.get();
	int digit=0;
	int alphabet=0;
	int space=0;
	int others=0;
	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alphabet++;
		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			space++;
		}
		else{
			others++;
		}
		ch=cin.get();
	}
	cout<<"Digit = "<<digit<<endl;
	cout<<"Alphabet = "<<alphabet<<endl;
	cout<<"Space = "<<space<<endl;
	cout<<"Others = "<<others<<endl;
	return 0;
}
