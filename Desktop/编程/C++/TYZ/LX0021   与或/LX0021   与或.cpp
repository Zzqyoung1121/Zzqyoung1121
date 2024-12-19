#include <iostream>
#define int long long
using namespace std;

int n,k;
int a[200005];
int t[200005][65];

int check(int now,int id,int x,int y){	 
	int dx=0,dy=0;
	for (int i=0;i<60;i++){
		int tx=t[id+x-1][i]-t[id-1][i];
		if (tx==x)	dx|=1ll<<i;
		int ty=t[id+x+y-1][i]-t[id+x-1][i];
		if (ty>0)	dy|=1ll<<i;
	}
	now&=dx;
	now|=dy;
	return now;
}

signed main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		for (int j=0;j<60;j++){
			t[i][j]=t[i-1][j];
			if (a[i]&(1ll<<j))	t[i][j]++;
		}
	}
	int x=n-k-1,y=k;
	int ans=check(a[1],2,x,y);
	cout<<ans<<endl;
	int now=a[1];
	for (int i=2;i<=n;i++){
		if (y>0&&check(now|a[i],i+1,x,y-1)==ans){
			y--;
			cout<<"|";
			now|=a[i];
		}
		else {
			x--;
			cout<<"&";
			now&=a[i];
		}
	}
}
