//  Define a structure named “KYC” that contains following data members
// a. name, date of birth, PAN No., Adhaar No., Address, Annual Income, saving
// under tax scheme
// b. Define the following functions to perform the mentioned tasks.
// i. input_data() : to input the data for KYC details. 
// ii. output_data(): to output the data of a KYC details.
// iii. computeIncomeTax(): The rule of income tax caluculation is as
// follows.
// Upto 5 lakhs – No tax
// Between 5 – 10 lakhs – 10% on (Total income – saving under
// tax scheme ( upto max. of 1.5 lakhs) )
// above 10 lakhs 20% on (Total income – saving under tax
// scheme ( upto max. of 1.5 lakhs) )
// c. Define an array of structure for 7 KYC to perform the above tasks.
#include<bits/stdc++.h>
using namespace std;
struct dob{
        int date;
        string month;
        int year;
    };

struct kyc{
    struct dob d1;
    char name[20];
    string pan_no;
    char adhaar[12];
    string address;
    double annual_income;
    double saving_under_tax_scheme;
    void input_data(){
    cin>>d1.date>>d1.month>>d1.year;
    getline(cin,name);
    cin>>pan_no;
    getline(cin,adhaar);
    getline(cin,address);
    cin>>annual_income;
    cin>>saving_under_tax_scheme;

    }
    void output_data(){
        cout<<"Date of birth :"<<d1.date<<d1.month<<d1.year<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"PAN no :"<<pan_no<<endl;
        cout<<"Adhaar :"<<adhaar<<endl;
        cout<<"Address :"<<address<<endl;
        cout<<"Annual income :"<<annual_income<<endl;
        cout<<"Saving under tax scheme :"<<saving_under_tax_scheme<<endl;
        
    }
};
int main(){
    
    struct kyc user1;
    
    user1.input_data();
    user1.output_data();

    
    return 0;
}