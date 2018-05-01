//
#include <iostream>
using namespace std;
typedef struct{
	int bad;
	int num;
	string name;
	int obj[10];
} stud;
int judge(int a[],int b,int n){
	int yn=0;
	for(int i=0; i < n; i++){
		if(b==a[i]){
			yn=1;
			break;
		}
	}
	return yn;
}
int main(){
	int n,m,i,j,num;
	cin >> n >> m;
	stud stu[n];
	int bon=0;
	int bad[m];
	for(i=0; i < m; i++){
		cin >> bad[i];
	}
	for(i = 0; i < n; i++){
		stu[i].bad=0;
		cin >> stu[i].name >> stu[i].num;
		for(j=0; j < stu[i].num; j++){
			cin >>stu[i].obj[j];
			if(judge(bad,stu[i].obj[j],m)){
				stu[i].bad=1;
				bon++;
			}	
		}
	}
	int bsn=0;
	for(i=0; i < n; i++){
		if(stu[i].bad){
			bsn++;
			cout << stu[i].name << ":";
			for(j=0; j < stu[i].num; j++){
				if(judge(bad,stu[i].obj[j],m))
					cout << ' ' << stu[i].obj[j];
			}
			cout << '\n';
		}
	}
	cout << bsn << ' '<< bon;
	return 0;
}

