// https://codeforces.com/contest/96/problem/A complexidade O(n)
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
bool check(int x){
    for(int i=0;i<500;i++){
        for(int j=0;j<500;j++){
            if(2020*i+2021*j == x){
                return true;
            }
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(check(n) ? "YES" : "NO")<<endl;
    }
    return 0;
}