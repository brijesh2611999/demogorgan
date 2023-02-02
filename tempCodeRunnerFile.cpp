#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k;
    cin >> n >> k;
    map < int,int > m;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x;
        y = m[x]++;
        m.insert({x,y});
    }
    for(auto it:m){
        if(it.second==k)
        cout<<it.first<<" ";
    }

    
        return 0;
}