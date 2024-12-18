//满分方案，根据题目分析，可以直接针对拍好序的数组进行修改调整，不用多次排序
#include <bits/stdc++.h>
using namespace std;
struct ST{
	int id;//原来的位置 
	int num;//数值 
}a[200005];
int n,q;

bool cmp(ST p,ST q){
	return p.num<q.num || p.num==q.num&&p.id<q.id;
}

int t_find(int x){//查找原来的第x个元素现在的位置 
	for(int i=1;i<=n;i++){
		if(a[i].id==x){//看谁的下标是原来的x 
			return i;//返回现在的位置 
		} 
	}
}

void p(){//测试函数 对了后可以删掉 
	for(int i=1;i<=n;i++){
		cout<<a[i].num<<" ";
	} 
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<a[i].id<<" ";
	}
	cout<<endl;
	cout<<endl;
}

int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].id=i;
	}
	sort(a+1,a+n+1,cmp);
	//p();//测试函数 
	for(int m=1;m<=q;m++){
		int k,x,v;
		cin>>k;
		if(k==1){
			cin>>x>>v;
			//希望第x个元素修改为v 
			int t=t_find(x);//原来的第x个元素现在所在的位置
			//拍好顺序了 
			a[t].num=v;//修改完这个元素的数值后
			//移动他使得重新有序  利用插入排序的原则，可能左移动 可能右移动 
			if(a[t-1].num>v || a[t-1].num==v&&a[t-1].id>a[t].id){//d左移动 
				for(int i=t;i>=2;i--){
					if(a[i-1].num>a[i].num || a[i-1].num==a[i].num&&a[i-1].id>a[i].id){
						ST tmp=a[i];
						a[i]=a[i-1];
						a[i-1]=tmp;
					}
				}
			}else{
				for(int i=t;i<n;i++){//右移动 
					if(a[i+1].num<a[i].num || a[i+1].num==a[i].num&&a[i+1].id<a[i].id){
						ST tmp=a[i+1];
						a[i+1]=a[i];
						a[i]=tmp; 
					}
				}
			}
			//p();//测试函数 
		}else{
			cin>>x;//原来的第x个元素，现在所在的位置
			cout<<t_find(x)<<endl; 
		}	
	}
}

/*
5 10
10 8 7 6 9
1 3 9
1 1 9

6 7 8 9 10
4 3 2 5 1

6 8 9 9 10
4 2 3 5 1

6 8 9 9 9
4 2 1 3 5 

*/

