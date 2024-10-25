#include <iostream>
#define min(x,y) ((x < y) ? x : y) 
using namespace std;

void solution(){
	int n,tmp,sum=0;
	cin >> n;
	int teams[3] = {0,0,0};
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(tmp == 4)
			sum++;
		teams[tmp-1]++;
	}
	
	
	
}

int main(int argc ,char **argv){
	
}