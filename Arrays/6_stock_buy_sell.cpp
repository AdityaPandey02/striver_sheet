#include<iostream>
#include<vector>

using namespace std;

/*
Initialise min and max value
Find the current minimum element in the array
Find the difference between the present element and previously found minimum element
Compare the current maximum difference and the difference found in the above step
Return the maximum difference found in the array 
*/
int maxProfit(vector<int>& arr)
{

    int min1 = INT_MAX;
    int max1 = 0;
    for(int i=0;i<arr.size();i++)
    {
        min1 = min(min1, arr[i]);
        max1 = max(max1, arr[i]-min1);
    }
    return max1;
}

int main()
{
    vector<int> n = {8,1,9,3,10,4};
    int max1 = maxProfit(n);
    cout<<"Max Profit is: "<<max1;
}