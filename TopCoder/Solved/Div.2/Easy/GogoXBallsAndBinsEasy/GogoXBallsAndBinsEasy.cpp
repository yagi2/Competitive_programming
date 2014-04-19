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

class GogoXBallsAndBinsEasy {
  public:
    int solve(vector <int> T) {
        int ans;
        VI S;
        
        S = T;
        ans = 0;
        
        SORTR(S);

        FOR(i, 0, S.size() / 2){
            ans += abs(T[i] - S[i]);
        }

        return ans;        
        
    }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0, 2, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(0, Arg1, solve(Arg0)); }
	void test_case_1() { int Arr0[] = {5, 6, 7, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(1, Arg1, solve(Arg0)); }
	void test_case_2() { int Arr0[] = {0, 1, 2, 10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 11; verify_case(2, Arg1, solve(Arg0)); }
	void test_case_3() { int Arr0[] = {1, 2, 3, 4, 5, 6, 7, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 16; verify_case(3, Arg1, solve(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main(){
  GogoXBallsAndBinsEasy ___test;
  ___test.run_test(-1);
}
//END CUT HERE
