#include<iostream>
#include<vector>

using namespace std;

vector<int> pascalRow(int x)
{
    long long res = 1;
    vector<int> row;
    row.push_back(res);

    for(int i=1;i<x;i++)
    {
        res = res * (x-i);
        res = res/i;
        row.push_back(res);
    }
    return row;
}

vector<vector<int>> pascalTriangle(int V)
{
    vector<vector<int>> adj;

    for(int i=1;i<=V;i++)
    {
        adj.push_back(pascalRow(i));
    }

    return adj;
}

int main()
{
    int V;
    cout<<"Enter number of vertices";
    cin>>V;

    vector<vector<int>> adj = pascalTriangle(V);

    for(auto x: adj)
    {
        for(auto y: x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

}