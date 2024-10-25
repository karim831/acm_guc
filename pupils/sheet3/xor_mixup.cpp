#include <iostream>
using namespace std;

void testcase(void){
	int n;cin >> n;
	int tmp;
	for(int i=0;i<n;i++) cin >> tmp;
	cout << tmp << endl;
}

void solution(void){
	int t;cin >> t;
	while(t--) testcase();
}
int main(void){
	solution();
}

