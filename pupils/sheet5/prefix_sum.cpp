#include <iostream>
using namespace std;



bool test_case(void){
    int n,k; cin >> n >> k;
    int s[k]; for(int i=0;i<k;i++) cin >> s[i]; 
    
    if(k == 1) return true;
    long long tmp = s[k-1] - s[k-2];
    for(int i=k-2;i>0;i--){
        if(s[i] - s[i-1] > tmp) return false;
        tmp = s[i] - s[i-1];
    }
    tmp *= n - k + 1;
    if(tmp <  s[0]) return false; 
    return true;
}

void solution(void){
    int t; cin >> t;
    while(t--) cout << (test_case() ? "YES" : "No") << endl;
}

int main(void){
    solution(); 
    return 0; 
}
