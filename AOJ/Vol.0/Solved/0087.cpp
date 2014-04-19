// include
// ----------------------------------------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>

using namespace std;

// conversion
// ----------------------------------------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

// typedef
// ----------------------------------------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

// container util
// ----------------------------------------------------------------------------
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i, c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort((c).begin(), (c).end())
#define SORTR(c) sort((c).rbegin(), (c).rend())

// repetition
// ----------------------------------------------------------------------------
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000
const double EPS = 1e-10;
const double PI = acos(-1.0);

// clear memory
// ----------------------------------------------------------------------------
#define CLRNUM(a) memset((a), 0, sizeof(a))
#define CLRBOOL(a, flag) memset((a), flag, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

// debug
// ----------------------------------------------------------------------------
#define DEBUG(x) cout << x << endl;
#define DEBUGREP(i, n, x) REP(i, n){ cout << x[i] << ' '; }
#define DEBUGFOR(i, a, b, x) FOR(i, a, b) { cout << x[i] << ' '; }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

int main(void)
{
    double ans;
    stack<double> stk;
    string str, tmp;

    while (getline(cin, str)){
        while (!stk.empty()){
            stk.pop();
        }

        ans = 0;

        stringstream strs(str);
        
        while (strs >> tmp){
            if (tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"){
                double s1, s2;
                
                s2 = stk.top();
                stk.pop();

                s1 = stk.top();
                stk.pop();

                if (tmp == "+"){
                    stk.push(s1 + s2);
                }
                else if (tmp == "-"){
                    stk.push(s1 - s2);
                }
                else if (tmp == "*"){
                    stk.push(s1 * s2);
                }
                else if (tmp == "/"){
                    stk.push(s1 / s2);
                }
            }
            else {
                stk.push(atof(tmp.c_str()));
            }
        }
        
        printf("%.6lf\n", stk.top());
    }

    return 0;
}
