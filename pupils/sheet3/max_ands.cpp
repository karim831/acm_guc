#include <iostream>
#include <vector>
using namespace std;

void test_case(void){
	int n,k,tmp; cin >> n >> k;
	vector<int> a(n),b(31,0);
	for(int i=0;i<n;i++){
		cin >> a[i];
		for(int j=0;j<31;j++) b[j] += !((a[i]>>j) & 1);
	}
	int mask = 0;
	for(int i = 30;i>=0 && k != 0;i--){
		if(k >= b[i]){
			k-=b[i];
			mask |= 1<<i;
		}
	}
	
	int ands = a[0] | mask;
	for(int i=1;i<n;i++) ands &= a[i] | mask;

	cout << ands << endl;
}

void solution(void){
	int t; cin >> t;
	while(t--) test_case();
}	
int main(void){
	solution();
}
