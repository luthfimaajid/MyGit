#include <bits/stdc++.h>


#define PI 3.14159
#define ull unsigned long long

int main(){
    using namespace std;

    int n, x,y;
    set<int> day;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        for(int j=x; j<=y; j++){
            day.insert(j);
        }

    }
    cout<<day.size()<<endl;
    


    

    return 0;
}   