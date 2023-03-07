#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
typedef long long ll;

bool is_prime( ll x){
    for(int i = 2; i*i <=x; i++){
        if(x%i == 0) return false;
    }
    return true;
}
void solve(){
    ll ans = 0;
    for(int i = 2; i<=1e9; i++){
        if(is_prime(i)) cout<<i<<" ";
    }
    cout<<ans<<endl;
}

int main(){
    ll t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}