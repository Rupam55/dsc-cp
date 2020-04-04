#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
     ll arr[100]={0};
     ll n,a;
     cout<<"enter number of elements";
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>a;
          arr[a]++;
     }cout<<"\n"<<"duplicate element"<<"\n";
     for(int i=0;i<100;i++){
          if(arr[i]>1){
               cout<<i<<"\t";
          }
     }cout<<"\n"<<"unique element"<<"\n";
     for(int i=0;i<100;i++){
          if(arr[i]=1){
               cout<<i<<"\t";
          }
     }
}