/*
Write a program in C++ to define a structure ‘product’ with data members :
productid and rating (in range 1 to 5). Input productid and rating for ‘n’ number of
products. Write a function to return the number of TOP rated, AVERAGE rated, and
LOW rated products using reference arguments, where criteria for each category is
given as follows:
i. TOP rated : rating >= 4
ii. AVERAGE rated : 3 <= rating < 4
iii. LOW rated : below 3
*/
#include<bits/stdc++.h>
using namespace std;
struct product{
    string productid;
    int rating;
   
};
 void display(struct product* p,int n){
    cout<<endl;
    cout << "TOP RATED :\n\n";
        for(int i=0;i<n;i++){
            if((p+i)->rating>=4){
                cout<<"product id :"<<(p+i)->productid<<endl;
            }
        }
    cout << "AVERAGE RATED :\n\n";
        for(int i=0;i<n;i++){
            if((p+i)->rating>=3 && (p+i)->rating<4){
                cout<<"product id :"<<(p+i)->productid<<endl;
            }
        }
    cout << "LOW RATED :\n\n";
        for(int i=0;i<n;i++){
            if((p+i)->rating<3){
                cout<<"product id :"<<(p+i)->productid<<endl;
            }
        }
     

    }

 product input(){
     struct product sample;
    cout<<"Enter product id,rating :";
    cin >> sample.productid;
    cin >> sample.rating;
    while(sample.rating<=0 || sample.rating>5){
        cout<<"Enter product rating again :";
        cin >> sample.rating;
    }
    return sample;
}


int main(){
    int n,choice;
    cout<<"Enter the number of product :";
    cin >> n;
    product p1[n];
    for(int i=0;i<n;i++){
        p1[i]=input();
    }
       display(p1,n);
    return 0;
}