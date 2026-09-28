class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int i=0;
        int j=n-1;
        int max =INT_MIN;

        while(i<j){
            if(nums[i]+nums[j] > max) max = nums[i]+nums[j];
            i++;
            j--;
        }
        
        return max;
    }
};