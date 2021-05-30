#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

bool check(vector<ll> arr) {
	bool pass = true;
	for(auto i = 1; i<arr.size()-1; i++) {
		if ((arr[i-1]+arr[i+1])/2 == arr[i]) {
			pass = false;
			break;
		}
	}
	if((arr[0]+arr[arr.size()-2])/2==arr[arr.size()-1]) pass = false;
	if((arr[1]+arr[arr.size()-1])/2==arr[0]) pass = false;
	return pass;
}

void solve(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		vector<ll> arr;
		for(int j =0; j<(n*2); j++) {
			ll in;
			cin>>in;
			arr.push_back(in);
		}
		sort(arr.begin(), arr.end());
		while (next_permutation(arr.begin(), arr.end())) {	
			if (check(arr)) break;		
		}

		for(int j =0; j<(n*2); j++) {
			cout<<arr[j]<<" ";
		}
		cout<<endl;
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