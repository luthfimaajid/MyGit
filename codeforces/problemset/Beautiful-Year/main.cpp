#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;

    int p,q,r,s;

    cin>>a;
    while(1){
        a++;
        p=(a/1000);
        q=(a/100)%10;
        r=(a/10)%10;
        s=a%10;

        if ((p != q) && (p != r) && (p != s) && (q != r) && (q != s) && (r != s)){
            cout<<a<<endl;
            break;
        }
        
    }

    return 0;
}