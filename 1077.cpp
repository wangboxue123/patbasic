#include <iostream>
using namespace std;
int f(int a[],int n){
	int i, m;
	m=0;
	for(i=0; i < n-1; i++){
			m+=a[i];
	}
	return m;
}

int main(){
	int m,i,j,max,d,x;
	cin >> m >> max;
	int t[m];
	int a[m][m-1];
	int n[m];
	int s[m];
	for(i=0; i < m; i++){
		d=0;
		x=max;
		n[i]=m-3;
		cin >> t[i];
		for(j=0; j < m-1; j++){
			cin >> a[i][j];
			if(a[i][j]<0 || a[i][j]>max){
				n[i]--;
				a[i][j]=0;
			}
			else{
				if(a[i][j]>d)
					d=a[i][j];
				if(a[i][j]<x)
					x=a[i][j];
			}
		}
		s[i]=(f(a[i],m)-d-x+t[i]*n[i]+n[i])/(2*n[i]);
	}
	for(i=0; i < m; i++){
		cout << s[i] <<'\n';
		}
	return 0;
}

