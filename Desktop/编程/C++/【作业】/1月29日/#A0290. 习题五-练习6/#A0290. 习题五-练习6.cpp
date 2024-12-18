#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[1005];
	int n=0,m=0,l;
	string x;
	cin>>x;
	l=x.size();
	strcpy(a,x.c_str());
	for (int i=0;i<l;i++){
		if (a[i]=='b'&&a[i+1]=='o'&&a[i+2]=='y'){
			n++;
			i+=2;
		}
		else if (a[i]=='g'&&a[i+1]=='i'&&a[i+2]=='r'&&a[i+3]=='l'){
			m++;
			i+=3;
		}
		else if ((a[i]=='b' && a[i+1]!='o' && a[i+1]!='.') || (a[i]=='o' && a[i+1]!='y' && a[i+1]!='.') || a[i]=='y'){
			n++;
		}
		else if ((a[i]=='g' && a[i+1]!='i' && a[i+1]!='.') || (a[i]=='i' && a[i+1]!='r' && a[i+1]!='.') || (a[i]=='r' && a[i+1]!='l' && a[i+1]!='.') || a[i]=='l'){
			m++;
		}
	}
	cout<<n<<endl<<m;
}
