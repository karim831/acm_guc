#include <iostream>
using namespace std;

int main(int argc,char ** argv){
	int n,sum=0;
	cin >> n;
	string s;
	cin >> s;
	char tmp = s[0];
	for(int i=1;i<n;i++){
		if(s[i] != tmp) tmp = s[i];
		else sum++;
	}
	cout << sum;
	
}