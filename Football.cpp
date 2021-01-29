//https://codeforces.com/contest/96/problem/A Complexidade O(n)
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll INF = 1e14+7;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
 
using pii = pair<int,int>;
using pli = pair<ll,int>;
#define f first
#define s second
#define mp make_pair
int t;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin>>a;
    int ans1 = 0;
    int ans2 = 0;
    int curr1 = 0;
    int curr2 = 0;
    for(int i=0;i<(int)a.size();i++){
        curr1 +=(a[i]=='1'? 1 : curr1 = 0);
        curr2 +=(a[i]=='0'? 1 : curr2 = 0);
        ans1 = max(ans1,curr1);
        ans2 = max(ans2,curr2);
    }
    cout<<(ans1 >= 7 || ans2>=7 ? "YES" : "NO" );
    return 0;
}
