#include <bits/stdc++.h>
using namespace std;

struct Stu{
	int id;
	int score1;
	int score2;
	int score3;
	int score4;
};

bool s(int x,int y){
	if (x>140&&y>=800){
		return 1;
	}
	else	return 0;
}
int n;
Stu a[1005];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].id>>a[i].score1>>a[i].score2;
		a[i].score3=a[i].score1+a[i].score2;
		a[i].score4=a[i].score1*7+a[i].score2*3;
	}
	for (int i=1;i<=n;i++){
		if (s(a[i].score3,a[i].score4))	cout<<"Excellent"<<endl;
		else	cout<<"Not excellent"<<endl;
	}
}
