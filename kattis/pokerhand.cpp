#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int max=0, maxtmp=0;
    vector<char> r;
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i+=3){
       r.push_back(s[i]); 
    }
    sort(r.begin(),r.end());

    for(int i=0; i<r.size()-1;i++){  
        maxtmp=0;

        for(int j=i+1; j<r.size();j++){
            if(r[i]==r[j]){
                maxtmp++;   
                //r[j]='0';
            }
        }
        maxtmp++;
        if(maxtmp>max){
            max=maxtmp;
        }
        //r[i]='0';
        
    }
    cout<<max<<endl;
    return 0;
}   