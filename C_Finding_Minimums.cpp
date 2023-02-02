#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin >> n >> k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int temp1=0;
    if(n % k == 0){
        int temp=n/k;
        for(int i=0;i<temp;i++){
            sort(v.begin()+temp1,(v.begin()+k));
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    return 0;
}