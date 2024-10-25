#include <iostream>
using namespace std;
void swap(int &x,int &y){
	int tmp = x;
	x = y;
	y = tmp;
}

void solution(void){
	string s;cin >> s;
	int k,size;cin >> k;
	size = s.size();
	
	bool check = true;
	while(check){
		check = false;
		for(int i=0;i<size;i++){
			if(i+k < size  && s[i+k] < s[i]){
				swap(s[i],s[i+k]);
				check = true;
			}
		}
		for(int i = size-1;i>=0;i--){
			if(i-k >= 0 && s[i] < s[i-k]){
				swap(s[i],s[i-k]);
				check = true;
			}
		}
	}
	cout << s << endl;
}

int main(void){
	solution();
}	
