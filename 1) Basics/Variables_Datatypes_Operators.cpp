#include<iostream>
using namespace std;

//(Comment)This is starting of code

int main(){

    //Output

    cout<<"Saiyam\nKumar"<<endl;

    //Variables

    int age = 25;
    cout<< age <<endl;
    cout<< sizeof(age) <<endl;
    char grade = 'A';
    cout<< grade <<endl;
    float PI = 3.14f;
    cout<< PI <<endl;
    bool value = true;
    cout<< value <<endl;
    double price = 100.50;
    cout<< price <<endl;

    //Type Casting
    
    char small = 'a';
    int number = small;
    cout << number <<endl;
    double oldprice = 100.90;
    int newprice = (int)oldprice;
    cout << newprice <<endl;

    //Input from user

    char name;
    cout<< "Enter the name : ";
    cin>> name;
    cout<<"Your name is : "<< name << endl; 

    //Operators

    //Arithematic operators
    int a = 10; int b = 5;
    int add = a+b;
    cout<< "The add is : "<< add << endl;
    cout<< "The diff is : "<< (a-b) << endl;
    cout<< "The prod is : "<< (a*b) << endl;
    cout<< "The div is : "<< (a/b) << endl;
    cout<< "The mod is : "<< (a%b) << endl;
    cout<<"div without decimal value : "<<(5/2)<<endl;
    cout<<"div with decimal value:"<<(5/double(2))<<endl;

    //Relational operators
    cout<<(3>4)<<endl;
    cout<<(3<4)<<endl;
    cout<<(3>=3)<<endl;
    cout<<(3<=4)<<endl;
    cout<<(3==3)<<endl;
    cout<<(3!=3)<<endl;

    //Logical Operators
    cout<<!(6<8)<<endl;
    cout<<((6<8)||(5<8))<<endl;
    cout<<((7<4)&&(6<8))<<endl;

    //Sum of 2 numbers
    int r; int t;
    cout<<"Enter the first number:";
    cin>>r;
    cout<<"Enter the second number:";
    cin>>t;
    int sum = r + t;
    cout<<"Sum of two numbers:"<<sum<<endl;

    //Urany operaters
    int s = 10;
    int m = ++s;
    cout<<m<<endl;
    cout<<s<<endl;

    int l = s++;
    cout<<l<<endl;
    cout<<s<<endl;

    int k = --s;
    cout<<k<<endl;
    cout<<s<<endl;

    int q = s--;
    cout<<q<<endl;
    cout<<s<<endl;

    return 0;

}
