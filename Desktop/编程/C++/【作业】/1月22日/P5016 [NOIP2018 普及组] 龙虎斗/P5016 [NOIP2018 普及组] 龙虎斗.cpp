#include <bits/stdc++.h> 
using namespace std;

int main(){
	long long int n,a[100000],m,p1,p2=0,s1,s2,Min,f=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m>>p1>>s1>>s2;
	a[p1-1]+=s1;
	long long int l=0,h=0;
	for (int i=1;i<=n;i++){
		if (i<m){
			l+=(m-i)*a[i-1];
		}
		if (i>m){
			h+=(i-m)*a[i-1];
		}
	}
	if (l>h){
		Min=(l-h);
	}
	if (l<h){
		Min=(h-l);
	}
	if (l==h){
		p2=m;
		cout<<p2;
	}
	else{
		for (int i=0;i<n;i++){
			long long int l1=l,h1=h;
			if (i+1<m&&l<h){
				l1+=(m-i-1)*s2; 
				if (h>=l1){
					if (h-l1<Min){
						Min=h-l1;
						p2=i;
						f=1;
					}
				}
				else{
					if (l1-h<Min){
						Min=l1-h;
						p2=i;
						f=1;
					}
				}
			}
			if (i+1>m&&l>h){
				h1+=(i-m+1)*s2;
				if (l>=h1){
					if (l-h1<Min){
						Min=l-h1;
						p2=i;
						f=1;
					}
				}
				else{
					if (h1-l<Min){
						Min=h1-l;
						p2=i;
						f=1;
					}
				}
			}
		}
		if (f==1){
			cout<<p2+1;
		}
		else{
			cout<<m;
		}
	}
}
