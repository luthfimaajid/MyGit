#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll a;
    cin>>a;

    if(a%2==0){
        cout<<a/2<<endl;
    }else{
        cout<<-(a+1)/2<<endl;
    }

    return 0;
}