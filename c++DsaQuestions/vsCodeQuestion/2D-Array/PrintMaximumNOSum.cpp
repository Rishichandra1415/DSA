
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printSum(int arr[3][3],int row, int col){
  
    for(int row=0;row<3;row++){
          int sum=0;
        for(int col=0;col<3;col++){
               sum=sum+arr[row][col]; 
        }
        cout<<endl;
        cout<<sum;
    }
cout<<endl;
}
//largest Row Sum....
int largestRow(int arr[][3],int row,int col){
    
    int maxi=INT_MIN;
    for(int row=0;row<3;row++){
        
        int sum=0;
        for(int col=0;col<3;col++){
            sum=sum+arr[row][col];
        }
        
        if(sum>maxi){
            
            maxi=sum;
        }
      
    }
          cout<<maxi;
    
    
}


int main()
{

int arr[3][3];
//taking input
for(int row=0;row<3;row++){
    
    for(int col=0;col<3;col++){
        cin>>arr[row][col];
    }
}

//printingg...
for(int row=0;row<3;row++){
    
    for(int col=0;col<3;col++){
        cout<<arr[row][col];
    }
}

printSum(arr,3,3);
largestRow(arr,3,3);
    return 0;
}
