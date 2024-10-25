#include <iostream>
using namespace std;

void solution(void){
	int n,h;
	cin >> n >> h;
	
	int sum = 0,tmp;
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(h >= tmp) sum++;
	}
	cout << sum << endl;
}
int main (void){
	solution();
}
