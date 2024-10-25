#include <iostream>
#include <stack>
using namespace std;

void solution(){
	int l = 0,n = 1,tmp = 0;
	string b;getline(cin,b);
	int size = b.size();int c[size]; 
	fill(c,c+size,0);
	stack<int> s;

	for(int i=0;i<size;i++){
		if(b[i] == '(') s.push(i);
		else if(!s.empty()){
			c[s.top()] = i;	
			s.pop();
		}
	}
	for(int i=0;i<size;i++){
		if(c[i] != 0){
			tmp += c[i]-i+1;
			if(tmp > l){ l = tmp; n = 1;}
			else if(tmp == l) n++;
			i = c[i];
		}
		else tmp = 0;
	}
	cout << l << " " << n << endl;
}


int main(void){
	solution();
}
