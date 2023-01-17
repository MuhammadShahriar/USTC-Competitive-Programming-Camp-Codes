
///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

int main()
{
    optimize();

    int a = 3, b = 4;

    cout << a << " " << b << endl; /// a = 3, b = 4
    swap ( a, b );
    cout << a << " " << b << endl; /// a = 4, b = 3

    cout << max ( a, b ) << endl; /// 4
    cout << min ( a, b ) << endl; /// 3
    cout << max ( {3, 4, 5, 6} ) << endl; /// 6;
    cout << min ( {3, 4, 5, 6} ) << endl; /// 3;

    a = 2, b = 4;

    cout << gcd ( a, b ) << endl; /// 2
    cout << lcm ( a, b ) << endl; /// 4

    int arr[] = { 2, 4, 6, 2 };
    int n = 4;

    int g = 0;
    for ( int i = 0; i < n; i++ ) {
        g = gcd ( g, arr[i] );
    }

    cout << g << endl;

    int l = 1;
    for ( int i = 0; i < n; i++ ) {
        l = lcm ( l, arr[i] );
    }

    cout << l << endl;

    sort ( arr, arr+n );
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " "; /// 2 2 4 6
    cout << endl;

    reverse ( arr, arr+n );
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " "; /// 2 2 4 6
    cout << endl;



    return 0;
}












