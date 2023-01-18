/**
    @file   submission.cpp
    @author Vinit Wagh, @vvvinit
*/

#include <bits/stdc++.h>
using namespace std;

#define IOS             ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll              long long int
#define ull             unsigned long long int
#define endl            "\n"
#define nl              cout<<endl
#define fo(i,n)         for(i = 0; i < n; i++)
#define fa(i,a,n)       for(ll i=a; i<n; i++)
#define rfa(i,n,a)      for(ll i=n; i>=a; i--)
#define CASE(t)         cout<<"Case #"<<(t)<<": ";
#define all(x)          (x).begin(),(x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define foit(itr,c)     for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define pll             pair<ll,ll>
#define vl              vector<ll>
#define vs              vector<string>
#define vpi             vector<pair<int, int>>
#define vvi             vector<vi>
#define vvl             vector<vl>
#define uniq(v)         (v).erase(unique(all(v)), (v).end())
#define sz(x)           (int)((x).size())
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)


template <typename A, typename B>
ostream& operator <<(ostream& out, const pair<A, B>& a) {
  out << "(" << a.first << "," << a.second << ")";
  return out;
}
template <typename T, size_t N>
ostream& operator <<(ostream& out, const array<T, N>& a) {
  out << "["; bool first = true;
  for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "]";
  return out;
}
template <typename T>
ostream& operator <<(ostream& out, const vector<T>& a) {
  out << "["; bool first = true;
  for (auto v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "]";
  return out;
}
template <typename T, class Cmp>
ostream& operator <<(ostream& out, const set<T, Cmp>& a) {
  out << "{"; bool first = true;
  for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "}";
  return out;
}
template <typename T, class Cmp>
ostream& operator <<(ostream& out, const multiset<T, Cmp>& a) {
  out << "{"; bool first = true;
  for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "}";
  return out;
}
template <typename U, typename T, class Cmp>
ostream& operator <<(ostream& out, const map<U, T, Cmp>& a) {
  out << "{"; bool first = true;
  for (auto& p : a) { out << (first ? "" : ", "); out << p.first << ":" << p.second; first = 0;} out << "}";
  return out;
}

#ifdef  ONLINE_JUDGE
#define d(...)
#define dc(...)
#else
#define d(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define dc(...) __fc(#__VA_ARGS__, __VA_ARGS__)
#endif

template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << ": " << arg1 << " |";
  __f(comma + 1, args...);
}

template <typename Arg1>
void __fc(const char* name, Arg1&& arg1){
  cout << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __fc(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << ": " << arg1 << " |";
  __fc(comma + 1, args...);
}

template <class T> auto vect(const T& v, int n) { return vector<T>(n, v); }
template <class T, class... D> auto vect(const T& v, int n, D... m) {
  return vector<decltype(vect(v, m...))>(n, vect(v, m...));
}

template <typename T, typename T1>T cmax(T a, T1 b);
template <typename T, typename T1>T cmin(T a, T1 b);
template <typename T, typename T1>T amax(T &a, T1 b);
template <typename T, typename T1>T amin(T &a, T1 b);
template <typename T = int>pair<int, vector<T>> ip();
template <typename T = int>vector<T> ip(int n);
template <typename T>void pr(T a);
template <typename T>void prn(T a);
template <typename T, typename T1>void pr(T a, T1 b);
template <typename T>void prv(vector<T> &a);

const long long INF = 1e18;
const int M = 1e9 + 7;
const int MM = 998244353;
ll expo(ll a, ll b, ll mod);

void solve() {
    int i, j, k;
    int n;
    
}
 
signed main() {   
    IOS;
    cout << fixed << setprecision(15);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}

ll expo(ll a, ll b, ll mod){
    ll res = 1;
    while (b > 0){
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
} 
template <typename T, typename T1>
T cmax(T a, T1 b){
    if (b > a)
        return b;
    return a;
}
template <typename T, typename T1>
T cmin(T a, T1 b){
    if (b < a)
        return b;
    return a;
}
template <typename T, typename T1>
T amax(T &a, T1 b){
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b){
    if (b < a)
        a = b;
    return a;
}
template <typename T>
pair<int,vector<T>> ip(){
    int n;
    cin >> n;
    vector<T> a(n);
    for(auto &i:a)
        cin >> i;
    return {n, a};
}
template <typename T>
vector<T> ip(int n){
    vector<T> a(n);
    for(auto &i:a)
        cin >> i;
    return a;
}
template <typename T>
void pr(T a){
    cout << a << " ";
}
template <typename T>
void prn(T a){
    cout << a << endl;
}
template <typename T, typename T1>
void pr(T a, T1 b){
    cout << a << " " << b << endl;
}
template <typename T>
void prv(vector<T> &a){
    for(auto i:a)
        pr(i);
    nl;
}