class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i=0;//apnn phelii hi mannlegai i=0 hai.. pirr isko comapre krwaegaii sbbsaii...
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};