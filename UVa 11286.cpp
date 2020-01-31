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
	ll n;
	while(scl(n) == 1){
        if(n == 0) break;
        map <string, int> amarMap;
        int maxi = -1;
        string x[5];
        For(i, 0, n){
            cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
            sort(x, x+5);
            string cat;
            For(j, 0, 5) cat += x[j];
            if(!amarMap.count(cat)){
                amarMap[cat] = 1;
                maxi = max(maxi, 1);
            }
            else{
                amarMap[cat]++;
                int m = amarMap[cat];
                maxi = max(m, maxi);
            }
        }
        int kount = 0;
        map <string, int> :: iterator it;
        for(it = amarMap.begin(); it != amarMap.end(); it++){
            if(it->second == maxi) kount += it->second;
        }
        printf("%d\n", kount);
	}
	return 0;
}
