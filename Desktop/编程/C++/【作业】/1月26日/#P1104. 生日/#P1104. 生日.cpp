#include <bits/stdc++.h>
using namespace std;

struct Stu{
	char name[30];
	int id;
	int y;
	int m;
	int d;
};
int n;
Stu a[105];

bool name(Stu x,Stu y){
	return x.y<y.y || (x.y==y.y&&x.m<y.m) || (x.y==y.y&&x.m==y.m&&x.d<y.d) || (x.y==y.y&&x.m==y.m&&x.d==y.d&&x.id>y.id);
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].y>>a[i].m>>a[i].d;
		a[i].id=i;
	}
	sort(a+1,a+n+1,name); 
	for (int i=1;i<=n;i++)	cout<<a[i].name<<endl;
}
