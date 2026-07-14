/*
Two sum Leetcode - 1
Time Complexity -> O(n)
Space Complexity -> O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Use unordered_map -> to store the number and its index
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            int second = target - nums[i];
            if(m.find(second)!=m.end()){
                return {i,m[second]};
            }
            m[nums[i]] = i;
        }
        return {-1,-1};
    }
};
