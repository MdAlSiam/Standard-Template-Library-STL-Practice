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

int main(){
    ll test;
    scanf("%lld\n\n", &test);

    while(test--){
        char s[35];
        map <string, ll> amarMap;
        ll kount = 0;

        while(gets(s)){
            if(strlen(s) == 0) break;
            amarMap[s]++;
            kount++;
        }

        map <string, ll> :: iterator it;
        for(it = amarMap.begin(); it != amarMap.end(); it++){
            printf("%s %.4lf\n", (*it).first.data(), (((*it).second)*100.00) / (kount*1.00));
        }

        if(test > 0){
            printf("\n");
            amarMap.clear();
        }
    }
	return 0;
}
