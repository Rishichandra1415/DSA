#include<iostream>
using namespace std;

int factorial(int n){
int fact=1;
for (int i=1;i<=n;i++){
    fact=fact*i;
}
return fact;

}
int nCr(int n,int r){

int numerator=factorial(n);
 int denom=factorial(n)*factorial(n-r);
 return numerator/denom;

}

int main(){
int n,r;
cin>>n,r;
cout<<nCr(n,r);

}