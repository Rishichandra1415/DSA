#include<iostream>
using namespace std;

int findingMax( int num[],int n){
int  max=INT16_MIN;
for(int i=0; i<=n;i++){
    if(max < num[i]){
       max=num[i];
    }
}
return max; 

}
int findingMin( int num[],int n){
int  min=INT16_MAX;
for(int i=0; i<=n;i++){
    if(min > num[i]){
       min=num[i];
    }
}
return min; 

}


int main(){
int size;
cin>>size;
// taking inputt
int num[100];
for(int i=0; i<size;i++){

    cin>>num[i];
}
cout<<"irhsijj";
 cout<<findingMin(num,size);
cout<<findingMax(num,size);


}