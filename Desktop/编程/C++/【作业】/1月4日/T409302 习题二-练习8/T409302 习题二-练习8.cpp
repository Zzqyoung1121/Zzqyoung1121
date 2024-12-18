# include <iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if (a<100){
		cout<<"Participation Award";
	}
	else if (a<=200){
		cout<<"Third Prize";
	}
	else if (a<=300){
		cout<<"Second Prize";
	}
	else{
		cout<<"First Prize";
	}
} 
