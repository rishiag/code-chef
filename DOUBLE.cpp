#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int i=0;i< T;i++){
		long int N;
		cin >> N;
		if (N%2==1){
		cout << N-1<< endl;}
		else {cout << N<< endl;}
	}
}
