#include <bits/stdc++.h>
using namespace std;

struct Stu{
	int Chinese;
	int Math;
	int English;
	int score;
	int id;
};
int n;
Stu a[1005];

bool name(Stu x,Stu y){
	return x.score>y.score || (x.score==y.score&&x.Chinese>y.Chinese) || (x.score==y.score&&x.Chinese==y.Chinese&&x.id<y.id);
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].Chinese>>a[i].Math>>a[i].English;
		a[i].score=a[i].Chinese+a[i].Math+a[i].English;
		a[i].id=i;
	}
	sort(a+1,a+n+1,name); 
	for (int i=1;i<=5;i++)	cout<<a[i].id<<" "<<a[i].score<<endl;
}
 
