/*The array is already sorted so just sum the two numbers whose sum == target 
Use two pointer approach and one points on i=0 and other on last index and check if sum>target -> j--
sum<target i++ 
TC -> O(n) and SC -> O(1) */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;

        while(i<j){
            if(target==numbers[i]+numbers[j]){
                return {i+1,j+1};
            }else if(numbers[i]+numbers[j]<target){
                i++;
            }else{
                j--;
            }
        }
        return {};
    }
};
