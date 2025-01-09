#include<bits/stdc++.h>
#include <array>
#include <ostream>

using namespace std;
#define ll long long
#define dd double
#define ABS(x) (((x)<0)?(0-(x)):(x))
#define mod  1000000009
#define S string
#define sz(x) int(x.size())
#define ee "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pub push_back
#define puf push_front
#define popf pop_front
#define popb pop_back
#define TRUE  (0==0)
#define FALSE (0==1)
#define cin(v) for(auto& i : v) cin >> i
#define cout(v) for(auto& i : v) cout << i << " "
#define dec(x) fixed << setprecision(x)
typedef pair<int, int> pairs;
void fast (){ ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0); }
ll fib( ll n ){if( n <= 1) { return n ; } return fib( n - 1) + fib( n - 2 ) ; } // n-1 
ll gcd(ll a, ll b){ return a ? gcd(b % a, a) : b; }
ll lcm(ll a, ll b){ return a / gcd(a, b) * b; }
struct person
{
    
    S s[100005] ;
    ll arr[1000055] ;
};
bool CompareSI(pair< int , int>a, pair< int , int>b)
{
    if (a.second == b.second )
        return a.first < b.first;
    return a.second > b.second;
}

const double pi = acos(-1.0);
//const int M = 1e6+7 ; ll freq[M] = {0} ; // frequancy
//vector< vector < ll > > A(n+1 , vector< ll > (m+1) ) ;
//*min_element(arr , arr+n) ;   s.rfind('a') to pos end in string ;
// std::find( d.begin(), d.end(), x) != d.end()   search in deque ;
bool compare(int a , int b)
{
    return a < b ;  //return a > b ; // 4 3 2 1 ;
}


ll num(ll n) { return floor(log10(n)+ 1 ) ; } // num of dig in number ;

ll sum_of_dig_for_number(ll n)
{
    ll sum = 0 ;
    while(n!=0)
    {
        int y = n % 10 ;
        sum += y ;
        n/=10 ;
    }
    return sum ;
}


