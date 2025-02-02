#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    vector <int> ar;
    ar.push_back(0);
    for(int i = 0;i<size;i++){
        int temp;
        cin >> temp;
        ar.push_back(temp);
    }
    int q;
    cin >> q;
    for(int i = 0;i<q;i++){
        int val;
        cin >> val;
        auto it = std::lower_bound(ar.begin(),ar.end(),val);
        if(*it == val){
            cout << "Yes " << it - ar.begin() << endl;
        }
        else{
             cout << "No " << it - ar.begin() << endl;
        }
    }
    return 0;
}
