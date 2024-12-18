#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[305]={0};
    for (int i=1;i<=n;i++){
        cin>>h[i];
    }
    sort(h+1,h+n+1);
    long long ans=h[n]*h[n];
    for (int i=1,j=n,k=1;i<=j;i++,j--,k++){
        int a=h[j]-h[i];
        ans+=a*a;
        if (k%2==1) i--;
        else    j++;
    }
    cout<<ans;
}
