#include <iostream>
using namespace std;

int rpos = 0;
long long t = 0,tr = 0;

string s2 = "";
int s = 0;
void wifi(int index,int sum){
	if(index == s){
		if(sum == rpos) tr++;
		t++;
		return;
	}

	if(s2[index] == '+') wifi(index+1,sum+1);
	else if(s2[index] == '-') wifi(index+1,sum-1);
	else{
		wifi(index+1,sum+1);
		wifi(index+1,sum-1);
	}
	sum += s2[index] == '+' ? 1 : -1;
}
void solution(void){
	string s1; cin >> s1 >> s2;
	for(int i=0;i<s1.size();i++) rpos += s1[i] == '+' ? 1 : -1;
	s = s2.size();
	wifi(0,0);
	cout.precision(20);
	cout << tr/(double) t << endl;
}

int main(void){
	solution();
	return 0;
}
