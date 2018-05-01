#include<iostream>
using namespace std;
int f(int a){
        int b=0;
        while(a){
                b+=a%10;
                a/=10;
        }
        return b;
}

int main(){
        int n,i;
        cin >> n;
        int a;
        int b[40];
        for(i=0; i <40; i++){
                b[i]=0;
        }
        for(i=0; i < n; i++){
                cin >> a;
                b[f(a)]=1;
        }
        int num=0;
        for(i=0; i < 40; i++){
                if(b[i])
                        num++;
        }
        cout << num << '\n';
        for(i=0; i < 40; i++){
                if(b[i]){
                        cout << i;
                        break;
                }
        }
        i++;
        while(i < 40){
                if(b[i])
                        cout <<' ' <<i;
                i++;
        }
        return 0;
}
