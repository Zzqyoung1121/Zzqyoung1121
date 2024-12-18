#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int x,y,len;
};

int fx,fy,sx,sy;
int vis[30][30];
int dx[12]={-1,-1,1,1,-2,-2,2,2,-2,-2,2,2};
int dy[12]={2,-2,2,-2,1,-1,1,-1,-2,2,-2,2};

queue<ST> Q;
queue<ST> P;

int main(){
	cin>>fx>>fy>>sx>>sy;
	Q.push({fx,fy,0});
	while (Q.size()>0){
		ST t=Q.front();Q.pop();
		if (t.x==1&&t.y==1){
			cout<<t.len<<endl;
			break;
		}
		for (int i=0;i<=11;i++){
			int tx=t.x+dx[i],ty=t.y+dy[i];
			if (tx>=1&&tx<=25&&ty>=1&&ty<=25){
				if (vis[tx][ty]==0){
					vis[tx][ty]=1;
					Q.push({tx,ty,t.len+1});
				}
			}
		}
	}
	
	memset(vis,0,sizeof(vis));
	P.push({sx,sy,0});
	while (P.size()>0){
		ST t=P.front();P.pop();
		if (t.x==1&&t.y==1){
			cout<<t.len;
			break;
		}
		for (int i=0;i<=11;i++){
			int tx=t.x+dx[i],ty=t.y+dy[i];
			if (tx>=1&&tx<=25&&ty>=1&&ty<=25){
				if (vis[tx][ty]==0){
					vis[tx][ty]=1;
					P.push({tx,ty,t.len+1});
				}
			}
		}
	}
}
