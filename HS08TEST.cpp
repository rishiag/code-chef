#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int X;
	double Y;
	cin >> X>>Y;
	//cout << X << Y;
	if (((double) X+0.50<=Y)&&(X%5==0)){
		cout<<  std::setprecision(2)<< std::fixed<<Y-(double)X-0.50;
	}
	else if ((X%5!=0) || ((double) X+ 0.5>Y)){
		cout<< std::setprecision(2)<<std::fixed<<Y;
	}	
}
