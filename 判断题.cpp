#include<stdio.h>
# include<iostream>
using namespace std;
int main(){
	int n,m,i,j;
	cin >> n >>m;
	int pes[n];
	int sor[m];
	int ans[m];
	int a[n][m];
	for(i=0; i < m; i++){
		cin >> sor[i];
	}
	for(i=0; i < m; i++){
		cin >> ans[i];
	}
	for(i=0; i < n; i++){
		pes[i] = 0;
		for(j=0; j < m; j++){
			cin >>a[i][j];
			if(a[i][j] == ans[j])
				pes[i]+=sor[j];
		}
	}
	for(i=0; i < n; i++){
		cout << pes[i] <<"\n";
	}
	
	return 0;
} 
