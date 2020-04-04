#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
     ll n;
     cout<<"enter the number of elements";
     cin>>n;
     ll arr[n],brr[n],crr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
          crr[i]=arr[i];
     }
     sort(crr,crr+n);
     int k=0;
     cout<<"the even odd array"<<"\n";
     for(int i=0;i<n;i++){
          if(arr[i]%2==0){
               brr[k]=arr[i];
               k++;
          }
     }
     for(int i=0;i<n;i++){
          if(arr[i]%2!=0){
               brr[k]=arr[i];
               k++;
          }
     }
     for(int i=0;i<n;i++){
         cout<<brr[i];
     }
     cout<<"\n"<<"the nth large and small element"<<"\n";
     int a;
     cout<<"enter element"<<"\n";
     cin>>a;
     cout<<"nth largest is= "<<crr[n+1-a];
     cout<<"nth smallest is= "<<crr[a];
}