#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    int n, x, psoup=0, panc=0, fine=0;

    cin>>n;
    string rest[n];
    bool brest[n] = {false};
    
    
    for(int i=0; i<n; i++){
        
        psoup = 0;
        panc = 0;
        cin>>x;
        string menu[x];
        cin.ignore();
        getline(cin, rest[i]);
        
        
        for(int j=0; j<x; j++){
            
            
            getline(cin, menu[j]);
            if((menu[j].find("pea") != string::npos) && (menu[j].find("soup") != string::npos)) psoup++;
            if(menu[j].find("paa soup") != string::npos) psoup++;
            if(menu[j].find("pancakes") != string::npos) panc++;
        }

        if(psoup && panc > 0){
            brest[i]=true;
            fine++;
        }
    }

    if(fine==n){
        cout<<"Anywhere is fine I guess"<<endl;
    }else{
        for(int i=0; i<n; i++){
            if(brest[i]){
                cout<<rest[i]<<endl;
            }
        }
    }



}

int main(){
    ios_base::sync_with_stdio(0);
   
    solve();
    
    return 0;
}   





































