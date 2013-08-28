#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int i=0;i<T;i++){
		int G;
		cin >> G;
		for (int j=0; j< G; j++){
			int I;
			long int N;
			int Q;
			cin >> I >> N >> Q;
			if (N%2==0){cout << N/2 << endl;}
			else if (N%2==1 && I!=Q){
				cout << (N+1)/2<< endl;
			}
			else if (N%2==1 && I==Q){
				cout <<(N-1)/2 << endl;
			} 
		}
	}
}
