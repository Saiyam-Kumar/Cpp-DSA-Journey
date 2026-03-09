//Conditional Statement and Loops
#include<iostream>
using namespace std;
int main(){

    //if else 
    int n = -3;
    if(n>=0){
        cout<<"n is positive"<<endl;
    }else{
        cout<<"n is negative"<<endl;
    }
    int age;
    cout<<"Enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"You can vote\n";
    }else{
        cout<<"You can't vote\n";
    }
    int number;
    cout<<"Enter the number:";
    cin>>number;

    if(number%2==0){
        cout<<"Number is even\n";

    }else{
        cout<<"Number is odd\n";
    }

    //if elseif else
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A\n";
    }else if(marks>=80 && marks<90){
        cout<<"Grade B\n";

    }else{
        cout<<"Grade C\n";
    }
    char ch;
    cout<<"enter your letter:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase\n";
    }else{
        cout<<"uppercase\n";
    }

    //ternary operator
    int num = 45;
    cout<<(n>=0? "positive":"negative")<<endl;

    //loops
    //while loop
    int i = 1;
    while(i<=5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    
    //for loop
    int m = 5;
    for(int i = 1; i<=m; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    int t = 5;
    int sum = 0;
    for(int i = 0; i<=t; i++){
        sum = sum + i;
    }
cout<<"sum ="<<sum<<endl;

 int r = 10;
 int add = 0;
 for(int i = 1; i<=r; i++){
    if(i%2!=0){
    add = add + i;
    }
 }
    cout<<"add="<<add<<endl;

    //do while loop
    int b = 10;
    int e = 1;
    do{
    cout<<e<<""<<endl;
    e++;
    }while(e<=b);

    
    return 0;
}
