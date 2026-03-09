//Functions
#include<iostream>
using namespace std;

void printhello(){
    cout<<"hello"<<endl;
}

int love(){
    cout<<"saiyam-stuti"<<endl;
    return 143;
}

int sum(int a, int b){
    int s = a + b;
    return s;
}

int minoftwo(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int sumofn(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int fun(int a,int b){
    a = a + 10;
    b = b + 5;
    return a + b;
}

int sumofdigits(int n){
    int sumdigit = 0;
    while(n>0){
        int lastdigit = n % 10;
        n = n / 10;
        sumdigit += lastdigit;
    }
    return sumdigit;
}

int main(){

    printhello();
    printhello();

    love();
    int val = love();
    cout<<"val="<<val<<endl;

    cout<<"sum="<<sum(5,10)<<endl;

    cout<<"minimum of two numbers = "<<minoftwo(5,9)<<endl;

    cout<<"sum of n numbers = "<<sumofn(5)<<endl;

    cout<<"factorial of n = "<<factorial(4)<<endl;

    int a = 5;
    int b = 3;

    cout<<fun(a,b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<"sum of digit="<<sumofdigits(56213)<<endl;

    return 0;
}
