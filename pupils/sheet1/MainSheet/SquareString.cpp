#include <iostream>

using namespace std;
int main(int argc ,char ** argv){
	
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		int length = s.size();
		if(length%2 != 0) cout << "NO" << endl;
		else{
			bool tmp = true;
			for(int i=0,j=length/2;i<length/2;i++,j++){
				if(s[i] != s[j]){
					cout << "NO" << endl;
					tmp = false;
					break;
				}
			}
			if(tmp) cout << "YES" << endl;
		}
	}
	
}