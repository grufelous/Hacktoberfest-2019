//
// Created by sark2 on 07-10-2019.
//

#include "bits/stdc++.h"

using namespace std;
#define IOS cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cases int t;cin>>t;while(t--)
typedef long double ld;
typedef long long ll;
ll mod = 1e9 + 7;

const int N = 1e5+5;

int t[4*N];
int n;

void build(int a[], int v, int tl, int tr){
    if(tl == tr)
        t[v] = a[tl];
    else{
        int tm = (tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);

        t[v] = min(t[v*2], t[v*2+1]);
    }
}

int query(int v, int tl, int tr, int l, int r){
    if(l > r)
        return INT_MAX;
    if(tl == l && tr == r)
        return t[v];
    else{
        int tm = (tl+tr)/2;

        return min(query(v*2, tl, tm, l, min(r,tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
}



int main() {
    IOS

    cin>>n;

    int a[n+5];
    for(int i = 1; i <= n; i++)
        cin>>a[i];

    build(a,1,1,n);
    int m;
    cin>>m;
    for(int i = 1; i <= m; i++){
        int l, r;
        cin>>l>>r;
        l++, r++;
        cout<<query(1,1,n,l, r)<<"\n";
    }



}
