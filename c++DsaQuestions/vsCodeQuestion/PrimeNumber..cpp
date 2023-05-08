#include<iostream>
using namespace std;

int isPrime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            return 0;

        }
  
    }
          return 1;
}
int main(){
 int n;
 cin>>n;
 if(isPrime(n)){
    cout<<"its a prime number";
 }
else{
    cout<<"its not a prime number";
}
}