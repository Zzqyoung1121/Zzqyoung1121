#include <bits/stdc++.h>
using namespace std;

struct ST{
	long long s,e;
}t[10005];

bool cmp(ST x,ST y){
	return x.s<y.s;
}

int main(){
	int n,l;
	
	cin>>n>>l;
	for (int i=1;i<=n;i++)	cin>>t[i].s>>t[i].e;
	
	sort(t+1,t+n+1,cmp);
	
	long long cnt=0;
	long long last=0;//上一次的铺设的末尾位置
	
	for (int i=1;i<=n;i++){
		if (t[i].e>last){//没有被覆盖
			if (t[i].s<last){//有重合
				long long len=t[i].e-last;
				long long m=(len+l-1)/l;
				cnt+=m;
				last+=m*l;
			}
			else {//没有重合
				long long len=t[i].e-t[i].s;
				long long m=(len+l-1)/l;//木板数量
				cnt+=m;
				last=t[i].s+m*l;
			}
		}
	}
	
	cout<<cnt;
}
