#include <iostream>
using namespace std;

string a,b;

void dfs(string x,string y){
	if (x==""||y==""){
		return ;
	}
	int flag=0;
	char root=y[y.size()-1];
	cout<<root;
	string al,ar;
	for (int i=0;i<x.size();i++){
		if (x[i]==root)	flag=1;
		else {
			if (flag==0)	al+=x[i];
			else	ar+=x[i];
		}
	}
//	cout<<al<<ar;
	string bl,br;
	for (int i=0;i<y.size();i++){
		if (y[i]!=root){
			if (i<al.size())	bl+=y[i];
			else	br+=y[i];
		}
	}
//	cout<<bl<<br;
	dfs(al,bl);
	dfs(ar,br);
}

int main(){
	cin>>a>>b;
	dfs(a,b);
}
