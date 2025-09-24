/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;

int main(){
    float a,b,ans;

    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }
        ans = a/b;
        cout<<"Division is: "<<ans;
    }
    catch(float){
        cout<<"Denominator cannot be zero.";
}
}

/* Output
Enter two numbers:
5
0
Denominator cannot be zero. */
