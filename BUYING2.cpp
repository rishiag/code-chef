#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T;
	cin >> T;
	for (int i=0;i<T;i++){
		int N, X;
		cin >> N >> X;
		int sum =0;
		int arr[N];
		for (int j=0;j<N;j++){
			cin >> arr[j];
			sum+=arr[j];
		}
		sort(arr,arr+N);
		//cout << sum <<endl;
		//cout << arr[0] << endl;
		if (sum/X==((sum-arr[0])/X)) {cout << "-1" << endl;}
		else {cout << sum/X <<endl;}
	}
}
