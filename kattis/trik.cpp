#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int pos=1;
    char c;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        switch(s[i]){
            case('A') : switch(pos){
                            case(1): pos=2;break;
                            case(2): pos=1;break;
            };break;
            case('B') : switch(pos){
                            case(2): pos=3;break;
                            case(3): pos=2;break;
            };break;
            case('C') : switch(pos){
                            case(3): pos=1;break;
                            case(1): pos=3;break;
            };break;
        }
    }

    cout<<pos<<endl;


    return 0;
}