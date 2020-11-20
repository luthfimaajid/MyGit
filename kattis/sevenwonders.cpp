#include <bits/stdc++.h>


int main(){
    using namespace std;
    int t=0,c=0,g=0,set=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s.substr(i,1)=="T"){
            t++;
        }else if(s.substr(i,1)=="C"){
            c++;
        }else{
            g++;
        }
    }

    

    if((t>0)&&(g>0)&&(c>0)){
        if((t<=c)&&(t<=g)){
            cout<<t*t+g*g+c*c+7*t<<endl;  
        }else if((c<=t)&&(c<=g)){
            cout<<t*t+g*g+c*c+7*c<<endl;  
        }else if((g<=t)&&(g<=c)){
            cout<<t*t+g*g+c*c+7*g<<endl;  
        }else{
            cout<<t*t+g*g+c*c+7<<endl;  
        }
        
    }else{      
        cout<<t*t+g*g+c*c<<endl;
    }

    return 0;
}