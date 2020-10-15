/*Pattern problem
N=6
--For ith line print i numbers
--odd line starts with 0,and value alternate between 0 and 1
--even line starts with 1,and value alternate between 1 and 1
--print n lines

0
10
010
1010
01010
101010
*/




#include<iostream>
using namespace std;
int main(){
	//taking input
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int val=i%2==0 ? 1:0;
		
		//print i value in ith line
		
		for(int count=1;count<=i;count++){
			cout<<val;
			val=1-val;
		}
		cout<<endl;
	}
	return 0;
}
