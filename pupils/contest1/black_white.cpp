#include <iostream>
using namespace std;


void solution(void){
	int n,sum = 0;
	cin >> n;
	
	char board[n][n];
	for(int i=0;i<n;i++){
		cin >> board[i][0];
		for(int j=1;j<n;j++){
			cin >> board[i][j];
			if(board[i][j] == 'N' && board[i][j-1] == 'N'){
				board[i][j] = 'B';
				sum++;
			}
		}
	}
	cout << sum << endl;
}


int main(void){
	solution();
}
