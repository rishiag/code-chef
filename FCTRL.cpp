#include <iostream>
#include <math.h>
using namespace std;

int mult (int n, int i){
  int ans=n;
	for (int j=0;j<i-1;j++){
		ans=ans*n;
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	int N;
	for (int j=0;j<T;j++){
		cin >> N;
		int counter=0;
		int i=1;
		while(N/mult(5,i)!=0){
			counter = counter+N/mult(5,i);
			i +=1;
		}
		cout << counter<<"\n";
	}
//	cout << mult(5,3);

}
