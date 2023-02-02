#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
     cin>>s;
    
        for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u'||s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='y'){
            s.erase(s.begin()+i);
            i--;
        }
    }
    // for(int i=0;i<s.length();i++)
    // cout<<s[i];
     for(int i=0;i<s.length();i++){
        if(int(s[i])>=65 && int(s[i])<=90){
            s[i]=(int)s[i]+32;
        }
        cout<<"."<<s[i];
    }
    return 0;
}