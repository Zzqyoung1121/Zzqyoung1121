#include <iostream>
using namespace std;

bool a[10][10],b[10][10],c[10][10],flag;
int k[10][10];
int id[10][10]={
	{},
	{0,1,1,1,2,2,2,3,3,3},
	{0,1,1,1,2,2,2,3,3,3},
	{0,1,1,1,2,2,2,3,3,3},
	{0,4,4,4,5,5,5,6,6,6},
	{0,4,4,4,5,5,5,6,6,6},
	{0,4,4,4,5,5,5,6,6,6},
	{0,7,7,7,8,8,8,9,9,9},
	{0,7,7,7,8,8,8,9,9,9},
	{0,7,7,7,8,8,8,9,9,9},
};

void dfs(int x,int y){
	if (flag)	return ;
	if (x>9){
		for (int i=1;i<=9;i++){
			for (int j=1;j<=9;j++){
				cout<<k[i][j]<<" ";
			} 
			cout<<endl;
		}
		flag=1;
		return ;
	}
	if (k[x][y]==0){
		for (int i=1;i<=9;i++){
			if (a[x][i]==0&&b[y][i]==0&&c[id[x][y]][i]==0){
				a[x][i]=1;
				b[y][i]=1;
				c[id[x][y]][i]=1;
				k[x][y]=i;
				if (y==9)	dfs(x+1,1);
				else	dfs(x,y+1);
				a[x][i]=0;
				b[y][i]=0;
				c[id[x][y]][i]=0;
				k[x][y]=0;
			}
		}
	}
	else {
		if (y==9)	dfs(x+1,1);
		else	dfs(x,y+1);
		return ;
	}
}

int main(){
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			cin>>k[i][j];
			if (k[i][j]>0){
				a[i][k[i][j]]=1;
				b[j][k[i][j]]=1;
				c[id[i][j]][k[i][j]]=1;
			}		
		}
	}
	dfs(1,1);
	return 0;
	
}
