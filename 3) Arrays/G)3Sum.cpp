/*
3sum - Leetcode - 15
Sort the array and Use two pointer on the j and k triplets 
For duplicate triplets use set and get the final triplets whose sum  = 0
TC -> O(n2 logn) and SC -> O(n2)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        vector<vector<int>> newans;
        for(int i=0; i<n; i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
            }
        }
        for(int i=0; i<ans.size(); i++){
            s.insert(ans[i]);
        }
        for(auto it:s){
            newans.push_back(it);
        }
        return newans;
    }
};
