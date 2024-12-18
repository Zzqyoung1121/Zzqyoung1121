#include <iostream>
using namespace std;

int n;

int main(){
	cin>>n;
	int i=1,a=0;
	while (a+i<=n){
		a+=i;
		i++;
	}
	int s=i*(i-1)/2;
	if (s==n){
		i--;
		a-=i;
	}
	int ans_a,ans_b;
	if (i%2==0){
		ans_a=0;ans_b=i+1;
		int t=n-a;
		for (int i=1;i<=t;i++){
			ans_a++;ans_b--;
		}
	}
	else {
		ans_a=i+1;ans_b=0;
		int t=n-a;
		for (int i=1;i<=t;i++){
			ans_a--;ans_b++;
		}
	}
	cout<<ans_a<<"/"<<ans_b;
}
