#include<stdio.h>
# include<iostream>
using namespace std;

int main(){
  int n,i,m;
  cin >> n;
  int a[n];
  m=0; 
  for(i = 0; i < n; i++){
    cin >> a[i];
    m+=a[i];
  }
  m*=(n-1)*11;
  cout << m; 
  return 0; 
}
