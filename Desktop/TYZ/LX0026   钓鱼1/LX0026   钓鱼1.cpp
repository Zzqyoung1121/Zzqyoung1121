#include <iostream>
#define int long long
using namespace std;

int n,T,ans;
int x[105];
int a[105],b[105]; 

bool check(int id,int num,int t){
	int cnt=0;
	for (int i=1;i<=id;i++){
		if (a[i]>=num)	cnt+=(a[i]-num)/b[i]+1; 
	}
	return cnt*5<=t;
}

int f(int id,int t){
	int num=0;
	for (int i=1;i<=id;i++){
		if (b[i]==0)	num=max(num,a[i]);
	}
	int l=num+1,r=1000000000,tans=-1;
	while (l<=r){
		int mid=(l+r)/2;
		if (check(id,mid,t)){
			tans=mid;
			r=mid-1;
		}
		else {
			l=mid+1;
		}
	}
	int cnt=0,ti=0;
	for (int i=1;i<=id;i++){
		if (a[i]>=tans){
			int len=(a[i]-tans)/b[i]+1;
			int s=a[i];
			int e=a[i]-b[i]*(len-1);
			cnt+=(s+e)*len/2;
			ti+=len*5;
		}
	}
	return cnt+(t-ti)/5*num;
}

signed main(){
	cin>>n>>T;
	for (int i=1;i<=n;i++)	cin>>x[i];
	for (int i=1;i<=n;i++)	cin>>a[i]>>b[i];
	for (int i=1;i<=n;i++){
		if (x[i]*2<=T)	ans=max(ans,f(i,T-x[i]*2));
	}
	cout<<ans;
}
