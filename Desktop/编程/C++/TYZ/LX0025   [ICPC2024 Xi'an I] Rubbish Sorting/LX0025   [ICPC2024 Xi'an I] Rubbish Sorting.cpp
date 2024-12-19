#include <iostream>
#define ing long long
using namespace std;

int Q,ans,cnt; 
int M[27][27][27][27][27];

void dfs(string s,string x,int id,int t){
	if (id==5){
		if (M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a']!=0)	M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a']=min(M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a'],t);
		else	M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a']=t;
		return ;
	}
	dfs(s,x+'{',id+1,t);
	if (s[id]!='{')	dfs(s,x+s[id],id+1,t);
}

void tdfs(string s,string x,int id,int t){
	if (cnt<t)	return ;
	if (id==5){
		if (cnt>t&&M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a']!=0){
			ans=M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a'];
			cnt=t;
		}
		if (cnt==t&&M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a']!=0){
			if (ans!=0)	ans=min(M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a'],ans);
			else	ans=M[x[0]-'a'][x[1]-'a'][x[2]-'a'][x[3]-'a'][x[4]-'a'];
		}
		return ;
	}
	if (s[id]=='{')	tdfs(s,x+'{',id+1,t);
	if (s[id]!='{'){
		tdfs(s,x+'{',id+1,t+1);
		tdfs(s,x+s[id],id+1,t);
	}
}

signed main(){
	cin>>Q; 
	while (Q--){
		int op,x;
		string s;
		cin>>op;
		if (op==1){
			cin>>s>>x;
			while (s.size()<5)	s+='{';
			dfs(s,"",0,x);
		}
		if (op==2){
			ans=0;cnt=2e9;
			cin>>s;
			while (s.size()<5)	s+='{';
			tdfs(s,"",0,0);
			cout<<ans<<endl;
		} 
	}
}

