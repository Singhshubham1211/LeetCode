//kadane algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefixSum=0;
        int maxSum=INT_MIN;
        for(auto it:nums){
            prefixSum+=it;
            maxSum=max(maxSum,prefixSum);
            if(prefixSum<0){
                prefixSum=0;
            }
        }
        return maxSum;
        
    }
};