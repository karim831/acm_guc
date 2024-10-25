#include <iostream>
using namespace std;

void solution(void){
	int a1,p1,a2,p2;
	cin >> a1 >> p1 >> a2 >> p2;
	if(a1 + a2 > p1 + p2) cout << "A";
	else if(p1 + p2 > a1 + a2) cout <<"P";
	else cout << "D";
	cout << endl;
}


int main(void){
	solution();
}
