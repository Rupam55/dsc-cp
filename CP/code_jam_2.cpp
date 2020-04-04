#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    while (t--)
    {
        string s,s1;
        cin>>s;
        int count=0,temp=0;
        for (int i = 0; i < s.length(); i++){
            for(int j=0;j<s[i]-48-count;j++){
                s1.append("(");
                temp++;
            }count+=temp;temp=0;
            s1+=s[i];
            while (s[i] >=s[i + 1] && i < s.length())
            {
                if (i == s.length()-1){
                    for (int j = 0; j < (s[i] - 48) - 0; j++){
                        s1.append(")");
                        temp++;
                    }
                    count -= temp;
                    temp = 0;
                }
                else{
                    for (int j = 0; j < (s[i] - 48) - (s[i + 1] - 48); j++){
                        s1.append(")");
                        temp++;
                    }
                    count -= temp;
                    temp = 0;
                }
                i++;
                s1+=s[i];
            }
        }
        
        
        cout << "Case #" << t1 - t << ": " <<s1<<"\n";
    }
}