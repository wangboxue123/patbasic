#include <stdio.h>
typedef struct{
  char name[15];
  int a;
  int b;
}stu; 
int main(){
  int n,i;
  scanf("%d",&n);
  stu z[n];
  for(i=0; i< n; i++){
    scanf("%s",z[i].name);
    scanf("%d",&z[i].a);
    scanf("%d",&z[i].b);
  }
  stu b[n];
  for(i=0; i<n; i++)
    b[z[i].a]=z[i];  
  scanf("%d",&n);
  int bb[n];
  for(i=0; i<n; i++){
    scanf("%d",&bb[i]);
  }
  for(i=0; i<n; i++){
    printf("%s ",b[bb[i]].name);
    printf("%d\n",b[bb[i]].b);
  }
  return 0;  
} 
