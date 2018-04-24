#include <iostream>
using namespace std;
int len(string a){
	int i = 0;
	while(a[i])
		i++;
	return i;
}
string f(string a){
	a+='x';
	int l = len(a);
	char n = '1';
	char ch = a[0];
	string b;
	for(int i = 1; i < l; i++ ){
		if(a[i]==ch)
			n++;
		else{
			b+=ch;
			b+=n;
			ch=a[i];
			n = '1';
		}	
	}
	return b;
}

int main(){
	int n;
	char ch;
	cin >> ch >> n;
	string a;
	a+=ch;
	for(int i=0; i < n-1; i++){
		a=f(a);
	}
	cout << a;
	return 0;
}

