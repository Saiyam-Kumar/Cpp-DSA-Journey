/* 
Maximum Subarray Sum -> Leetcode 53
Brute Approach-> TC = O(n^2)
Firstly i done this with brute force used to pointers but this approach gives TLE because of larger sums
Optimal Approach-> TC = O(n)
Kadane's algorithm first i calculated the running sum of array and then store maximum sum and then 
Reset curr sum -> 0 because negative sum added to any number will decrease the sum more and never be max subarray sum.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
                currSum = currSum + nums[i]; //Running Sum
                maxSum = max(currSum,maxSum); //Storing maxSum
                if(currSum<0){ //reset currSum to 0-> negative prefix never be maximum subarray sum
                    currSum = 0;
                }
        }
        return maxSum;
    }
};
