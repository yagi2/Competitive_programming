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
#define CLRBOOLF(a) memset((a), FALSE, sizeof(a))
#define CLRBOOLT(a) memset((a), TRUE, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

//debug
// ----------------------------------------------------------------------------
#define dump(x) cerr << #x << " =" << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

class NumberMagicEasy {
  public:
    int theNumber(string answer) {
        if (answer == "YYYY") return 1;
        if (answer == "YYYN") return 2;
        if (answer == "YYNY") return 3;
        if (answer == "YYNN") return 4;
        if (answer == "YNYY") return 5;
        if (answer == "YNYN") return 6;
        if (answer == "YNNY") return 7;
        if (answer == "YNNN") return 8;
        if (answer == "NYYY") return 9;
        if (answer == "NYYN") return 10;
        if (answer == "NYNY") return 11;
        if (answer == "NYNN") return 12;
        if (answer == "NNYY") return 13;
        if (answer == "NNYN") return 14;
        if (answer == "NNNY") return 15;
        if (answer == "NNNN") return 16;
    }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "YNYY"; int Arg1 = 5; verify_case(0, Arg1, theNumber(Arg0)); }
	void test_case_1() { string Arg0 = "YNNN"; int Arg1 = 8; verify_case(1, Arg1, theNumber(Arg0)); }
	void test_case_2() { string Arg0 = "NNNN"; int Arg1 = 16; verify_case(2, Arg1, theNumber(Arg0)); }
	void test_case_3() { string Arg0 = "YYYY"; int Arg1 = 1; verify_case(3, Arg1, theNumber(Arg0)); }
	void test_case_4() { string Arg0 = "NYNY"; int Arg1 = 11; verify_case(4, Arg1, theNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main(){
  NumberMagicEasy ___test;
  ___test.run_test(-1);
}
//END CUT HERE
