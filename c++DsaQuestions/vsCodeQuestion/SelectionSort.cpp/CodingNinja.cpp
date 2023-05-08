#include <bits/stdc++.h> 



// first we think that yha doo loop chlegaaa 1st jo ki traverse krega puraa,2nd loop usmai sai minimum number nikalegaii

void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0; i<n-1;i++){// 1st loop.... traverse all
int minIndex=i;// in this we can inilize the minIndex to "i" because we  assume minimum number are present in the the first index..
       for(int j=i+1;j<n;j++){// second loop traverse  through the next index because we can already assume that 1st index has minimum value
        if(arr[j]<arr[minIndex]){// now in this we can check that agrr minIndex is greater than "j" than min index ko "j" kai equL  krrdo aur swap krrdo
            minIndex=j;
        }
         
       }
       swap(arr[minIndex],arr[i]);
   }
}