#include <iostream>
using namespace std;

void test_case(void){
	int n; cin >> n;
	int a[n],tmp = 0;
	for(int i=0;i < n;i++) cin >> a[i];
	for(int x=0;x < 256;x++){
		for(int i=0;i<n;i++) tmp ^= x ^ a[i];
		if(!tmp){
			cout << x << endl;
			return;
		}
		tmp = 0;
	}
	cout << -1 << endl;
	return;
}

void solution(void){
	int t; cin >> t;
	while(t--) test_case();
}

int main(void){
	solution();
}
