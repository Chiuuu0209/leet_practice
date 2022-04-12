class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        else if(nums.size()==1){
            return 1;
        }
        int idx = 0;
        for(int i=1;i<=nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[++idx] = nums[i];
            }
        }
        return idx;
    }
};