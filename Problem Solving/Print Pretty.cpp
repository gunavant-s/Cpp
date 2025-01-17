#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        // cout << A;
        cout << left << hex<< showbase << nouppercase << (long long) A << endl;
        cout << dec << setw(15) << right << setfill('_')  << showpos << setprecision(2) << fixed << B << endl;
        cout << scientific << uppercase << noshowpos<< setprecision(9) << C << endl;
	}
	return 0;

}
