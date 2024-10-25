#include <iostream>
using namespace std;
int main(int argc ,char ** argv){
	int n,sum=0,p,v,t;
	cin>>n;
	while(n--){
		cin>>p>>v>>t;
		if(p+v+t >= 2) sum++;
	}
	cout<<sum;
}