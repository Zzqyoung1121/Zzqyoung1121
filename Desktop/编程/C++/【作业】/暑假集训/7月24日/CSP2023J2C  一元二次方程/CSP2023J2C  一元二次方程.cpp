#include <bits/stdc++.h>
using namespace std;

int main(){
//	freopen("uqe.in", "r", stdin);
//    freopen("uqe.out", "w", stdout);
//	freopen("1.txt","w",stdout);
	int T,M;
	cin>>T>>M;
	while(T--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<0){
			a=-a;
			b=-b;
			c=-c;
		}
		//答案一定  (-b+sqrt(b*b-4*a*c))/(2*a)
		int d=b*b-4*a*c;
		if(d<0){
			cout<<"NO"<<endl;
		}else{//有解 
			if(d==0){//解： -b/(2*a) 
				if((-b)%(2*a)==0){//整除 
					cout<<-b/(2*a)<<endl;
				}else{
					int gc=(int)__gcd((int)abs(b),(int)abs(2*a));
					cout<<(-b/gc)<<"/"<<(2*a/gc)<<endl;
				}
			}else{//解  (-b+sqrt(d))/(2*a) 
				int m=(int)sqrt(d);
				if(m*m==d){//sqrt(d)是一个整数  解：(-b+m)/(2*a) 
					if((-b+m)%(2*a)==0){
						cout<<(-b+m)/(2*a)<<endl;
					}else{
						int gc=(int)__gcd((int)abs(-b+m),(int)abs(2*a));
						cout<<(-b+m)/gc<<"/"<<(2*a)/gc<<endl;
					}
				}else{// (-b)/(2*a)+sqrt(d)/(2*a)
					if(b!=0){
						if((-b)%(2*a)==0){//整除 
							cout<<-b/(2*a);
						}else{
							int gc=(int)__gcd((int)abs(b),(int)abs(2*a));
							cout<<(-b/gc)<<"/"<<(2*a/gc);
						}
						cout<<"+";	
					} 
					//sqrt(d)/(2*a) -> k*sqrt(d/k/k)/(2*a)
					int k=1;
					for(int i=2;i*i<=d;){
						if(d%(i*i)==0){
							k*=i;
							d/=(i*i);
						}else{
							i++;
						}
					}
					if(k%(2*a)==0){
						if(k/(2*a)==1)	cout<<"sqrt("<<d<<")"<<endl;
						else cout<<k/(2*a)<<"*sqrt("<<d<<")"<<endl;
					}else{
						int gc=(int)__gcd(k,2*a);
						if(k/gc == 1){
							cout<<"sqrt("<<d<<")/"<<(2*a)/gc<<endl;
						}else{
							cout<<k/gc<<"*sqrt("<<d<<")/"<<(2*a)/gc<<endl;
						}
					}
				}
			}
		}	
	}
}


