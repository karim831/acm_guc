#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;


bool array_diff(int a[],int &n,vector<vector<int>>b,int index,bool ret){
    if(index == n)
        return true; 

    for(int i =0;i < n && !ret;i++){
        for(int j=i+1;j<n && !ret;j++){
            if(a[index] == 0 || b[i][j] == abs(a[index]))
                ret = array_diff(a,n,b,index+1,ret);

            else if(b[i][j] == INT_MAX){
                b[i][j] = abs(a[index]);
                ret = array_diff(a,n,b,index + 1,ret);
                b[i][j] = INT_MAX;
            }
        }
    }
    return ret;
}


void test_case(void){
    int n;cin >> n;
    int a[n]; for(int i=0;i<n;i++) cin >> a[i]; 
    vector<vector<int>> b(10,vector<int>(10,INT_MAX));

    if(array_diff(a,n,b,0,false)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

void solution(void){
    int t; cin >> t;
    
    while(t--) test_case();

}
int main(void){
    solution();
}

