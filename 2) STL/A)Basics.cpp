#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    //Forward Vector Iterator
    cout<<"Vector Forward:"<<endl;
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator itr;
    for(itr = vec.begin(); itr!=vec.end(); itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl<<endl;


    //Reverse Vector
    cout<<"Vector Reverse:"<<endl;
    for(auto itr = vec.rbegin(); itr!= vec.rend(); itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl<<endl;


    //List
    cout<<"List:"<<endl;
    list<int> l;
    l.push_back(4);
    l.push_back(2);
    l.push_front(1);
    l.push_front(2);

    for(int val : l){
        cout<< val << " ";
    }
    cout<<endl<<endl;


    //Deque
    cout<<"Deque:"<<endl;
    deque<int> d = {1,2,3,4,5};
    for(int val : d){
        cout<< val <<" ";
    }
    cout<<endl;
    cout<<"Element at index 2: "<< d[2] << endl<<endl;


    //Pair
    cout<<"Pair:"<<endl;
    pair<int,pair<char,int>> p ={1,{'a',5}};
    cout<< p.first <<endl;
    cout<< p.second.first <<endl;
    cout<< p.second.second <<endl<<endl;


    //Stack
    cout<<"Stack:"<<endl;
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"Top element: "<<s.top()<<endl<<endl;


    //Queue
    cout<<"Queue:"<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<endl;


    //Priority Queue
    cout<<"Priority Queue:"<<endl;
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(1);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl<<endl;


    //Map
    cout<<"Map:"<<endl;
    map<string , int> m;
    m["tv"]=100;
    m["laptops"]=100;
    m["headphones"]=100;
    m["tablets"]=100;
    m["watches"]=100;

    for(auto p : m){
        cout<< p.first << " " << p.second <<endl;
    }
    cout<<endl;


    //Set
    cout<<"Set:"<<endl;
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);

    for(auto val : st){
        cout << val << " ";
    }
    cout<<endl<<endl;


    //Sort Array
    cout<<"Sorting Array:"<<endl;
    int arr[5]={3,5,1,8,2};
    sort(arr,arr+5);

    for(int val : arr){
        cout << val << " ";
    }
    cout<<endl;

}
