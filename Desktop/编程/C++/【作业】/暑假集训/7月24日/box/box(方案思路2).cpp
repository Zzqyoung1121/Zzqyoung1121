#include <bits/stdc++.h>
using namespace std;
 
struct ST{
	int w;
	int v;
}a[55];

struct QT{
	int x;
	int id;
}b[55];

int n,m,t,l,r,ans;

bool cmp1(ST x,ST y){
	return x.v>y.v || (x.v==y.v && x.w>y.w);
}

bool cmp2(QT x,QT y){
	return x.x<y.x;
}

int main(){
	cin>>n>>m>>t;
	for (int i=1;i<=n;i++)	cin>>a[i].w>>a[i].v;
	for (int i=1;i<=m;i++){
		cin>>b[i].x;
		b[i].id=i;
	}
	sort(a+1,a+n+1,cmp1);
	sort(b+1,b+m+1,cmp2);
	while (t--){
		bool vis[55]={0};
		int s=0;
		cin>>l>>r;
		//思路方案2：以盒子为中心，优先安排体积较小的盒子 ------- 100%
		for (int i=1;i<=m;i++){
			for (int j=1;j<=n;j++){
				if (b[i].id>=l&&b[i].id<=r)	continue;
				if (b[i].x>=a[j].w&&vis[j]==0){
					vis[j]=1;
					s+=a[j].v;
					break;
				}
			}
		} 
		cout<<s<<endl;
	}
}
