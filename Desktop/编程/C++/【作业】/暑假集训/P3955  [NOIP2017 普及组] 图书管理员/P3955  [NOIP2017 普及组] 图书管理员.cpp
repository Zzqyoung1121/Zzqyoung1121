#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,q,f=1e7,t=0;
	int a[1005],b[1005][3];
	cin>>n>>q;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=q;i++)	cin>>b[i][1]>>b[i][2];
	for (int i=1;i<=q;i++){
		for (int j=1;j<=n;j++){
			int x=pow(10,b[i][1]);
			if (a[j]%x==b[i][2]){
				if (a[j]<f){
					f=a[j];
					t=1;
				}
			}
		}
		if (t==1){
			cout<<f<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		f=1e7;
		t=0;
	}
}
