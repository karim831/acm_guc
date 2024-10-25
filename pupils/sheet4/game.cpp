#include <iostream>
using namespace std;

int moves(long long n,long long m,int h,int res){
	if(n > m) return -1;
	else if (n == m) return h;
	
	res = moves(n*2,m,h+1,res);
	if(res == -1)
		res = moves(n*3,m,h+1,res);
	return res;
}

void solution(void){
	long long n,m;
	cin >> n >> m;
	cout << moves(n,m,0,-1) << endl;
}
int main(void){
	solution();
	return 0;
}
