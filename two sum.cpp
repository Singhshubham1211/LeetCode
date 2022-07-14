class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        while(s<e){
            int sum=v[s].first+v[e].first;
            if(sum==target){
                return {v[s].second,v[e].second};
            }
            else if(sum<target){
                s++;
            }
            else{
                e--;
            }
            
        }
        return {-1,-1};
    }
};