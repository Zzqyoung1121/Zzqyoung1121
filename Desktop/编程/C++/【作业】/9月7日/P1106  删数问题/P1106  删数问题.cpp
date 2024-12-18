#include <iostream>
using namespace std;

string n;
int k,cnt;
bool vis[255];

int main(){
	cin>>n>>k;
	for (int i=0;i<n.size()-1&&k>0;i++){
		if ((n[i]-'0')>(n[i+1]-'0')&&vis[i]==0&&vis[i+1]==0){
			vis[i]=1;
			k--;
			i=0;
		}
	}
	for (int i=0;i<n.size()&&cnt<=k;i++){
		if (vis[i]==0){
			cout<<n[i];
			cnt++;
		}
	}
}
