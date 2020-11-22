#include <bits/stdc++.h>


#define PI 3.14159
#define ull unsigned long long

int main(){
    using namespace std;

    int x,n,yes=0, idx;
    string str;
    vector<string> part;

    cin>>x>>n;
    for (int i=0; i<n; i++){
        yes=0;
        cin>>str;
        if(part.size()==x){
            continue;   
        }
        for(auto j:part){
            if (str==j){
                yes++;
                break;
            }
        }
        if(yes==0){
            part.push_back(str);
        }

        if(part.size()==x){
            idx=i;
            
        }
    }

    if(part.size()==x){
        cout<<idx+1<<endl;
    }else{
        cout<<"paradox avoided"<<endl;
    }

    


    

    return 0;
}   