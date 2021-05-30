#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

int allequals(vector<int> arr) {
    // int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=1; i<arr.size(); i++) {
        if(arr[0] != arr[i]) {
            return 0;
        }
    }

    return 1;
}

int remove(vector<int> arr){
    if (allequals(arr)){
        return 0;
    }

    // int n = sizeof(arr) / sizeof(arr[0]);

    int avg = 0;

    for(int i = 0; i<arr.size(); i++) {
        avg += arr[i];
    }

    avg /= arr.size();;

    int count = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] > avg) {
            count ++;
            arr.erase(arr.begin() + i);
        }
    }

    return count + remove(arr);
}


void solve(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        int in;
        vector<int> arr;
        int avg = 0;
        for(int j=0; j<n; j++){
            cin>>in;
            arr.push_back(in);
            // avg += arr[j];
        }

        cout<<remove(arr)<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    int n=1; 
    //cin>>n;

    for(auto i=0; i<n; i++){
        solve();
    }

    return 0;
}   