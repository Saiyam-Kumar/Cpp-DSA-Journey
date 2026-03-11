#include<iostream>
using namespace std;

// decimal to binary
void decimalToBinary(){
    int ans=0;
    int pow=1;
    int n,rem;

    cout<<"Enter the decimal number : ";
    cin>>n;

    while(n>0){
        rem = n%2;
        n = n/2;
        rem = rem*pow;
        ans = ans + rem;
        pow = pow*10;
    }

    cout<<"The binary number formed is : "<<ans<<endl;
}

// binary to decimal
void binaryToDecimal(){
    int ans=0;
    int lastdigit,pow=1,n;

    cout<<"Enter the binary number : ";
    cin>>n;

    while(n>0){
        lastdigit = n%10;
        n = n/10;
        lastdigit = lastdigit*pow;
        ans = ans + lastdigit;
        pow = pow*2;
    }

    cout<<"The decimal number will be : "<<ans<<endl;
}

int main(){

    decimalToBinary();

    cout<<endl;

    binaryToDecimal();

    return 0;
}
