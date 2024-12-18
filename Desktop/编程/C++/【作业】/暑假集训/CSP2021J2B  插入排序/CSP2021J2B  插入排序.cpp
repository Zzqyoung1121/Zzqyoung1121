#include <bits/stdc++.h>
using namespace std;
struct ST{
	int id;
	int num;
}a[200005];
int n,q;

bool cmp(ST p,ST q){
	return p.num<q.num || p.num==q.num&&p.id<q.id;
}

int t_find(int x){
	for(int i=1;i<=n;i++){
		if(a[i].id==x){
			return i;
		} 
	}
}

void p(){
	for(int i=1;i<=n;i++){
		cout<<a[i].num<<" ";
	} 
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<a[i].id<<" ";
	}
	cout<<endl;
	cout<<endl;
}

int main(){
	freopen("sort.in","r",stdin);
	freopen("sort.out","w",stdout); 
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].id=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int m=1;m<=q;m++){
		int k,x,v;
		cin>>k;
		if(k==1){
			cin>>x>>v;
			int t=t_find(x);
			a[t].num=v;
			if(a[t-1].num>v || a[t-1].num==v&&a[t-1].id>a[t].id){
				for(int i=t;i>=2;i--){
					if(a[i-1].num>a[i].num || a[i-1].num==a[i].num&&a[i-1].id>a[i].id){
						ST tmp=a[i];
						a[i]=a[i-1];
						a[i-1]=tmp;
					}
				}
			}else{
				for(int i=t;i<n;i++){
					if(a[i+1].num<a[i].num || a[i+1].num==a[i].num&&a[i+1].id<a[i].id){
						ST tmp=a[i+1];
						a[i+1]=a[i];
						a[i]=tmp; 
					}
				}
			}
		}else{
			cin>>x;
			cout<<t_find(x)<<endl; 
		}	
	}
}


