#include <iostream>
using namespace std;
int main(int argc ,char ** argv){
	int n;
	cin >> n;
	string word;
	while(n--){
		cin >> word;
		int length = word.length();
		if(length <= 10) cout << word << endl;
		else cout << word[0] << length-2 << word[length-1] << endl;
	}
}