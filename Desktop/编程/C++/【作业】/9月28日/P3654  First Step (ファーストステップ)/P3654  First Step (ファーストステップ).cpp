#include <iostream>
using namespace std;

int r,c,k,a[105][105],ans;

int main(){
	cin>>r>>c>>k;
	for (int i=1;i<=r;i++){
		for (int j=1;j<=c;j++){
			char c;
			cin>>c;
			if (c=='.')	a[i][j]=1;
			else	a[i][j]=0;
		}
	}
	for (int i=1;i+k-1<=r;i++){
		for (int j=1;j+k-1<=c;j++){
			ans+=2;
			for (int g=i;g<=i+k-1;g++){
				if (a[g][j]==0){
					ans--;
					break;
				}
			}
			for (int h=j;h<=j+k-1;h++){
				if (a[i][h]==0){
					ans--;
					break;
				}
			}
		}
	}
	if (k==1)	ans/=2;
	cout<<ans;
} 
