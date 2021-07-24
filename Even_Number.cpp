#include <bits/stdc++.h>
using namespace std;

int findEven(int x)
{
    if(x==0)
    return 1;

    return 1 + findEven(x-2);
}

int main()
{
    int x;
    cout<<"Enter x :";
    cin>>x;
    if(x%2==0)
        cout<<"No. of even number from 0 to "<<x<<" : "<<findEven(x)<<endl;
    else
        cout<<"No. of even number from 0 to "<<x<<" : "<<findEven(x-1)<<endl;    
    return 0;
}

