#include <iostream>
using namespace std;

int m;

int main(){
	cin>>m;
	int l=1,r=0,s=0;
	while (l<=m){
		while (r<m&&s<m){
			r++;
			s+=r;
		}
		if (s==m&&l!=r)	cout<<l<<" "<<r<<endl;
		s-=l;
		l++;
	}
}
