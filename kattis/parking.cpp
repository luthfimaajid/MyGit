#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,o,x,max=0;
    vector<int> a;
    cin>>n;
    for(int i=0; i<n; i++){
        a.clear();
        max=0;
        cin>>o;
        for(int j=0; j<o; j++){
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        for(int j=1; j<a.size();  j++){
            max+=a[j]-a[j-1];
        }
        cout<<max*2<<endl;
    }

    return 0;
}   