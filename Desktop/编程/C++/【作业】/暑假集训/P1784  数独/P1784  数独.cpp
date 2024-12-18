#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mp[20][20],vis1[20][20],vis2[20][20],vis3[20][20],vis4[20][20],vis[20][20];
int cnt=0,flag=0;

void dfs(int x,int y){
	cout<<x<<" "<<y<<endl;
	if (flag==1)	return ;
	if (cnt==81){
		flag=1;
		return ;
	}
	if (mp[x][y]==0){
		for (int i=1;i<=9;i++){
			if (x>=1&&x<=9&&y>=1&&y<=9){
				if (vis1[x][i]==0&&vis2[y][i]==0&&vis3[abs(x-y)][i]==0&&vis4[x+y][i]==0){
					vis1[x][i]=1;
					vis2[y][i]=1;
					vis3[abs(x-y)][i]=1;
					vis4[x+y][i]=1;
					vis[x][y]=1;
					mp[x][y]=i;
					cnt++;
					if (x+1<=9)	dfs(x+1,y);
					if (y+1<=9)	dfs(x,y+1);
					vis1[x][i]=0;
					vis2[y][i]=0;
					vis3[abs(x-y)][i]=0;
					vis4[x+y][i]=0;
					mp[x][y]=0;
					cnt--;
				}
			}
		}
	}
	else {
		if (x+1<=9)	dfs(x+1,y);
		if (y+1<=9)	dfs(x,y+1);
	}
}

int main(){
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cin>>mp[i][j];
			if (mp[i][j]!=0){
				cnt++;
				vis1[i][mp[i][j]]=1;
				vis2[j][mp[i][j]]=1;
				vis3[abs(i-j)][mp[i][j]]=1;
				vis4[i+j][mp[i][j]]=1;
			}
		}
	}
	dfs(1,1);
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cout<<mp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cout<<vis1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cout<<vis2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cout<<vis3[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cout<<vis4[i][j]<<" ";
		}
		cout<<endl;
	}
}
