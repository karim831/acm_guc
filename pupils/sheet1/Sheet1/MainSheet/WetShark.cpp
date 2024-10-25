#include <iostream> 

using namespace std;

int main(int argc,char ** argv){
	int n;
	cin >> n;
	int nums[n],minOdd = 0;
	long long sum = 0;
	for(int i=0;i<n;i++){
		cin >> nums[i];
		sum += nums[i];
		if(nums[i] % 2 != 0){
			if(!minOdd) minOdd = nums[i];
			else{
				if(minOdd > nums[i])minOdd = nums[i];
			}
		}
	}
	if(sum % 2 == 0) cout << sum;
	else cout << sum - minOdd;
}