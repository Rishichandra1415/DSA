
#include <iostream>

using namespace std;


void printSum(int arr[3][3],int row, int col){
  //simple yaha pai traverse kiya  aur pirr col mai jakai sum krrdiya simpe...
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

    return 0;
}
