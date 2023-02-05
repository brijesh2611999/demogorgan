/*
P is the pressure of the ideal gas.
V is the volume of the ideal gas.
n is the amount of ideal gas measured in terms of moles.
R is the universal gas constant.
T is the temperature*/
/*
Buoyant force can be defined as an upward force exerted on an object that is c
ompletely or partially submerged in liquid. The unit of the buoyant force is 
Newton. Buoyancy force depends upon two factors:

->Amount (Volume) of liquid displaced by the object
->The density of the object.

Archimedes’ law is mathematically written as:

Fb = ρ × g × V

Where,

Fb is the buoyant force.
ρ is the density the fluid.
V is the submerged volume.
g is the acceleration due to gravity.

Example 3: The weight of an object in the air is 108 N. The object is placed in a liquid. The increase in the volume of liquid is 1.8 m3. If the specific weight of the liquid is 10 N/m3, what is the weight of the object in the liquid?

Solution:

Object’s weight in liquid = object’s weight in air – buoyant force

Object’s weight in liquid = 108 N – buoyant force

F = ρ g V

The density of liquid is 1 kg/m3

F = ρgV = 1 × 10 × 1.8 = 18 kg m/s2 = 18N.

Object’s weight in fluid = 100 N – 18 N = 82N



 Write a C++ program with following inline function.
i. Verifying Ideal gas law (Chemistry)
ii. To compute buoyant force using archimedes principle
iii. Final displacement using newton’s first law of motion
iv. To compute a XOR b
*/

#include<bits/stdc++.h>
using namespace std;
inline bool chemestry(float p,float v,float n,float r,float t){
    return(p*v==n*r*t);
}
inline float buoyant_force(float p,float v,float g){
    return (p*v*g);
}
inline float displacement(float u,float v)
{
    return v-u;
}
inline int compute_xor(int a,int b){
    return a^b;
}
int main(){
    int choice;
    while(1){
        cout <<"  1. Verifying Ideal gas law (Chemistry) \n " <<
               " 2. To compute buoyant force using archimedes principle \n "<<
               " 3. Final displacement using newton’s first law of motion \n "<<
               " 4. To compute a XOR b \n"<<
               "  5. Exit\n"<<
               " Enter your choice :";
               cin >> choice ;
               switch(choice){

                case 1: {float p,v,n,r,t;
                        cout <<"Enter the details :\n";
                        cout<<"pressure of the ideal gas (p) :";
                        cin >> p;
                        cout << "volume of the ideal gas (v) :";
                        cin >> v;
                        cout << "amount of ideal gas measured in terms of moles (n) :";
                        cin >> n;
                        cout << "universal gas constant (r) :";
                        cin >> r;
                        cout << "temperature (t) :";
                        cin >> t;
                        
                        if(chemestry(p,v,n,r,t))
                        cout << "Yes,it is verified ideal gas law.\n\n";
                        else
                        cout << "No,it is not verified ideal gas law.\n\n";}
                        break;
                case 2: {float p,v,g;
                         cout <<"Enter the details :\n";
                        cout <<"ρ is the density the fluid :";
                        cin >> p;
                        cout <<"V is the submerged volume :";
                        cin >> v;
                        cout <<"g is the acceleration due to gravity :";
                        cin >> g;
                        cout<< buoyant_force(p,v,g)<<"\n";}
                        break;
                case 3: {float u,v;
                        cout <<"Enter the initial position :";
                        cin >> u;
                        cout <<"Enter the final position :";
                        cin >> v;
                        cout<<displacement(u,v)<<"\n\n";}
                        break;
                case 4: int a,b;
                        cout <<"Enter the first value :";
                        cin >>a;
                        cout <<"Enter the second value :";
                        cin >>b;
                        cout <<compute_xor(a,b)<<"\n\n";
                        break;
                case 5: exit(0); 
                default:
                cout <<"Invalid choice\n\n";

               }

    }
    return 0;
}