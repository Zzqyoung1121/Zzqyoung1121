#include <iostream>
using namespace std;

int n;
int a[305][305],s[305][305],ans;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	for (int p=1;p<=n;p++){
		for (int q=1;q<=n;q++){
			for (int x=p;x<=n;x++){
				for (int y=q;y<=n;y++){
					int ts=s[x][y]-s[p-1][y]-s[x][q-1]+s[p-1][q-1];
					ans=max(ts,ans);
				}
			}
		}
	}
	cout<<ans;
}
