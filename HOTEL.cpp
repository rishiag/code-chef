#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int T;
	cin >> T;
	for (int i=0;i<T;i++){
		int N;
		cin >>N;
		int arr[N];
		int dep[N];
		for (int j=0;j<N;j++){
			cin >> arr[j];
		}
		for (int j=0;j<N;j++){
			cin >> dep[j];
		}
		std::sort(arr,arr+N);
		std::sort(dep,dep+N);
		int counter =0;
		int max=0;
		int i=0;
		int j=0;
		int k=0;
		while (k<2*N && i<N){
	//	for (int k=0;k<2*N;k++){
			if (arr[i]<dep[j]){
				counter +=1;
				i++;
				if (max<counter){
					max=counter;
				}
			}
			else if (arr[i]>dep[j]){
				counter -=1;
				j++;
			}
			else {
				i++;
				j++;
			}
		}
		
	cout << max-N+i << endl;
	}
	
}
