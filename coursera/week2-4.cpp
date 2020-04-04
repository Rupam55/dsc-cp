#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main(){
        int n,ans=0;
        cin>>n;
        int arr[n],brr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }sort(arr,arr+n);
        for (int i = 0; i < n; i++){
            cin>>brr[i];
        }sort(brr,brr+n);
        for (int i = 0; i < n; i++){
            ans=ans+arr[i]*brr[i];
        }
        cout<<ans;
}