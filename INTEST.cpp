#include <iostream>
#include <stdio.h>
using namespace std;

inline void fastRead_int(long int &x);
int main(){
  int n;
	long int k;
	scanf("%d%ld",&n,&k);
	//cin >> n >> k;
	int counter=0;
	for (int i=0;i<n;i++){
		long int x;
		fastRead_int(x);
		if (x%k==0){
			counter+=1;
		}
	}
	cout << counter<< endl;
}

inline void fastRead_int(long int &x){
	register long int c=getchar_unlocked();
	x=0;
	int neg=0;
	for(; ((c<48 || c>57) && c!='-'); c=getchar_unlocked());
	if (c=='-'){
		neg=1;
		c=getchar_unlocked();
	}
	for (; c>47 && c<58; c=getchar_unlocked()){
		x=(x<<1) +(x<<3)+c-48;
	}
	if (neg)
		x=-x;
}
