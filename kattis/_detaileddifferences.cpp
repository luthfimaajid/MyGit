#include <bits/stdc++.h>


#define PI 3.14159

int main(){
    using namespace std;
    int n;
    string x,y;
    char c;
    vector<char> chr;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        cin>>y;
        
        for(int j=0; j<x.size(); j++){
            if(x[j]==y[j]){
                cout<<'.';
            }else{
                cout<<'*';
            }
        }

        cout<<endl<<endl;

    }

    return 0;
}   