/*
  Using Moore's Algorithm TC = O(n) and SC = O(1)
  Every element cancels with another except majority element
  Remaining element will be majority elenent 
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans = 0,freq = 0; 
        for(int i=0; i<n; i++){
            if(freq==0){
                ans = nums[i];
            }
            if(nums[i]==ans){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};
