#include<iostream>
using namespace std;


int printArray( int arr[],int size){

for(int i=0;i<=size;i++)
{

cout<<"array"<<arr[i];
}
}
int main(){

int f[3]={1,2,3};
int size=15;
printArray(f,15);

}