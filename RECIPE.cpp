#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b){
	
	if (b==0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}

int main(){
	int T;
	cin >> T;
	for (int i=0; i<T;i++){
		int N;	
		cin >>N;
		int ingredients[N];
		for (int j=0;j<N;j++){
			int y;
			cin >> y;
			ingredients[j]=y;
			//cout << "check"<< endl;
			//cout << ingredients[j] << endl;		
		}
		int x =gcd(ingredients[0],ingredients[1]);
		//cout << "x= "<<x << endl;
		int temp=1;
	//	int x=1;
		for (int l=2;l<N;l++){
			//cout << "x " << x;
			x=gcd(x,ingredients[l]);
		}
		for (int k=0;k<N;k++){
			cout << ingredients[k]/x << " ";
		}
	}
//	cout << "gcd " << gcd(4,4);
}
