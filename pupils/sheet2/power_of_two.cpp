#include <iostream> 
#include <vector>
using namespace std;

bool check(int sum){
	int total = 0;
	for(int i=0;i<32;i++){
		total += sum & 1;
		sum >>= 1;
	}
	return total == 1 ? true : false;
}
void solution(void){
	int n,tmp;cin >> n;
	vector<pair<int,bool>> a(n);
	for(int i=0;i<n;i++){
		cin >> tmp;
		a[i].first = tmp;a[i].second = false;
	}
	
	long long sum = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(check(a[i].first + a[j].first)){
				a[i].second = true;a[j].second = true;
			}
		}
		if(!a[i].second) sum++;
	}

	cout << sum << endl;
}
int main(void){
	solution();
	return 0;
}
