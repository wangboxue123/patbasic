#include<iostream>
using namespace std;
int len(string a){
	int i=0;
	while(a[i])
		i++;
	return i;
}
int mi(int a,int n){
	if(n)
		return mi(a,n-1)*a;
	else
		return 1;
}
int stringint(string x){
        int l=len(x);
	int i=0;
        int a=0;
        while(x[i]){
		a+=(x[i]-'0')*mi(10,l-1-i);
		i++;					 
	}
        return a;
}
int sh(string a,int b){
	int m,n;
	string x;
	int i=0;
	while(a[i]){
		if(a[i]=='/'){
			m=stringint(x);
			x[0]='\0';
		}
		else
			x+=a[i];
		i++;
	}
	n=stringint(x);
	if(b%2)
		return n;
	else
		return m;
}
int main(){
	string a,b;
	int n,am,an,bm,bn;
	cin >> a >> b >> n;
	am=sh(a,0);
	an=sh(a,1);
	bm=sh(b,0);
	bn=sh(b,1);
	cout << sh("2/2",1) <<an;
	return 0;
}
	

