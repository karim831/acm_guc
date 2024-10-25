#include <iostream>
using namespace std;

int main(int argc, char ** argv){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		(i%2) ? cout << "I love " : cout << "I hate ";
		(i == n-1) ? cout << "it" : cout << "that ";
	}
	
}