#include <iostream>
using namespace std;

int t[20005]={0};
int main(){
	int n;
	int a[105];
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			int s=a[i]+a[j];
			t[s]++;
		}
	}
	int cnt=0;
	for (int i=1;i<=n;i++){
		if (t[a[i]]!=0){
			cnt++;
		}
	}
	cout<<cnt;
}
