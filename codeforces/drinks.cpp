#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    float c=0;
    cin>>a;
    for(int i = 0; i< a; i++){
        cin>>b;
        c+=b;
    }

    cout<<c/a<<endl;

    return 0;
}