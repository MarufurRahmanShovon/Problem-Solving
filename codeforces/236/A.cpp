#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    cin>>s;
    int l=s.length();
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }

    if(cnt%2==0){
        cout<<"CHAT WITH HER!";

    }
    else cout<<"IGNORE HIM!";



}
