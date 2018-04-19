#include <iostream>
using namespace std;
int len(string a){
	int i=0;
	while(a[i])
		i++;
	return i;
}
int check(string x,string a[],int n){
	int t=1;
	for(int i=0; i < n; i++){
		if(x == a[i])
		    t=0;
		//
		if(len(a[i]) == 0)
		    i=n;
	}
	return t;
}
int main(){
	int n,first,a,i;
	cin >> n >> a >> first;
	string b[n];
	string c[n];
	for(i = 0; i < n && first < n; i++)
		cin >> b[i];
		i=0;
		if(first > n)
		cout <<"Keep going...";
		else{
			while(first <= n){
				if(check(b[first-1],c,n)){
					cout << b[first-1] <<'\n';
					c[i]=b[first-1];
					i++;
					first+=a;
				}
				else
					first++;
			}
		}
	return 0;
}

