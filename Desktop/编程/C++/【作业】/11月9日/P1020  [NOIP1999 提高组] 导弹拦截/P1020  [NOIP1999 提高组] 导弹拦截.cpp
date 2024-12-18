#include <iostream>
using namespace std;

int a[100005],n;
int dpt[100005],m;
int dpf[100005],f;

int main(){
	while (cin>>a[++n])	;
	for (int i=1;i<=n;i++){
		if (i==1||a[i]<=dpt[m])	dpt[++m]=a[i];
		else {
			int l=1,r=m,ans;
			while (l<=r){
				int mid=(l+r)/2;
				if (a[i]>dpt[mid]){
					ans=mid;
					r=mid-1;
				}
				else {
					l=mid+1;
				}
			} 
			dpt[ans]=a[i];
		}
	} 
	for (int i=1;i<=n;i++){
		if (i==1||a[i]>dpf[f])	dpf[++f]=a[i];
		else {
			int l=1,r=f,ans;
			while (l<=r){
				int mid=(l+r)/2;
				if (a[i]<=dpf[mid]){
					ans=mid;
					r=mid-1;
				}
				else {
					l=mid+1;
				}
			} 
			dpf[ans]=a[i];
		}
	} 
	m--;
	cout<<m<<endl<<f;
} 
