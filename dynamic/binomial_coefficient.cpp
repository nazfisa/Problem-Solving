#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
  // Base Cases
  if (k==0 || k==n)
    return 1;
  if (dp[n][k]!=-1)
    return dp[n][k];
  // Recur
   dp[n][k]= binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k);
   return dp[n][k];
}

/* Driver program to test above function*/
int main()
{
    int n = 5, k = 2;
     dp[n][k];
    for(int j = 0; j < n; j++)
{
    for(int i = 0; i < k; i++)
    {
        dp[i][j] = -1;
    }
}
    printf("Value of C(%d, %d) is %d ", n, k, binomialCoeff(n, k));
    return 0;
}
