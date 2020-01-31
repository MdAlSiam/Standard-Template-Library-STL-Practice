#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

typedef struct{
    ll id;
    ll num;
} team;

bool compare(team a, team b) {return a.num > b.num;}

int main(){
    ll n;
    scanf("%lld", &n);
    team ara[n+1];
    for(ll i = 0; i < n; i++){
        scanf("%lld %lld", &ara[i].id, &ara[i].num);
    }
    stable_sort(ara, ara+n, compare);
    for(ll i = 0; i < n; i++){
        printf("%lld %lld\n", ara[i].id, ara[i].num);
    }
    return 0;
}
