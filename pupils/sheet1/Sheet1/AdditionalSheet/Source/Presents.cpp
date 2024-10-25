#include <iostream>
using namespace std;


void solution(){
	
	int n;
	cin >> n;
	int f1[n],f2[n];
	for(int i=0;i<n;i++)cin >> f1[i];
	for(int i=0;i<n;i++)f2[f1[i]-1] = i+1;
	for(int i=0;i<n;i++)cout << f2[i] << " ";
	return;
}
int main(int argc,char **argv){
	solution();
}