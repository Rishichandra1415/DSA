class Solution {
public:

long long int square(int n){
// simply in this we can find number such that example:-


// 25= it is lie betweeen 0-25.. then we  can simply apply bs on it..
    int s=0;
    int e=n;
    long long  int mid=s+(e-s)/2;
    long long int ans=-1;
      while(s<=e){
   long long int ss=mid*mid; 

          if(ss==n){
              return mid;
          }
          if(ss<n){
       ans=mid;
     long long s=mid+1;
          }
          else{
              e=mid-1;
          }
              long long  int mid=s+(e-s)/2;

      }
      return ans;

}



    int mySqrt(int x) {
        
    return square(x);

    }
};