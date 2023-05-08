#include <bits/stdc++.h> 

vector<int>reverse(vector<int>v){
	int s=0;
	int e=v.size()-1;
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;

}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// first part complete in this we can finf the thing ....
	int i=n-1;
	int j=m-1;
	int carry =0;
	vector<int>ans;
	while(i>=0&&j>=0){
		int value1=a[i];// yha pai hmsbbb vslue ko variaalbe mai store kiye  haii...
		int value2=b[j];
        int sum=value1+value2+carry;// yha pai apnn sum nikale haii....
       carry=sum/10;// yha pai carryy...
	   sum=sum%10;// yha pai apnnn jo sum karnee kai baad aaega usko add kregai without including carry..
	   ans.push_back(sum);//  then  we  can push the sum into ans....
	   j--;i--;// then increment  all....
	   }
//first case in which first array is greater then second
while(i>j){
//simple add krdoo.. sbbkoo
	int sum=a[i]+carry;
	carry=sum/10;
	sum=sum%10;
	ans.push_back(sum);
	i--;

}
//second array bara hai first wale saii toh...
while(j>i){
	int sum=b[j]+carry;
		carry=sum/10;
	sum=sum%10;
	ans.push_back(sum);
	j--;

}
//ismai carry bacha huua hai tbb kya kregaiii.. tbbb apnn simple carry ko add krdegaii..

while(carry!=0){
	int sum=carry;
	carry=sum/10;
	sum=sum%10;
	ans.push_back(sum);
}

return reverse(ans);


}