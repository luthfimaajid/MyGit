#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    string s;
    string c;
    vector<string> kmp;
    cin>>s;
    c=s.substr(0,1);
    kmp.push_back(c);
    for(int i=0; i<s.size(); i++){
        if(s.substr(i,1)=="-"){
            c=s.substr(i+1,1);
            kmp.push_back(c);
        }
    }
    for(int i=0; i<kmp.size();i++){
        cout<<kmp[i];
    }
    cout<<endl;


    return 0;
}