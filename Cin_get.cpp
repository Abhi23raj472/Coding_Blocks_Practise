#include<iostream>
using namespace std;
int main(){
	
	//Problem - Read a list of character(Sentence)
	//cin.get()
	
	char ch;
	
	//cin>>ch;
	//reads the first char
	
	ch=cin.get();   //this method reads any single char includeing space/new lines.
	
	while(ch!='.'){
		//print the last character that we have read
		cout<<ch;
		//update any char in the memory (read the next charcter)
		//reads the rest of the character
		ch=cin.get();
	}
	return 0;
}
