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
    int n;
    cin>>n;
    vector<int>v(n),vv(n);
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        vp.push_back({v[i],i});
    }

    ll nn=n;
    ll pos=-1;
    for(int i=0;i<n;i++){
        if(v[i]!=nn){
            pos=i;
            break;
        }nn--;
    }
    ll pos2=n;
    for(int i=pos;i<n;i++){
        if(v[i]==nn){
            pos2=i;
            break;
        }
    }
    //cout<<nn<<' '<<pos<<' '  <<pos2<<'\n';
    if(pos!=-1)reverse(v.begin()+pos,v.begin()+pos2+1);

    // sort(all(vp));
    // reverse(all(vp));
    // ll pos=n;
    // for(int i=0;i<n;i++){
    //     if(v[i]!=vp[i].first){
    //         pos=i;
    //         break;
    //     }
    // }
    //cout   <<pos+1<<'\n';
    // ll new_pos=-1;

    // for(int i=pos;i<n;i++){
        
    // }
    // reverse(v.begin()+pos,v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }cout<<'\n';

    



   }
signed main(){
    fast_cin();
    tt saif();
  }