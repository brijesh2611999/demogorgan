#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n==2){
        return 1;
    }
    else if(n>2){
        for(int i=2;i<=sqrt(n);i++){
            if( n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    if(prime(n)){
        cout << "prime" <<endl;
    }
    else
    {
        cout << "not prime" <<endl;
    }

}