#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> A, int n) {
    unordered_map<int, int> mpp; 
    int maxi = 0;
    int sum = 0; 

    for (int i = 0; i < n; i++) {
        sum += A[i]; 
        if (sum == 0) {
            maxi = i + 1; 
        }

        if (mpp.find(sum) != mpp.end()) {
            maxi = max(maxi, i - mpp[sum]); 
        } 
        else {
            mpp[sum] = i; 
        }
    }

    return maxi; 
}

int main() {
    vector<int> a = {3,-4,0};
    cout << maxLen(a, a.size()) << endl;

    return 0;
}