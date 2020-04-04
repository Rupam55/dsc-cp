#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

void bubbleSort(double arr[][3], int n) 
{ 
   int i, j;
   double temp,temp2,temp3; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j][0] < arr[j+1][0]) 
        { 
           temp=arr[j][0];
           temp2=arr[j][1];
           temp3=arr[j][2];
           arr[j][0]=arr[j+1][0];
           arr[j][1]=arr[j+1][1];
           arr[j][2]=arr[j+1][2];
           arr[j+1][0]=temp;
           arr[j+1][1]=temp2;
           arr[j+1][2]=temp3; 
           swapped = true; 
        } 
     } 
     if (swapped == false) 
        break; 
   } 
} 

int main(){
    int n,m;
    cin>>n>>m;
    double arr[n][3],ans=0;
    for (int i = 0; i < n; i++){
        cin>>arr[i][2];
        cin>>arr[i][1];
        arr[i][0]=arr[i][2]/arr[i][1];
    }
    bubbleSort(arr,n);
    int a=0;
    
    while(m>0&&a<n){
        if(arr[a][1]>m){
            ans=ans+arr[a][0]*m;
            m=0;
        }else{
            m=m-arr[a][1];
            ans=ans+arr[a][2];
            a++;
        }
    }
    cout<<setprecision (4) << fixed <<ans;      
}