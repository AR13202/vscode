#include <iostream>
using namespace std;
int chef(int n,int p,int k) {
    int count = 0;
    int i = 0;
    while(i<=k-1){
        for (int j = 0;j < n; j++){
            if (j % k == i){
                count++;
                if (j == p){
                    return count;
                }
            }
        }
        i++;
    }
    return count;
}
int main() {
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t ;i++){
	    int n,p,k;
	    scanf("%d",&n);
	    scanf("%d",&p);
	    scanf("%d",&k);
	    printf("%d \n", chef(n,p,k));
	}
	return 0;
}