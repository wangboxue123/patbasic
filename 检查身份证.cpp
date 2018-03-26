#include <stdio.h>
int main(){
  char ch[]="10X98765432";
  int m[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  int n,i,j,che;
  int a[n];
  scanf("%d",&n);
  char b[n][19];
  char fal[n][19];
  for(i=0; i<n; i++){
    scanf("%s",b[i]);
  }
  int fan=0;
  for(i=0; i < n;i++){
    che=0;
    for(j=0; j<17; j++){
      che+=((b[i][j]-'0')*m[j]);
    }
    che%=11;
    if(ch[che]!=b[i][17]){
        a[fan]=i;
        fan++;
      }
    }
  
  if(fan){
    for(i=0; i<fan; i++){
      printf("%s\n",b[a[i]]);
    }
  }
  else{
    printf("All passed");
  }
  return 0;  
} 
