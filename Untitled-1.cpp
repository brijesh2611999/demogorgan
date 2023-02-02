//first unique character in string.
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<char,int>p1,pair<char,int>p2){
    return p1.second>p2.second;
}
int main()
{

map<char,int>m;
string s;
cin>>s;
vector<pair<char,int>>v;
for(int i=0;i<s.length();i++){
    m[s[i]]++;      
}

for(auto it : m){
      v.push_back(it);
    //cout<<v[i].first <<" "<<v[i].second<< endl;
}
// cout << endl;
int temp=0;
sort(v.begin(),v.end(),comp);
for(int j=0;j<v.size();j++)
{   temp=0;
    while(temp<v[j].second){
        cout<<v[j].first;
        temp++;
    }
}
 return 0;
}