class Solution {
public:


// simply in this all the solution are given in the question we can read a question properlyy...
    vector<int> buildArray(vector<int>& nums) {
vector<int>ans;// firstly we cann make a vector  who store ans....
  int a=nums.size();// then we can make a variable in which we can store the value of size...
  for (int i=0;i<a;i++){// now traverse the whole array...
ans.push_back(nums[nums[i]]);// n this we can simpy w ecan push back the value of num to the ans


  }
  // and then return answer.....
return ans;

    }
};