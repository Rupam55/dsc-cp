#include <bits/stdc++.h>
#include<cmath>
#include<string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main(){
    ll n;
    cin>>n;
    ll sum_a=0,sum_b=0,diff=INT_MAX;
    sum_a=n;sum_b=n-1;
    for(ll i=n-2;i>0;i-=2){
        if((sum_a+i)-sum_b<(sum_b+i)-sum_a){
            sum_a+=i;
            sum_b+=i-1;
        }else{
            sum_b+=i;
            sum_a+=i-1;
        }
    }
    cout<<abs(sum_a-sum_b);
}