# include <iostream>
using namespace std;
int check_digit(int num){
    int count = 0;
    while (num > 0){
        count++;
        num /= 10;
    }
    return count;
}
int factorial(int j){
    int a = 1,i=1;
    while (i <= j){
        a *= i;
        i++;
    }
    return a;
}
int pro(int num){
    int m = 1;
    while(num > 0){
        int k = num % 10;
        m *= k;
        num /= 10;
    }
    return m;
}
int chef(int n){
    int count = 0,i=1;
    while (i<=n){
        int x = pro(i);
        int y = check_digit(i);
        int z = factorial(y);
        count += (x>=z) ? 1:0;
        i++;
    }
    return count;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        int n;
        scanf("%d",&n);
        printf("%d \n",chef(n));
        t--;
    }
    return 0;
}
