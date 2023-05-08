#include<iostream>
using namespace std;

bool isPresence(int arr[3][4],int target,int n,int m){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
    
}
int main(){
  
  int arr[3][4];
    
    //taking input..

    for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
}

//printing ...

    for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}


cout<<"enter your number";
cout<<endl;

int target;
cin>>target;
if(isPresence(arr,target,3,4)){
cout<<"element is found";
}
else{
    cout<<"element is not found";
}


}





