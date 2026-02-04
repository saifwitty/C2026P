#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
#define all(a) a.begin(),a.end()
#define print(a) for(auto i : a) cout << i << ' '
#define pb push_back
#define yes cout<<'Y'<<'e'<<'s'<<'\n';
#define no cout<<'N'<<'o'<<'\n';
#define tt int t;cin>>t; for(int tt=1;tt<=t;tt++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int lcm(int a,int b) {
    return (a * b) / (__gcd(a,b));
}
void saif(){
    int n,s,x;
    cin >>n>>s>>x;
    vector<int>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum==s){
        yes
        return;
    }
    else if(s<sum){
        no
        return;
        
    }
    else {
        ll dif=s-sum;
        if(dif%x){
            no
            return;
        }
        else{
            yes
            return;
        }
    }
   }

signed main(){
    fast_cin();
    tt saif();
  }