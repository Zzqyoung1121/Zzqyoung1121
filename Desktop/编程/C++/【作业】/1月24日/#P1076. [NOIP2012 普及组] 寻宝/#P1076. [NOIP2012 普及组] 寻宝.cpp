#include <iostream>
using namespace std;
int n,m,t,ans=0;
int Q[10005][105][3];
int b[10005];

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=0;j<=m-1;j++){
			cin>>Q[i][j][1]>>Q[i][j][2];
			if (Q[i][j][1]==1) b[i]++;
		}
	}
	cin>>t;
	for (int i=1;i<=n;i++){
		int x=Q[i][t][2],cnt=0;
		ans+=x;
		x=x%b[i]; 
		if (x==0){
			x=b[i];
		}
		while(1){
			if (Q[i][t][1]==1){
				cnt++;
				if (cnt==x)  break;
			}
			t++;
			if (t==m)  t=0;  
		}
	}
	cout<<ans%20123; 
} 
