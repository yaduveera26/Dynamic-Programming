#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp){
  if(n==1){
    return dp[n-1]=0;
  }
  if(n==2){
    return dp[n-1]=1;
  }
  if(dp[n-1]!=-1) return dp[n-1];
  return dp[n-1]=f(n-1,dp)+f(n-2,dp);
}
int main(){
  int n;
  cin>>n;
  vector<int>dp(n,-1);
  f(n,dp);
  cout<<dp[n-1];
  return 0;
}

/*  Time complexity : O(n)
    Space Complexity : O(n) */
