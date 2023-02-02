#include<bits/stdc++.h>
using namespace std;
int main(){

char ch;
cin >> ch;
if(ch>='a' && ch<='z')
cout << "lower case letter \n";
else if(ch>='A' && ch<='Z')
cout << "upper case letter \n";
else
cout << "numeric value \n" ;
    return 0;
}