bool checkValidity(dd a, dd b, dd c) // Is Triangle
{
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}
int inCircle(ll x, ll y, ll xo, ll yo, ll R)
{
    ll dx = ABS(x - xo);
    if (dx > R) return FALSE;
    ll dy = ABS(y - yo);
    if (dy > R) return FALSE;
    if (dx + dy <= R) return TRUE;
    return (dx * dx + dy * dy <= R * R);
}
bool isprime(ll n )
{
    if(n <= 1 ) return 0 ;
    else if( n==3 || n == 2 ) return 1 ;
    else if( n % 2 == 0  || n % 3 == 0 ) return 0 ;
    for(int i = 5 ; i <= sqrt(n) ; i+= 6)
    { if( n % i == 0 || n % (i+2) == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

ll size_of_string(S s)
{
    ll n = 0  ;
    // long long n
    while(1)
    {
        if(s[n] != '\0') n++ ;
        else break ;
    }
    return n ; // size ;
}

ll num_of_digit(ll n)
{
    return floor( log10(n) + 1 ) ;
}
/*
   Make a triangle!
   ll a , b , c ;
   cin >> a>> b>> c ;
   ll x = 0 ;
   if( a + b <= c )
   {
       ll aa = a + b ;
       while(aa <= c )
       {
           aa++ ;
           x++ ;
       }
   }
   if( a + c <= b )
   {
       ll aa = a + c ;
       while( aa <= b )
       {
           aa++ ;
           x++ ;
       }
   }
   if( b + c <= a )
   {
       ll aa = b+ c ;
       while( aa <= a )
       {
           aa++ ;
           x++ ;
       }
   }

   cout << x ;

*/
/*
    sum from 1 to num = 1 + 2 + 3 + ... + num ---> n *( n +  1) / 2 ;
    the maximum number of distinct numbers that their summation is less than or equal to N.  (-1 + sqrt(1+8*x))/2 ;

    */

bool is_palindrome_Str(S s)
{
    S x = s ;
    reverse(all(x)) ;

    if(x == s )return 1 ;
    else return 0 ;

}
int from_str_to_time_mm(string s )
{
    S nn = s ;

    S hh = nn.substr(0,2) , mm = nn.substr(3 , 2 ) ;
    ll tt = stoi(hh) * 60 + stoi(mm) ;

    return tt ;

}
S from_time_to_Str_mm(int x)
{
    int all_mm = x ;


    int hh = all_mm / 60, mm = all_mm % 60;

    S hhs = to_string(hh) ;
    S mms = to_string(mm) ;

    if(hh < 10 )
    {
        hhs.insert(0,"0") ;
    }
    if( mm < 10 )
    {
        mms.insert(0,"0") ;
    }

    S strr = hhs + ":" + mms ;
    return strr ;
}
/*
   محيط موضع من جوانبها الثمانية

    if(s[i-1][j-1] != 'c')s[i-1][j-1] = 'x' ;
    if(s[i][j-1] != 'c') s[i][j-1] = 'x' ;
    if(s[i+1][j-1] != 'c')s[i+1][j-1] = 'x' ;
    if(s[i+1][j] != 'c')s[i+1][j] ='x' ;
    if(s[i+1][j+1] != 'c')s[i+1][j+1] = 'x' ;
    if(s[i][j+1] != 'c')s[i][j+1] = 'x' ;
    if(s[i-1][j+1] != 'c')s[i-1][j+1] = 'x' ;
    if(s[i-1][j] != 'c') s[i-1][j] = 'x' ;
    */
ll countDivisors(ll n)
{
    int cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
std::vector<int> factorize(int n) //  O (  sqrt(n) + log(n) )
{
    vector<int> ret;

    for(int i =2 ; i <= n ;i += 1 + ( i & 1) )
    {
        while( n % i == 0 )
        {
            ret.push_back(i) ; n/= i ;
        }
    }

    if( n > 1 )
    {
        ret.push_back(n) ;
    }

    return ret ;
}

vector<int> divisors(int n)
{
    vector<int> divi ;
    for(int i = 1 ; i * i <= n ; i++)
    {
        if( n % i == 0)
        {
            divi.push_back(i) ;
            if( i * i != n )
            {
                divi.push_back( n / i) ;
            }
        }
    }
    return divi ;
}

/*int comp[NN] ;
void modified_sieve() // O ( log ( log NN) )
{
    // اصغر عدد لكل رقم
    iota( comp , comp + NN , 0 ) ; // ex --> arr[i] = i ; start 0 t0 n ;
    comp[0] = comp[1] = 0 ;
    for(int i =2 ; i <  NN / i ; i++)
    {
        if(comp[i] == i)
        {
            for(int j = i * i ; j < NN;  j+=i )
            {
                if( comp[j] == j)
                {
                    comp[j] = i ;
                }

            }
        }
    }

} */
/*vector< pair<int , int> >prime_factorize_of_pow(int n) // log(n) ;
{
    //  عدد كل برايم بالاس بتاعه
    vector< pair<int , int> > ret ;
    while( n > 1)
    {
        int cur = comp[n] ;
        int cnt = 0 ;
        while(n % cur == 0)
        {
            cnt++ ;
            n/= cur ;
        }

        ret.push_back( {cur  , cnt} ) ;
    }
      /*
       in main + add modified_sieve() ;
        auto ret = prime_factorize_of_pow(i) ;
        cout << i << " " ;
        for (auto i : ret )
        {

            cout << i.first << "^" << i.second << " ";
        }
        cout << ee ;

        return ret ;
} */
ll toBinary(ll n)
{
    string r;
    while (n != 0)
    {
        if(n % 2 )
        {
            r += '1' ;
        }
        n /= 2;
    }
    ll j = sz(r) ;// cout << j <<  ee ;
    return j;
}
int num_of_ones_in_bin_is_prime(ll n)
{
    //int x = 0 ;

    bitset<32> bs(n); // toBinary size 32
    return 0 ;
}
ll sum_range_0b(int s , int e , vector<ll> & cum_sum )
{
    if(s == 0 ) return cum_sum[e] ;
    //sum_range(x , y , s) // x start , y end , s this arr or vector ;
    return cum_sum[e] - cum_sum[s-1] ; // 0 base ;
    // arr[x] = {  1, 2,3 4,5, 6 } , s[ sz(arr) ] ;
    // for(int i = 0 ; i<n ; i++ )
    /*
       s[i] += ( i == 0) ? p[i] : p[i] + s[i-1] ;
    */
}
int num_of_words(S s)
{
    int i =0 , x = 0 ;
    for( i =0 ; i < sz(s) ; i++ )
    {
        if( isalpha(s[i]) && !isalpha(s[i+1]) )
        {
            x++ ;
        }
    }
    return x ;
}
ll sum_range_1b(int s , int e , vector<ll> & cum_sum )
{
    return cum_sum[e] - cum_sum[s - 1 ] ;
    // arr[x] = { 0 , 1, 2,3 4,5, 6 } , s[ sz(arr) ] ;
    // for(int i =1 ; i<n ; i++ )
    /*
       s[i] += arr[i] + s[i-1] ;
    */
}
//vector<ll> p(1e6+1, 0) , s(1e6+1 , 0) ;
ll sum_range_2D(int i , int j , int k , int l , vector<vector<ll> > & a )
{
    return a[k][l] - a[k][j-1] - a[i-1][l] + a[i-1][j-1] ;
}
//const ll NN = 2e5 ;
//ll f[NN] = {0} ;
//ll pr[NN] , suf[NN] ;


/*
ll Sum_of_Sum_of_Digits_array[2*100000+1] ={0};
void Sum_of_Sum_of_Digits()
{
    int x = 0 ;
    for(int i = 0; i <= 2 * 100000  ; i++)
    {
        x += sum_of_dig_for_number(i) ;
        sumof[i] = x ;
    }


             // For example, if n=12
              then initially the numbers on the board are:
             1,2,3,4,5,6,7,8,9,10,11,12.
             Then after the replacement, the numbers become:
             1,2,3,4,5,6,7,8,9,1,2,3.
             The sum of these numbers is 1+2+3+4+5+6+7+8+9+1+2+3=51
             . Thus, for n=12
              the answer is 51

}

*/

/*
const int NN = 1e4+7 ;
bool prime[NN] ;
vector<ll> prime_1_t0_1e4 ;
void sieve() // O ( log ( log NN) )
{
    memset( prime  , 1 , sizeof prime ) ;
    prime[0] = prime[1] = 0 ;

    for(int i =2 ; i  < NN / i  ; i++)
    {
        if(prime[i])
        {
            for(int j = i * i ; j < NN;  j+=i )
            {
                prime[j] = 0 ;
            }
        }
    }
    for(int i = 2 ; i <= NN ; i++ )
    {
        if(prime[i])
        {
            prime_1_t0_1e4.push_back(i);

        }
    }

}*/

int toint(string x)
{
    stringstream s;
    int n;
    s<<x; s>>n; return n;
}
ll sum_of_dig_for_String( S s )
{
    ll sum = 0 ;
    for(ll i =0 ; i < sz(s) ;i++)
    {
        sum += (s[i] - '0') ;
    }
    return sum ;
}
bool CompareVectorPair(pair< int , int>a, pair< int , int>b)
{
    if(a.first == b.first)
    {
        return a.second < b.second ;
    }
    return  a.first > b.first ;
}
int SUM_RANGE1(int s, int e , vector<ll> & cum_sum)
{
    return cum_sum[e] - cum_sum[s-1] ;
}

struct car
{
    string brand ;
    string model ;
    int year ;
};

int main()
{
    fast();
    /*       وما تدري نفس ماذا تکسب غدا وما تدري نفس باي ارض تموت      */

}

