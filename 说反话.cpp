#include<stdio.h>
# include<iostream>
using namespace std;
void zero(int a[200]){
	int i=0;
	for(i = 0; i < 200; i++){
		a[i]=0;
	}
} 
int len(string a){
	int i=0;
	while(a[i])
		i++;
	return i;
}
int main(){
	string a[80];
	char ch;
	int i=0;
	while((ch = getchar()) != '\n'){
		if(ch!=' ')
			a[i]+=ch;
		else
			i++;
	}
	while(i){
		cout << a[i--] << ' '; 
	}
	cout << a[0];
	return 0;
}
