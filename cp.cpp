#include<bits/stdc++.h>
using namespace std;
//operator precidence
//associative
//  bool compare(int a,int b){
// return a>b;
// }

//bool compare()
int main(){

    map<char,int>mp;
   
    string s;
     cin >> s;
        
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;

    }
    int max=0;
    char ch;
    for(auto it:mp){
        if(max<it.second){
            max=it.second;
            ch=it.first;
        }
    }
    cout<<ch<<endl;
//frequency 
//   map<string,int>mp;
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)  
//     {
//         string s; cin >> s;
//         //mp[s]++;
//         //or
//         int freq=mp[s];
//         mp[s]=freq+1;
//         }
        // for(auto x:mp){
        //     cout<<x.first<< " " << x.second<<endl;
        // }
        // int flag=0;
        // for(int i=0;i<s.length();i++){
        //     for(auto it:mp){
        //          if(s[i]==it.first && it.second==1){
        //             cout<<s[i];
        //             flag=1;
        //             break;
        //          }
            
                
            
        //     }
        //     if(flag==1){
        //         break;
        //     }
        //     }
           
        }
        // pair<int,int>p;
    // vector<pair<int,int>
   
//    pair<string,int>p;
//    vector<pair<string,int>>vp;
//    string s;
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//    cin >> s;
//    int length=s.length();
//    vp.push_back({s,length});
//    }
//    for(auto &it:vp)
//    cout<<setw(15)<<it.first<<" "<<it.second<<endl;
   
//    pair<int,int>p;
// //    p.first=1;
// //    p.second=2;

//    vector<pair<int,int>>vp;
//    for(int i=1;i<=10;i++){
//     // int x,y;
//     //cin>>x>>y;
//    // vp.push_back(make_pair(x,y));
//     vp.push_back({1,i});

//    }

// //    for(pair<int,int>p:vp){
// //     cout<<p.first<<" "<<p.second<<endl;
// //    }
//    for(auto it:vp){
//    cout<<it.first<<" "<<it.second<<endl;
//     }// freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int n;
//     // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" ";
    // }

//     vector<int>b;
//     b.push_back(3);
//     b.push_back(1);
//     b.push_back(0);
//     b.push_back(16);
//     b.push_back(70);
//     sort(b.begin(),b.end(),compare);
// // for(int i=0;i<b.size();i++){
// //     cout<<b[i]<<" ";
// //}
//     for(auto &x:b){

//         cout<<x<<" ";
//     }
    // }
    // int a=1e9,b=1e9-1;
    // a=(a+b)-(b=a);
    // cout<<a<<endl;
    // cout<<b<<endl;
