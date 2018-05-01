#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	float a[n];
	float m=0.0;
	for(i=0; i < n; i++){
		cin >> a[i];
		m+=a[i]*(i+1)*(n-i);
	}
	printf("%.2f",m);
	return 0;
}

