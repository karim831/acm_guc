#include <iostream>
using namespace std;


long long m = 0;
void lucky(int n,int &len,int index,char d[],int four,int seven){
	if(index == len){
		long long tmp = 0,tmp2 = 1;
		for(int i=0;i<len;i++){
			tmp += (d[i] - '0') * tmp2;
			tmp2 *= 10;
		}
		if(tmp >= n){
			if(!m || m > tmp) m = tmp;
		}
		return;
	}

	if(four){
		d[index] = '4';
		four--;
		lucky(n,len,index+1,d,four,seven);
		d[index] = 0;
		four++;
	}
	if(seven){
		d[index] = '7';
		seven--;
		lucky(n,len,index+1,d,four,seven);
		d[index] = 0;
		seven++;
	}
}
void solution(void){
	int n,len = 0; cin >> n;
	long long tmp = n,tmp2;
	while(tmp){
		len++;
		tmp /= 10;
	}
	len += len % 2;
	tmp = 0,tmp2 = 1;
	for(int i=0;i<len;i++){
		if(i<len/2)
			tmp += 4 * tmp2;
		else 
			tmp += 7 * tmp2;
		tmp2 *= 10;
	}
	if(tmp < n){
		tmp = 0,tmp2 = 1;
		for(int i=0;i<len+2;i++){
			if(i<(len+2)/2)
				tmp += 7 * tmp2;
			else 
				tmp += 4 * tmp2;
			tmp2 *= 10;
		}
		cout << tmp << endl;
	}
	else{
		char d[len];
		fill(d,d+len,0);
		lucky(n,len,0,d,len/2,len/2);
		cout << m << endl; 
	}
}

int main(void){
	solution();
	return 0;
}

