#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
         int n; 
         cin >> n;
         int arr[n];
         for ( int i=0; i< n; i++){
             cin >> arr[i] ;
         }
         if ( n == 2 && arr[0] == arr[1]){
             cout << "NO" << endl;
         }
         else {
             int sum =arr[0];
             for (int i=0; i<n-1; i++){
                 if( sum == arr[i+1]){
                     int temp = arr[i];
                     arr[i] = arr[i+1];
                     arr[i+1] = temp;
                     
                 }
                 sum += arr[i];
             }
             
             cout << "YES" << endl;
             for( auto it : arr){
                 cout<< it << " ";
             }
         }
    }
    return 0;
}