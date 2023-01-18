
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

int main ()
{
    /// Declare string
    string s;

    /// Assign string
    s = "abcdf";

    /// Printing size of string
    cout << s.size() << endl; /// 5

    /// Printing string
    cout << s << endl; /// abcdf

    /// Pushing char back to a string
    s += 'b';
    s += 'c';
    cout << s << endl; /// abcdfbc

    /// Taking input string
    cin >> s;
    cout << s << endl;

    s = "asdfgg";

    /// Checking is a string empty or not
    string s1;
    cout << s.empty() << endl; /// 0
    cout << s1.empty() << endl; /// 1

    /// Assigning an string in another string variable
    s1 = s;
    s.clear();

    cout << s.empty() << endl; /// 1
    cout << s1.empty() << endl; /// 0

    /// assigning 'k' in 0-th index
    s = "asdfg";
    s[0] = 'k';
    cout << s << endl;  ///kasdfg;

    s = "abc";
    s1 = "def";

    /// String concatenation
    string tmp = s + s1;
    cout << tmp << endl; /// abcdef

    /// String iterator
    string::iterator it;
    for ( it = s.begin(); it != s.end(); it++ ) cout << *it; /// abc
    cout << endl;

    /// For each loop
    for ( auto c : s ) cout << c; /// abc
    cout << endl;


    s = "asd";
    tmp = s;

    /// Comparing two strings
    if ( tmp == s ) cout << "Yes Match\n";
    else "No Match\n";

    /// String reverse and checking is a string is palindrome or not
    s = "asddsa";
    tmp = s;
    reverse( tmp.begin(), tmp.end() );

    if ( tmp == s ) cout << "Yes Palindrome" << endl;
    else cout << "Not Palindrome" << endl;

    /// String sorting in non-decreasing order
    s = "gfds";
    sort ( s.begin(), s.end() );
    cout << s << endl; /// dfgs

    /// String sorting in non-increasing order
    sort ( s.rbegin(), s.rend() );
    cout << s << endl; /// sgfd

    char c;
    cin >> c;
    getline( cin, s );
    s = c + s;

    cout << s << endl; /// Muhammad Shahriar Alam

    /// If we need to sort some string on lexicographical order :

    vector<string> v;
    v.push_back( "Muhammad" );
    v.push_back( "Nova" );
    v.push_back( "Maslenia Mubarrat" );
    v.push_back( "CPS Academy" );
    v.push_back( "Rashedul Alam Anik" );
    v.push_back( "Farhan sadik Sakib" );
    v.push_back( "Gazi Mohaimin Iqbal" );

    sort ( v.begin(), v.end() );
    for ( auto u : v ) cout << u << endl;

    /**

    Out put :

    CPS Academy
    Farhan sadik Sakib
    Gazi Mohaimin Iqbal
    Maslenia Mubarrat
    Muhammad
    Nova
    Rashedul Alam Anik

    */

    s = "asdf";

    s.pop_back(); /// removes last char of string
    cout << s.back() << endl; /// print last char of string

    v.clear();

    /// Converting int to string
    int a = 123;
    s = to_string (a);
    cout << s << endl; /// 123
    s[0] = '3';
    cout << s << endl; /// 323

    /// Converting string to integer

    s = "123";
    a = stoi ( s );
    cout << a << endl; /// 123
    a++;
    cout << a << endl; /// 124;

    /// Deleting a substring from string

    s = "ShaKAKAhriar";

    s.erase ( s.begin()+3, s.begin()+7 ); /// erase substring "KAKA" from string s
    cout << s << endl;

    /// Erasing all occurrence of a specific char from string.

    s = "aaassdddaaasdd";
    s.erase ( remove ( s.begin(), s.end(), 'a' ), s.end() ); /// removes all 'a' from s
    cout << s << endl;

    /// Checking is a string is substring of another string in O(n*m)
    s = "ashshasdakks";

    if ( s.find( "asd" ) != -1 ) cout << "Substring found";
    else cout << "Not found";


    return 0;
}


