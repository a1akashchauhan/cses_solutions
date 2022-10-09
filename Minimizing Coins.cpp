/*
     लोकः समस्ताः सुखिनो भवन्तु
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define int long long int
const int mod = 1e9 + 7;
#define inarr(arr, n)                 \
    for (long long i = 0; i < n; i++) \
        cin >> arr[i];

#define F first
#define S second
#define pb push_back
#define pf push_front
#define ps push
#define tp top

#define lb(v, val) (lower_bound(v.begin(), v.end(), val) - v.begin())
#define ub(v, val) (upper_bound(v.begin(), v.end(), val) - v.begin())
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

#define max3(a, b, c) max(a, max(b, c));
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))

#define usi unordered_set<int>
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>

#define unp unordered_map<int, int>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define fl(i, s, n) for (int i = s; i < n; i++)
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define printMap(a)  \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define printPart(a, x, y)      \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))
#define MAXN 500000
int gcd(int a, int b)
{
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
int sum[MAXN+1];
// vector<int> sum(MAXN+1);
void sievetemp(){
    int i,j;
    for(int i=0; i<=MAXN;i++){
        for(int j= i+1;j<=MAXN;j+=i){
            sum[j]+=i;
        }
    }
}
int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}
// s.substr(start_pos, size);
// vector<vi> v(n, vector<int> (n));
//  fibonacii matrix 0 1
//                   1 1

//(n^p)%m == ((n%m)^p)%m

vi v(1e6+10, -1);

int fun(vector<int> &coins, int n, int value){
    if(value==0){
        return 0;
    }
    if(value<0){
        return INT_MAX;
    }
    int res= INT_MAX;
    if(v[value]!=-1)
        return v[value];
    for(int i=0; i<n;i++){
        res= min(res, 1+ fun(coins, n,  value-coins[i]));
    }
    v[value]= res;
    return res;

}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,x;
    cin>>n>>x;
    vi coins(n);
    inarr(coins,n);
    int ans=fun(coins, n, x);
    if(ans== INT_MAX){
        cout<<-1<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }


    return 0;
}
