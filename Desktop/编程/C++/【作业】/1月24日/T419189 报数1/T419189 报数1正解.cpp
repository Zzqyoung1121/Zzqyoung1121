#include <iostream>
using namespace std;
int a[10005],n;
int main(){
	cin>>n;
	int i=1;//需要一变量代表当前到了谁，目前是从1开始
	int m=n;//还需要人数变量记录人数，
	int k=0;//还需要变量记录报数报到几了
	
	
	//开始处理报数
	//循环-重复执行报数操作 直到人数只剩1个人停止
	while(m>0){
		//判断当前这个人是否出局
		if(a[i]==0){//如果没有出局
			k++;//报数
			if(k==2){//如果报数为2
				a[i]=1;//出局
				m--; //总人数减一
			}
			
			if(k==3){//如果报数为3
				a[i]=1;//出局
				k=0; //报数清0
				m--;//总人数减一
			}
		}
		i++; //出不出局 人数都往后走
		if(i==n+1) i=1;//当人的编号走到末尾 手动调到开始
		}
		
		
	for(int i=1;i<=n;i++){//遍历所有的数字
		if(a[i]==0) cout<<i;//如果数组中对应数字下标所存的值为0，这个是幸运数字
	}
}
