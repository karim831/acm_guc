#include <iostream>
#include <set>
using namespace std;

void test_case(){
	int n;
	cin >> n;
	int maxs[n/2],res[n];
	set<int> unused;

	for(int i=0;i<n;i++) unused.insert(i+1);
	for(int i=0;i<n/2;i++){
		cin >> maxs[i];
		if(!unused.count(maxs[i])){
			cout << -1;
			string discard;
			getline(cin,discard);
			return;
		}
		unused.erase(maxs[i]);
	}

	for(int i=n/2-1;i>=0;i--){
		res[2*i+1] = maxs[i];
		auto tmp = unused.upper_bound(maxs[i]);
		if(tmp == unused.begin()){ cout << -1; return;}
		res[2*i] = *prev(tmp);
		unused.erase(res[2*i]);
	}
	for(int i=0;i<n;i++) cout << res[i] << " ";
}
void solution(void){
	int t;
	cin >> t;
	while(t--){ test_case();cout << endl;}
}

int main(void){
	solution();
}
