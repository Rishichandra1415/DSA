#include<iostream>
using namespace std;

void reverse(char Name[],int n){
    int s=0
    ;
    int e=n-1;
    while(s<e){
        swap(Name[s++],Name[e--]);
    }

}
int main(){

char Name[20];
cin>>Name;
cout<<"enter your name";
reverse(Name);

}