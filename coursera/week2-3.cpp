#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d=0,count=0;
    cin>>a>>b>>c;
    int arr[c];
    for (int i = 0; i < c; i++){
        cin>>arr[i];
    }
    d=d+b;
    while(d<a){
        for (int i = 0; i < c; i++){
            if(arr[i]==d){
                count++;
                d=arr[i];
                break;
            }else if(arr[i]>d){
                if(arr[i]-arr[i-1]>b){
                    cout<<"-1";
                    return 0;
                }
                count++;
                d=arr[i-1];
                break;
            }else if(i==c-1){
                count++;
                d=arr[c-1];
                if(a-d>b){
                    cout<<"-1";
                    return 0;
                }
                break;
            }
        }d=d+b;
    }cout<<count;
}