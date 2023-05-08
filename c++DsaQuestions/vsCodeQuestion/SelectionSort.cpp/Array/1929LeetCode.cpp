class Solution {
public:
    vector<int> getConcatenation(vector<int>& num) {

//simply in this we can push the same "num"value in the array....


int n=num.size();
      for(int i=0;i<n;i++){

num.push_back(num[i]);
      }

return num;


    } 
};