#include <iostream> 
using namespace std;


void search(char chess[8][8]){
	for(int i=1;i<8;i++){
		for(int j=1;j<8;j++){
			if(chess[i-1][j-1] == '#' && 
					chess[i-1][j+1] == '#' &&
					chess[i+1][j-1] == '#' &&
					chess[i+1][j+1] == '#'){
				cout << i+1 << " " << j+1 << endl;
				return;
			}
		}
	}
}


void solution(){
	int t;
	cin >> t;
	char chess[8][8];
	while(t--){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin >> chess[i][j];
			}
		}
		search(chess);
	}
}
int main(int argc,char ** argv){
	solution();
}