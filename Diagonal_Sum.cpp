#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Matrix Dimension : ";
    cin>>n;
    
    int mat[n][n];
    cout<<"Enter Matrix Elements : ";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>mat[i][j];

    int sum = 0;
    //primary: mat[0][0] + mat[1][1] + mat[2][2] & secondary: mat[0][2] + mat[1][1] + mat[2][0]
    for(int i=0; i<n; i++)
        sum += mat[i][i] + mat[i][n-i-1]; 
    
    //if n is odd, then mat[n/2][n/2] will be added twice, hence subtract it once from total sum.
    if(n%2!=0)
        sum -= mat[n/2][n/2];

    cout<<"Sum of Primary and Secondary diagonal Elements is : "<<sum;
    return 0;
}