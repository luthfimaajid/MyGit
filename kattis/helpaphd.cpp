#include <bits/stdc++.h>


#define PI 3.14159
#define ull unsigned long long

int main(){
    using namespace std;

    int n, x, y;
    string str;
    string buffer, buffer2;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str;
        x=0;
        buffer = "";
        buffer2 = "";
        if(str=="P=NP"){
            cout<<"skipped"<<endl;
        }else{
            for(auto j:str){
                if(j!='+'){
                    buffer+=j;
                }else{
                    x+=stoi(buffer);
                    buffer="";
                }
            }
            x+=stoi(buffer);
            cout<<x<<endl;
        }
        
    }
    
    


    

    return 0;
}   