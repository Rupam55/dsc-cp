#include <bits/stdc++.h>
#include<cmath>
#include<string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int GCD(ll A, ll B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

long long int power (long long int a, long long int b,long long int n) {
    long long int ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%n;
        a=(a*a)%n;
        b=b/2;
    }
    return ans;
    }

int main()
{
    ll t,a,m,n,j,i,k,no=0;
    cin>>t;
    while(t--){
    cin>>m>>n;
    ll arr[n]={0};
    for(ll i=2;i<n;i++){
        if(GCD(i,n)==1){
            no++;
        }
    }
    no++;
    a=power(m,no,n);
    if(a==1){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
    }
}