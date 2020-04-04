#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,count=0;
    cin>>a;
    for (a; a >=10; a=a-10){
        count++;
        
    }
    for (a; a >=5; a=a-5){
        count++;
        
    }
    for (a; a >0; a=a-1){
        count++;
    }
    cout<<count;
}