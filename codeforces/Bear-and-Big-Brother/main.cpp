#include<iostream>
using namespace std;

int main(){
    int a,b,c=0;

    cin>>a>>b;

    do
    {
        c++;
        a=a*3;
        b=b*2;
    } while (a<=b);
    

    cout<<c<<endl;

    return 0;
}