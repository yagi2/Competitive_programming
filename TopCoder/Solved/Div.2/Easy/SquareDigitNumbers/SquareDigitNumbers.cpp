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

class SquareDigitNumbers {
  public:
    int getNumber(int n) {
        cout << "out";
        cout << "error";
        
        int ans = 0;
        
        for (int i = 1; n > 0; i *= 10){
            ans += i * (n % 4) * (n % 4);
            n /= 4;
        }

        return ans;
    }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 0; int Arg1 = 0; verify_case(0, Arg1, getNumber(Arg0)); }
	void test_case_1() { int Arg0 = 5; int Arg1 = 11; verify_case(1, Arg1, getNumber(Arg0)); }
	void test_case_2() { int Arg0 = 16; int Arg1 = 100; verify_case(2, Arg1, getNumber(Arg0)); }
	void test_case_3() { int Arg0 = 121; int Arg1 = 1941; verify_case(3, Arg1, getNumber(Arg0)); }
	void test_case_4() { int Arg0 = 123; int Arg1 = 1949; verify_case(4, Arg1, getNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main(){
  SquareDigitNumbers ___test;
  ___test.run_test(-1);
}
//END CUT HERE
