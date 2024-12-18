#include <iostream>
using namespace std;

int n,k,p;
int t[55],f[55];

int main(){
	int ans=0;
	cin>>n>>k>>p;
	for (int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		ans+=t[a];
		if (b<=p){
			t[a]++;
			ans+=f[a];
			for (int j=50-1;j>=0;j--){
				t[j]+=f[j];
				f[j]=0;
			}
		}
		else	f[a]++;
//		cout<<ans<<endl;
//		for (int i=0;i<k;i++)	cout<<t[i]<<" "<<f[a]<<endl;		cout<<endl;
	}
	cout<<ans;
}
