#include <iostream>
using namespace std;

int main(){
	int m,s,n,k,a[10005];
	cin>>m>>s>>n>>k;
	int t=0,p=m;
	while(p>0){
		while(p>0){
			if (a[s]==0){
				t++;
				if (t==n){
					cout<<s<<" ";
					a[s]=1;
					t=0;
					p--;
					break;
				}
			}
			s++;
			if (s==m+1)		s=1;
		}
		while(p>0){
			if (a[s]==0){
				t++;
				if (t==k){
					cout<<s<<" ";
					a[s]=1;
					t=0;
					p--;
					break;
				}
			}
			s--;
			if (s==0)	s=m;
		}
	}
}
