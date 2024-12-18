#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int l=0;
	cin>>a>>b>>c;
	for (int i=100;i<=999;i++){
		if (a!=0){
			int y=i/a*b;
			int z=i/a*c;
			if (i%a==0&&y<=999&&z<=999){
				int s[10];
				s[0]=i%10;
				s[1]=i/10%10;
				s[2]=i/100;
				s[3]=y%10;
				s[4]=y/10%10;
				s[5]=y/100;
				s[6]=z%10;
				s[7]=z/10%10;
				s[8]=z/100;
				int t[10]={0};
				for (int j=0;j<=8;j++)	t[s[j]]++;
				int f=0;
				for (int j=1;j<=9;j++){
					if (t[j]!=1){
						f=1;					
						break;
					}
				}
				if (f==0){
					cout<<i<<" "<<y<<" "<<z;
					cout<<endl;
					l=1;
				}
			}
		}
	}
	if (l==0)	cout<<"No!!!";
	return 0;
}
