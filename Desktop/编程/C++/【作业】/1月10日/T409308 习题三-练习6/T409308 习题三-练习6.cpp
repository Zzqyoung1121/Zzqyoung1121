#include <iostream> 
using namespace std;
 
int main(){
	int x,s;
	cin>>x;
	for (int i=1,j=1;;i*=2,j++){
		s+=i;
		if (s>x){
			cout<<j-1;
			break;
		} 
	}
}

