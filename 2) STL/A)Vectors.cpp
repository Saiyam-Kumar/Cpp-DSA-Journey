#include<iostream>
#include<vector>
using namespace std;

// Function to find the single number
int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int val : nums) {
        ans ^= val;
    }
    return ans;
}

int main(){

    // -------- VECTOR SYNTAX --------
    vector<int> vec = {1,2,3,4,5};
    cout << vec[3] << endl;

    vector<int> vect(3,0);
    cout << vect[0] << endl;
    cout << vect[1] << endl;
    cout << vect[2] << endl;
    // cout << vect[3] << endl;  // invalid index (size = 3)

    vector<int> vectu = {2,3,4,5,6};
    for(int val : vectu){
        cout << val << endl;   
    }

    // -------- VECTOR FUNCTIONS --------
    vector<int> vec2 = {2,3,4,5,6,7};
    cout << "size = " << vec2.size() << endl;

    vec2.push_back(8);

    for(int val : vec2){
        cout << val << endl;
    }

    cout << "size after pushback = " << vec2.size() << endl;

    vector<int> vectu2 = {2,6,9,54,0};
    cout << "size = " << vectu2.size() << endl;

    vectu2.pop_back();

    for(int val : vectu2){
        cout << val << endl;
    }

    cout << "size after popback = " << vectu2.size() << endl;

    cout << vectu2.front() << endl;
    cout << vectu2.back() << endl;
    cout << vectu2.at(0) << endl;

    // -------- SINGLE NUMBER PROBLEM --------
    vector<int> nums = {4,1,2,1,2};
    int result = singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
