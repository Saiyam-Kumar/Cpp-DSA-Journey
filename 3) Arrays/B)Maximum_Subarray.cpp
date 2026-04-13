/*
    Maximum Subarray Sum -> Leetcode 53
    Optimal Approach-> TC = O(n)
    Kadane's algorithm first i calculated the running sum of array and then store maximum sum and then 
    Reset curr sum -> 0 because negative sum added to any number will decrease the sum more and never be max subarray sum.
    Also True if all elements in array is negative because it already stores the maxSum
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
                currSum = currSum + nums[i]; //Running Sum
                maxSum = max(currSum,maxSum); //Storing maxSum
                if(currSum<0){ //reset currSum to 0-> negative prefix never be maximum subarray sum
                    currSum = 0;
                }
        }
        return maxSum;
    }
};
