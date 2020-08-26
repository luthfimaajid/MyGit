#include<iostream>

using namespace std;

int main(){
    int a,b,hasil=0;

    cin>>a;

    if(a%5==0){
        b=a/5;
        hasil=b;
    }else{
        b=a%5;hasil=a/5;
        if(b%4==0){
            hasil+=b/4;
        }
        else{
            a=b%4;hasil+=b/4;
            if(a%3==0){
                hasil+=a/3;
            }
            else{
                b=a%3;hasil+=a/3;
                if(b%2==0){
                    hasil+=b/2;
                }
                else{
                    hasil+=b/1;
                }
            }
        }
    }

    cout<<hasil<<endl;

    return 0;
}