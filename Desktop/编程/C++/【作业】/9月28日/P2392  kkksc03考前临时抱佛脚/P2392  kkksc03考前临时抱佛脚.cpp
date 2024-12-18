#include <iostream>
using namespace std;

int ans,cnt;
int s1,s2,s3,s4;
int a[5][25];

void dfs(int n,int c,int pos,int sum,int num){
//	cout<<n<<" "<<c<<" "<<pos<<" "<<sum<<" "<<num<<endl; 
	if (pos==n+1){
		cnt=min(cnt,max(sum,num-sum));
//		cout<<cnt<<endl;
		return ;
	}
	dfs(n,c,pos+1,sum+a[c][pos],num+a[c][pos]);
	dfs(n,c,pos+1,sum,num+a[c][pos]);
}

int main(){
	cin>>s1>>s2>>s3>>s4;
	for (int i=1;i<=s1;i++)	cin>>a[1][i];
	for (int i=1;i<=s2;i++)	cin>>a[2][i];
	for (int i=1;i<=s3;i++)	cin>>a[3][i];
	for (int i=1;i<=s4;i++)	cin>>a[4][i];
	cnt=2e9;
	dfs(s1,1,1,0,0);
	ans+=cnt;
	
	cnt=2e9;
	dfs(s2,2,1,0,0);
	ans+=cnt;
	
	cnt=2e9;
	dfs(s3,3,1,0,0);
	ans+=cnt;
	
	cnt=2e9;
	dfs(s4,4,1,0,0);
	ans+=cnt;
	cout<<ans;
}
