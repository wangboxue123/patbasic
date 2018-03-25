#include<stdio.h>
# include<iostream>
using namespace std;
int main(){
	int n,i,win;
	cin >> n;
	int a[4][n];
	int jj=0;
	int yy=0;
	for(i=0; i < n; i++){
		cin >> a[0][i] >> a[1][i] >> a[2][i] >> a[3][i];
		win=a[0][i]+a[2][i];
		if(a[1][i]==win && a[3][i]!=win)
			jj++;
		if(a[1][i]!=win && a[3][i]==win)
			yy++;
	}
	cout << jj <<' ' << yy;
} 
