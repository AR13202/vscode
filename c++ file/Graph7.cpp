// KnapSack Problem
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int val[N],wt[N];
int knapSack(int n,int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapSack(n-1,w);
    }
    return max(knapSack(n-1,w),knapSack(n-1,w-wt[n-1])+val[n-1]);
}
int main()
{
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        cin >> wt[j];
    }
    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    int w;
    cin >> w;
    cout << knapSack(n,w);
    return 0;
}