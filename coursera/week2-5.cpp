#include<bits/stdc++.h>

using namespace std;

int main(){
    vector< pair <int,int> > vect; 
 
    int n,a,b;
    cin>>n;  
    for (int i=0; i<n; i++){
        cin>>a>>b;
        vect.push_back(make_pair(a,b)); 
    }
    sort(vect.begin(), vect.end());
    vector<int> v;
    int i=0,j=0;
    while(i<=n){
        v.push_back(vect[i].second);    
        while(j<n&&vect[i].second>=vect[j].first){
            j++;
        }i=j;
    }
    cout<<v[0];
    cout<<v[1];
} 