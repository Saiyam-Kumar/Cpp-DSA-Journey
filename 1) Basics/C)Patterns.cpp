//Patterns
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter number";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int m;
    cout<<"enter number";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    int l;
    
    cout<<"enter number";
    cin>>n;
    for(int i = 0; i<n; i++){
        char ch = 'a';
        for(int j = 0; j<n; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    int z, num = 1;
    cout<<"enter number";
    cin>>z;
    for(int i=1; i<=z; i++){
        for(int j=1; j<=z; j++){
            cout<<num;
               num ++;                                                      
        }
        cout<<endl;
    }
    cout<<num<<endl;


    int r;
    char ch = 'A';
    cout<<"enter number";
    cin>>r;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            cout<<ch;
               ch ++;                                                      
        }
        cout<<endl;
    }
    
    int t;
    cout<<"enter number";
    cin>>t;
    for(int i=0; i<t; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"enter number";
    cin>>x;
    for(int i=0; i<x; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1<<"";
        }
        cout<<endl;
    }
    char p;
    int a,e;
    cout<<"enter number";
    cin>>p;
    for(char i=a; i<e; i++){
        for(char j=a; j<i+1; j++){
            char ch = 'A';
            cout<<ch<<"";
        }
        
        cout<<endl;
    }
    int k;
    cout<<"enter the number";
    cin>>k;
    for(int i=0; i<k; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<< "";

        }
        cout<<endl;
    }
    int b;
    cout<<"enter the number";
    cin>>b;
    for(int i=0; i<b; i++){
        for (int j=i+1; j>0; j-- ){
            cout<<j<<"";
        }
        cout<<endl;
    }
     
    return 0;
}

  
