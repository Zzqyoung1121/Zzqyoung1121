#include <iostream>
using namespace std;

int n,a[200][200],s[200][200];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	int Max=-2e9;
	
	//вСио╫г x,y 
	for (int x=1;x<=n;x++){
		for (int y=1;y<=n;y++){
			//сроб╫г p,q 
			for (int p=x;p<=n;p++){
				for (int q=y;q<=n;q++){
					int sum=s[p][q]-s[x-1][q]-s[p][y-1]+s[x-1][y-1];
//					for (int i=x;i<=p;i++){
//						for (int j=y;y<=q;y++){
//							sum+=a[i][j];
//						}
//					}
					Max=max(Max,sum);
				}
			}
		}
	}
	cout<<Max;
}

