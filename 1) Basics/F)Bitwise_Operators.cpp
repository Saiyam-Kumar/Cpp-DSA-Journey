#include<iostream>
using namespace std;

//global variable example
int x = 4;

int main(){

    int a = 5;
    int b = 3;

    //bitwise operators
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a>>b)<<endl;
    cout<<(a<<b)<<endl;

    //operator precedence
    cout<<(5-2*6)<<endl;
    cout<<((5-2)*6)<<endl;
    cout<<(4*5%2)<<endl;

    cout<<endl;

    //global variable access
    cout<<"global x = "<<x<<endl;

    cout<<endl;

    //size of data types
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long int)<<endl;

    return 0;
}
