#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n;
    string txt, smn;
    //char c;
    //vector<char> txt;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        
        getline(cin, txt);

        for(int j=0; j<txt.size(); j++){
            if(txt.substr(j,10)=="Simon says"){
                cout<<txt.substr(11, txt.size())<<endl;
            }
        }
        
    }   


    return 0;
}