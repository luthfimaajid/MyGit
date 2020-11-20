#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    string s,tmp;
    vector<string> wrd;
    getline(cin, s);

    for(auto i: s){
        if(i==' '){
            wrd.push_back(tmp);
            tmp="";
        }else{
            tmp+=i;
        }
    }
    wrd.push_back(tmp);

    
    for(int i=0; i<wrd.size()-1; i++){
        for(int j=i+1;j<wrd.size();j++)
            if(wrd[i]==wrd[j]){
                
                cout<<"no"<<endl;
             
                return 0;
            }
        
    }
    cout<<"yes"<<endl;
    


    return 0;
}   