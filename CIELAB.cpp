#include <iostream>
using namespace std;

int main(){
  int A;
	int B;
	cin >> A >> B;
	int sub=A-B;
	//cout << sub << endl;
	int temp=sub;
	int counter =0;
	while(sub/10!=0){
		sub=sub/10;
		counter+=1;
	}
	//cout << counter<< endl;
	//cout << sub << endl;
	int add=1;
	while(counter!=0){
	add=add*10;
	counter-=1;
	}

	//cout << "add "<<add << endl;
	if (sub==9){
	cout << temp -add<< endl; 
	}
	else{
	cout << temp +add<<endl;
	}
}	
