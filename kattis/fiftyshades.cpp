#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n,max=0;
    int found;
    string str, pink="pink", rose="rose";


    cin>>n;
    for(int i=0; i<n; i++){
      
        cin>>str;
        
        for(int j=0; j<str.size(); j++){
            str[j]=tolower(str[j]);
        }


        found= str.find(pink);
        if(found!=string::npos){
            max++;
            continue;
        }

        found= str.find(rose);
        if(found!=string::npos){
            max++;
            continue;
        }

    }

    if(max==0){
        cout<<"I must watch Star Wars with my daughter"<<endl;
    }else{
        cout<<max<<endl;
    }
    


    return 0;
}   