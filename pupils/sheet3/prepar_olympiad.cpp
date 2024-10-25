#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

bool check(int x,queue<int> tmp){
	int min = tmp.front(),max = tmp.front();
	tmp.pop();
	while(!tmp.empty()){
		if(tmp.front() > max) max = tmp.front();
		else if(tmp.front() < min) min = tmp.front();
		tmp.pop();
	}
	return max - min >= x ? true : false;
}

void solution(void){
	int n,l,r,x; cin >> n >> l >> r >> x;
	int c[n];
	for(int i=0;i<n;i++) cin >> c[i];
	
	int total_probs = (int)pow(2,n),sum = 0,res = 0;
	for(int i=1;i<total_probs;i++){
		queue<int> tmp;
		sum = 0;
		for(int j=0;j<n;j++){
			if((1 << j) & i){
				tmp.push(c[j]);
				sum += c[j];
			}
		}
		if(sum >= l && sum <= r && check(x,tmp)) res++;	
	}
	cout << res << endl;
}

int main(void){
	solution();
}
