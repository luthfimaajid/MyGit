#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int x;
    
    set<int> b;
    for(int i=0; i<10; i++){
        cin>>x;
        b.insert(x%42);
    }
    cout<<b.size()<<endl;
    


    return 0;
}   