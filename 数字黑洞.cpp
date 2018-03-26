/*Êý×ÖºÚ¶´*/
#include <stdio.h>
/*aµÄb´ÎÃÝ*/
int  mi(int a,int b)
{  int i;
   int z=1 ;
    for( i=1 ; i<=b ; i++)
       z*= a;
      return z ;
}

void change (int a[4]){
	int i,j,t;
	int b[4];
	for(i=0; i < 4; i++){
		b[i]=a[i];
		a[i]=0;
	}
	for(i=0; i < 4; i++){
		for(j=0; j < 4; j++){
			if(a[i]<b[j]){
				a[i]=b[j];
					t=j;
			}
		}
		b[t]=0;
	}
}


int main(){
	int a,i,big,sma;
	int b[4];
	scanf("%d",&a);
	int ten[4]={1,10,100,1000};
	if(a%1111==0)
		printf("%d - %d = 0000",a,a);
	else{
		while(1){
			for(i=0; i < 4; i++){
				b[i]=a%10;
				a/=10;
			}
			big=0;
			sma=0;
			change(b);
			for(i=0; i<4; i++){
				sma+=b[i]*ten[i];
				big+=b[3-i]*ten[i];
			}
			a=big-sma;
			printf("%d - %04d = %04d\n",big,sma,a);
		if(a==6174)
			break;
		}
	}	
	return 0;
}
