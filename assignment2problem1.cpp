/*
1) Write a function in C++ to print the following pattern by taking number of lines, and
difference as parameters with default arguments.
no. of lines =5, difference =1
1
2 3
4 5 6
7 8 9 1
2 3 4 5 6
no. of lines =4, difference =2
1
3 5
7 9 1
3 5 7 9
i. The default value of number of lines is 5
ii. The default value of difference is 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int lines,difference,count=1;
    cin >> lines >> difference;
    for(int i=0;i<lines;i++){

        for(int j=0;j<=i;j++){
            if(count>9)
            count=1;
            
            cout << count << " ";
            count=count+difference;
        }
        cout << endl;
    }
    return 0;
}