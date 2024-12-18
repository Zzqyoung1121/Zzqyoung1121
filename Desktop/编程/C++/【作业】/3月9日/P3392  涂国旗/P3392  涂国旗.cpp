#include <iostream>
using namespace std;

int n,m;
int W[100],R[100],B[100];
int SW[100],SR[100],SB[100];
char c;

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			if(c=='W') W[i]++;
			if(c=='R') R[i]++;
			if(c=='B') B[i]++;
		}
	}
	for(int i=1;i<=n;i++){
		SW[i]=SW[i-1]+W[i];
		SR[i]=SR[i-1]+R[i];
		SB[i]=SB[i-1]+B[i];
	}
	int Min=3000;
	for(int l=2;l<=n-1;l++){
		for(int r=l;r<=n-1;r++){
			int sum=SB[l-1]+SR[l-1]+SW[r]-SW[l-1]+SR[r]-SR[l-1]+SB[n]-SB[r]+SW[n]-SW[r];
			Min=min(sum,Min);
		}
	}
	cout<<Min;
}
