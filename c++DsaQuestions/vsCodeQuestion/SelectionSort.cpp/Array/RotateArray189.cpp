class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);//ek temp naam ka blank array banao..

        for(int i=0;i<n;i++){//traverse kroo...
            temp[(i+k)%n]=nums[i];//ismai mode krrdo aaagai aajaega number

        }
        nums=temp;// temp kai equal krrdo nums kai...
    }
};