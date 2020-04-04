#include <bits/stdc++.h>
#include<cmath>
#include<string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main(){
    ll n,min=999999999,count=0;
    cin>>n;
    ll v[n];
    for (ll i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v,v+n);
    for (ll i = 0; i < n; i++){
            if(abs(v[i]-v[i+1])<min){
                min=abs(v[i]-v[i+1]);
                count=1;
            }else if(abs(v[i]-v[i+1])==min){
                count++;
            }
            
    }
    cout<<min<<" "<<count;    
} 