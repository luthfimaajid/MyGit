#include<iostream>
using namespace std;

int main(){
    int a,count=0;
    cin>>a;

    count+=a/100;
    a=a%100;
    count+=a/20;
    a=a%20;
    count+=a/10;
    a=a%10;
    count+=a/5;
    a=a%5;
    count+=a/1;
    a=a%1;
    
    cout<<count;

    return 0;
}