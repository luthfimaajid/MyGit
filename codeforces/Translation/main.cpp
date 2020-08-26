#include<bits/stdc++.h>

using namespace std;

int main(){
    string abc, cba;
    cin>>abc>>cba;

    for(int i = 0;i < abc.size();i++){
        if(abc[abc.size()-1-i]!=cba[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}