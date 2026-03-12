#include<iostream>
using namespace std;

// pass by reference using pointer
void changeA(int *ptr){
    *ptr = 20;
}

// pass by value
void ChangeA(int b){
    b = 20;
}

int main(){
    // basic pointer definitions
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << &ptr2 << endl;
    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << *(ptr2) << endl;

    // null pointer
    int *ptr3;
    int *ptr4 = NULL;
    cout << ptr3 << endl;
    cout << ptr4 << endl;

    // pass by reference using pointer
    int x = 10;
    changeA(&x);
    cout << x << endl;
    ChangeA(x);
    cout << x << endl;

    // pointer arithmetic
    int arr[] = {1,2,3,4};
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;

    return 0;
}
