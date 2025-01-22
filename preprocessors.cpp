#define minimum(mn,a) (mn=((mn>a)?(a):(mn)))
#define maximum(mx,b) (mx=((mx>b)?(mx):(b)))
#define FUNCTION(arg1, arg2)
#define INF 10000000
// #define error printf("Missing preprocessor definitions\n")
#define foreach(v,i) for(int i=0;i<v.size();i++)
#define io(v) cin >> v
#define toStr(x) #x

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
