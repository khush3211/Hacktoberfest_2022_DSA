
//🎃🎃🎃😎😎😁🤓☣☣☣☣☣dark_coder☣☣☣☣☣🤓😁😎😎🎃🎃🎃
// https://codeforces.com/problemset/problem/353/A
// GitHub Name:- Prashant Aditya
// GitHub ID- Darkcoder-paditya

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb emplace_back
#define ld long double
#define f(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mi map<int, int>
#define all(a) a.begin(), a.end()
#define ff first
#define ss second
#define endl '\n'
#define el '\n'
#define si(x) (int)(x.size())
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define elapsed_time 1.0 * clock() / CLOCKS_PER_SEC
#define tree vector<vector<int>>
#define PI acos(-1)
#define set_bits __builtin_popcountll
int inf = 99999999999;
const int mod = 1e9 + 7;
const int cmp = 1e18;
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
void _print(int t)
{
    cerr << t;
}
void _print(ld t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int pow(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
int N = 1000000;
void sieve()
{
    vector<bool> isprime(N + 1, 1);
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isprime[i] && i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
            {
                isprime[j] = 0;
            }
        }
    }
}
void gv(vi &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
}
// ================ ================ ================ ================ ================ ================ ================ ================ ================ ================
int solve()
{
    IOS;
    int n, o = 0, o1 = 0, o2 = 0, flips = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        ai %= 2;
        bi %= 2;
        if (ai == bi)
        {
            if (ai == 1)
                o++;
        }
        else
        {
            if (ai)
                o1++;
            else
                o2++;
        }
    }
    o %= 2;
    if (o == 0)
    {
        if ((o1 + o2) % 2 == 0)
        {
            cout << (o1&1);
        }
        else
            cout << -1;
    }
    else if (o == 1)
    {
        if ((o1 + o2) % 2 == 0 && (o1 || o2))
        {
            if (o1 % 2)
                cout << 0;
            else
                cout << 1;
        }
        else
            cout << -1;
    }
    else
        cout << -1;

    return 0;
}
// ================ ================ ================ ================ ================ ================ ================ ================ ================ ================
signed main()
{
    IOS;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}