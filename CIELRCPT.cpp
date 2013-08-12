#include <iostream>
#include <cmath>
using namespace std;
int power(int n, int i);
int main(){
  int T;
	cin >> T;
	for (int i=0;i<T;i++){
		int N;
		cin >>N;
		int counter=0;
		while (N>0){
			int temp;
		//	cout << "check " << N << endl;
			if (N>2048){
				N=N-2048;
				counter+=1;
			}
		else{	for (int j=0;j<12;j++){
				int x=power(2,j);
//				cout << "check2"<< endl;
				if (x>N){
					N=N-temp;
					counter+=1;
					//cout << "check3" << endl;
					break;
				}	
				else if (x==N){
					N=N-x;
					counter+=1;
					//cout << "check4" << endl;
					break;
				}
				temp=x;
			}
		}
		}
	cout << counter<< endl;
	}
//cout << power(2,0) << endl;

}

int power(int n, int i){
	int product=1;	
	for (int j=0;j<i;j++){
		product = product*n;
	}
	return product;
}
