#include <bits/stdc++.h>
using namespace std;
string a[30];
//字符串：可变长度的字符数组 
int ans=0,n,vis[30];
char c;

void dfs(int id,int len){
	ans=max(ans,len);
	for(int i=1;i<=n;i++){
		if(vis[i]<2){
			for(int k=1;k<min(a[id].size(),a[i].size());k++){
				int flag=1;
				for(int p=a[id].size()-k,q=0;p<a[id].size();p++,q++){
					if(a[id][p]!=a[i][q]){
						flag=0;
						break;
					}
				} 
				if(flag==1){
					vis[i]++;
					dfs(i,len+a[i].size()-k);
					vis[i]--; 
				}
			} 
		}
	}
} 

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	cin>>c;
	for(int i=1;i<=n;i++){
		if(a[i][0]==c){
			vis[i]++;
			dfs(i,a[i].size()); 
			vis[i]--;
		}
	}
	cout<<ans;
}
