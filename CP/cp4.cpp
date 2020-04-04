#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,product=1;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           product=(product%m*abs(arr[i]-arr[j])%m)%m;
       }
   }
   cout<<product;
}