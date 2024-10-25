#include <iostream>
using namespace std;

void compination(int a[],int &n,int index,int value,bool &res){
	if(index == n){
		if(!(value % 360)) res = true;
		return;
	}
	compination(a,n,index+1,value + a[index],res);
	compination(a,n,index+1,value + a[index] * -1,res);
}
void solution(void){
	int n; cin >> n;
	int a[n]; for(int i=0;i<n;i++) cin >> a[i];
	bool res = false;
	compination(a,n,0,0,res);
	if(res) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(void){
	solution();
	return 0;
}
