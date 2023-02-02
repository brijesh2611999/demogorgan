#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='A'){
            count++;
        }
    }
    int count1=s.length()-count;
    if(count1>count)
    cout << "Danik";
    else if(count1 == count)
    cout << "Friendship";
    else
    cout << "Anton";
    
    return 0;
}