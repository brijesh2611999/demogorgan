/* Write a program in C++ to define an overloaded functions “plusoverloaded” that 
returns result depending on the type of inputs
i. if two floats are passed, then addition operation to be performed on inputs.
ii. if two strings are passed, then concatenation of two strings is performed.
iii. if an integer array, its size and an integer is passed then the given integer is 
added to all the elements of the array.
iv. If two integer arrays are passed, the both the arrays are merged by eliminating 
duplicate entries
*/

#include<bits/stdc++.h>
using namespace std;
float plusoverloaded(float a,float b){
    return a+b;
}
string plusoverloaded(string s1,string s2){
    return s1+s2;
}
void plusoverloaded(int arr[],int size,int integer){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+integer;
    }
    for(int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }
}


void plusoverloaded(int* arr,int size_arr,int* brr,int size_brr){
    int crr[size_arr+size_brr],flag=1,k=0;
    for(int i=0;i<size_arr;i++){
        flag=1;
            for(int j=0;j<size_brr;j++){
                if(*(arr+i)==*(brr+j)){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                crr[k]=*(arr+i);
                k++;
            }
    }
    for(int i=0;i<size_brr;i++){
        flag=1;
            for(int j=0;j<size_arr;j++){
                if(*(arr+i)==*(brr+j)){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                crr[k]=*(brr+i);
                k++;
            }
    }
    
    for(int i=0;i<k;i++){
        cout<<crr[i]<<" ";
    }
}
int main(){
        float a=2.2,b=4.2;
        string s1="Hello ";  string s2="Dustin";
        int arr[5]={1,2,3,4,5},brr[5]={5,2,8,6,1},integer=5;
        cout << plusoverloaded(a,b) <<"\n";
        cout << plusoverloaded(s1,s2) <<"\n";
        plusoverloaded(arr,5,integer);
        cout <<"\n";
        plusoverloaded(arr,5,brr,5);

    return 0;
}

/*

output:
6.4
Hello Dustin
6 7 8 9 10 
7 9 10 2 6 1

*/