#include <iostream>
using namespace std;
bool check(int y){
	int i = 10,tmp;
	bool mem[10];
	for(int i=0;i<10;i++) mem[i] = false;
	while(y){
		tmp = y%10;
		if(mem[tmp])
			return false;
		mem[tmp] = true;
		y/=10;
	}
	return true;
}

void solution(){
	int y;
	cin >> y;
	while(!check(++y));
	cout << y << endl;
}
int main(int argc ,char **argv){
	solution();
}