#include<bits/stdc++.h>

using namespace std;

int main(){
    string abc;
    string xyz;
    string a;
    int count = 0;
    cout<<xyz.length()<<endl;
    getline(cin, abc);

    for(int i = 0; i < abc.length(); i++){
        if((abc[i]!='{') && (abc[i]!='}') && (abc[i]!=',') && (abc[i]!='{') && (abc[i]!=' ')){
            if(xyz.length()==0){
                xyz+=abc[i];
            }else{
                for(int j = 0; j < xyz.length(); j++){
                    cout<<xyz[j]<<endl;
                    for(int k = j+1; k < xyz.length(); k++){
                        
                        count++;
                    }

                }
            }     
        }
    }

    cout<<count<<endl;

    return 0;
}