#include <iostream>
using namespace std;

int s[100000]={1};
int len=1;//当前有效位数 

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		//高精度数字的每一位
		for(int j=0;j<len;j++){
			s[j]*=i;
		} 
		for(int j=0;j<len;j++){
			s[j+1]+=s[j]/10;
			s[j]%=10;
		}
		if(s[len]>0){//梳理有没有超出现有位数的情况 
			while(s[len]>=10){//高位进位 进位到无位数可以进位的时候停 
				s[len+1]+=s[len]/10; 
				s[len]%=10;
				len++;
			}	
			len++;
		}
		
		//乘法的答案是多少位
	}
	
	for(int j=len-1;j>=0;j--){
		cout<<s[j];
	}
	cout<<endl;
	
	
	return 0;
}

