#include <iostream>
using namespace std;

int a,b,c,d;

int main(){
	cin>>a>>b>>c>>d;
	for (int i=0;i<=1000;i++){
		for (int j=0;j<=1000-i;j++){
			for (int k=0;k<=1000-i-j;k++){
				int g=1000-i-j-k;
				if (g%d==0){
					if (a*i+b*j+c*k+g/d==1000){
						cout<<i<<" "<<j<<" "<<k<<" "<<g;
						return 0;
					}
				}
			}
		}
	}
	cout<<"-i";
}
