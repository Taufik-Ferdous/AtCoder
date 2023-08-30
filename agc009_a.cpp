#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n; cin>>n;
    vector<ll> v1(n);
    vector<ll> v2(n);

    for(ll i=0; i<n; ++i){
        ll a, b; cin>>a >>b;
        v1[i]=a;
        v2[i]=b;
    }

    ll ans=0;
    for(ll i=n-1; i>=0; --i){
        v1[i]+=ans;
        if(v1[i]%v2[i]) ans+=(v2[i]-(v1[i]%v2[i]));
    }
    cout<<ans <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}