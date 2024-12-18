#include <iostream>
#include <map>
using namespace std;

int n,a,cnt,len=0;
map<int,int> M;

int main(){
	cin>>n;
	M[0]=0;
	for (int i=1;i<=n;i++){
		cin>>a;
		if (a==1)	cnt--;
		else	cnt++;
		if (cnt!=0&&M[cnt]==0)	M[cnt]=i;
		else {
			if (i-M[cnt]>len)	len=(i-M[cnt]);
		}
	}
	cout<<len;
}
