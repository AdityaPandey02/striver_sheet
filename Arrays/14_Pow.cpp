#include<iostream>
using namespace std;
double myPow(double x, int n) {
      double ans = 1.0;
      for (int i = 0; i < n; i++) {
        ans = ans * x;
      }
      return ans;
}
int main()
{
    cout<<myPow(2.3,10)<<endl;
}