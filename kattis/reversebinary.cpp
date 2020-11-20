#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    unsigned long long int n,rn;
    cin>>n;
    vector<char> bin2;
    string bin = bitset<32>(n).to_string();
    for(int i=0; i<bin.size(); i++){
        if(bin[i]=='1'){
            for(int j=i;j<bin.size();j++){
                bin2.push_back(bin[j]);
            }
            break;
        }
        
    }

    rn=bitset<32>(string(bin2.rbegin(), bin2.rend())).to_ullong();
    cout<<rn<<endl;


    return 0;
}