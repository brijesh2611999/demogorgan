#include<bits/stdc++.h>
using namespace std;
bool com(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    else
    return p1.second<p2.second;
}
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    vector<pair<int,int>>v;
    int a[n];
    for(int i=0;i<n;i++){


        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(auto it:m){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),com);
   
   for(auto it:v){
    cout<<it.first<<" "<<it.second<<endl;
   }

    return 0;
}