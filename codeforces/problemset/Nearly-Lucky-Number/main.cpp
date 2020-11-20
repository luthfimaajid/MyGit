#include<bits/stdc++.h>

using namespace std;

int main(){
    int count=0;
    string a;
    cin>>a;

    for(int i = 0; i<a.size();i++){
        if((a[i]=='4') || (a[i]=='7')){
            count++;
        }
    }

    if((count==4) || (count==7)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}