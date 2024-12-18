#include <bits/stdc++.h>
#include <set>
using namespace std;

set<int> s; 

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		int t,k;
		cin>>t>>k;
		if (t==1){
			if (s.find(k)==s.end()){
				s.insert(k);
			}
			else{
				cout<<"Already Exist"<<endl;
			}
		}
		else{
			if (s.empty())	cout<<"Empty"<<endl;
			else if (s.find(k)!=s.end()){
				cout<<k<<endl;
				s.erase(k);
			}
			else {
				auto it=s.upper_bound(k);
				if (it==s.end()){
					it--;
					cout<<*it<<endl;
					s.erase(*it);					
				}
				else if (it==s.begin()){
					cout<<*it<<endl;
					s.erase(*it);
				}
				else {
					auto lt=it;
					lt--;
					int ans;
					if (k-*lt<=*it-k){
						ans=*lt;
						s.erase(ans);
					}
					else {
						ans=*it;
						s.erase(ans);
					}
					cout<<ans<<endl;
				}
			}
		}
	} 
}
