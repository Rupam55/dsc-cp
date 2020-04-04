#include <bits/stdc++.h>
#include<cmath>
#include<string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main() {
    int t;
    ll n,a,total=0,min=99999;
    cin>>t;
    while(t--){
        total=0;
        cin>>n;
        a=n;
        total+=n/11;
        n=n%11;
        total+=n/7;
        n=n%7;
        total+=n/5;
        n=n%5;
        total+=n/1;
        n=n%1;
        if(a%5==0){
            min=a/5;
        }if(min<total)total=min;
        if(a%7==0){
            min=a/7;
        }if(min<total)total=min;
        cout<<total<<"\n";
    }
}


using namespace std; unordered_map m; int dp(int n,int sum) { if(n==1||n==5||n==11||n==7)return 1; if(n<0)return 100000000; if(m[sum]!=0)return m[sum]; int minn=INT_MAX; vector v(4); v[0]=1+dp(n-11,sum+11); v[1]=1+dp(n-7,sum+7); v[2]=1+dp(n-5,sum+5); v[3]=1+dp(n-1,sum+1);

return m[sum]=*min_element(v.begin(),v.end());
}

int main() { int t;cin>>t; while(t--) { int n;cin>>n; cout<