#include <bits/stdc++.h>
using namespace std;

struct Stu{
	char name[30];
	int Chinese;
	int Math;
	int English;
	int score;
};
int n;
Stu a[1005];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].Chinese>>a[i].Math>>a[i].English;
		a[i].score=a[i].Chinese+a[i].Math+a[i].English;
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (abs(a[i].Chinese-a[j].Chinese)<=5&&abs(a[i].Math-a[j].Math)<=5&&abs(a[i].English-a[j].English)<=5&&abs(a[i].score-a[j].score)<=10){
					cout<<a[i].name<<" "<<a[j].name<<endl;
			}
		}
	}
}
