#include<iostream>
using namespace std;

int FirstOcc(int arr[],int n,int k){
 int s=0;
 int e=n-1;
 int mid=s+(e-s)/2;
  int ans=-1;
 while(s<=e){

    if(arr[mid]==k){
      ans=mid;
      e=mid-1;
    }
    else if(k>arr[mid]){
        s=mid+1;

    }
    else if(k<arr[mid]){
     e=mid-1;
    }
    mid=s+(e-s)/2;
 }
 return ans;

}
int lastOcc(int arr[],int n,int k){
 int s=0;
 int e=n-1;
 int mid=s+(e-s)/2;
  int ans=-1;
 while(s<=e){

    if(arr[mid]==k){
      ans=mid;
      s=mid+1;
    }
    else if(k>arr[mid]){
        s=mid+1;

    }
    else if(k<arr[mid]){
     e=mid-1;
    }
    mid=s+(e-s)/2;
 }
 return ans;

}
int main(){

int even[5]={1,2,3,3,5};

int index=FirstOcc(even,5,3);
cout<<index;
int ind=lastOcc(even,5,3);
cout<<ind;

int totaln =(ind-index)+1;
cout<<totaln;
}