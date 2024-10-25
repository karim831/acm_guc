#include <iostream>
#include <algorithm>
using namespace std;

void solution(void){
    int n,tmp; cin >> n;
    long long v[n],u[n];cin >> v[0];
    u[0] = v[0];
    for(int i=1;i<n;i++){
        cin >> tmp;
        v[i] = v[i-1] + tmp;
        u[i] = tmp;
    }
    sort(u,u+n);
    for(int i=1;i<n;i++) u[i] += u[i-1]; 
    int m,type,l,r; cin >> m;
    while(m--){
       cin >> type >> l >> r;
       if(type == 1) cout << v[r-1] - (l == 1 ? 0 : v[l-2]) << endl;
       else cout << u[r-1] - (l == 1 ? 0 : u[l-2]) << endl;
    }
}


int main(void){
    solution();
    return 0;
}
