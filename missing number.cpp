class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum2=nums.size()*(nums.size()+1)/2;
        return sum2-sum;
    }
};


//solution through binary search
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//             sort(nums.begin(),nums.end());


//     int start=0;
//     int end=nums.size()-1;
    
//     while(start<= end){
//         int mid= start +(end - start)/2;
        
//         if(nums[mid] == mid){  // since the array is sorted nums[mid] = mid if left part have all elements  so the missing number must be in right half

//             start = mid+1;     
//         }
// 		// else the missing number is in left side
//         else{
//             end = mid-1;
//         }
//        // mid= start +(end - start)/2;
//     }
//     return start;
        
//     }
// };