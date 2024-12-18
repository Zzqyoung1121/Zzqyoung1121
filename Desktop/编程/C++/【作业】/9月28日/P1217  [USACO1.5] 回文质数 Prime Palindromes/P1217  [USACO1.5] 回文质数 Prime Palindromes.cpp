#include <iostream>
#define int long long
using namespace std;

int a,b;

signed main(){
	cin>>a>>b;
	b=min(9999999ll,b);
	for (int i=a;i<=b;i++){
		if ((1000<=i&&i<=9999)||(100000<=i&&i<=999999))	continue;
		int mi=i,ti=0;
		while (mi!=0){
			ti=ti*10+mi%10;
			mi/=10;
		} 
		if (ti!=i)	continue;
		int flag=0;
		for (int j=2;j*j<=i;j++){
			if (i%j==0){
				flag=1;
				continue;
			}
		}
		if (flag==0)	cout<<i<<endl;
	}
}
