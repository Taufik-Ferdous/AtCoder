#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    string s; cin>>s;
    for(ll i=0; i<19; ++i){
    if(s[i]==',')cout<<' ';
    else cout<<s[i];
    }
    cout<<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}