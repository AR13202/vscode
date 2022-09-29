/* 
a set by set instructions(unabiguous steps) to solve a problem
unabiguous steps --> clear, no two steps contradict each other
programs run in primary memory
types of analysis:
-Avg. case  -> b/w best case & worst case
-best case  -> no exception and every thing is favourable
-worst case -> with exceptions
avg. case:
(time taken in each case)/(no. of cases)
*/
//binary search
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int t = 4;
    int start = 0,end = 6 ;
    bool p = false;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid]==t){
            p=true;
            break;
        }else if(arr[mid]>t){
            end = mid-1; 
        }else{
            start = mid+1;
        }

        cout << "iteration\n";
    }
    if(p){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
}
/*
Asymptotic Notation
Big Oh Natation -- upperbound of fxn. -- O -- can represent average,best,worst case 
Omega Notation -- lowerbound of fxn. -- symbol of resistance -- same 
Theta Notation -- averfage bound of fxn. -- symbol of angle  -- same
1<logn<(n)^1/2 < n < n2 < n3 < ............<2^2<2^3<...........<2^n;
upper bound of fxn. : f(n) <= c.g(n); , provided positive number(n>=0) -- n < n2 <......<2^n;
lower bound of fxn. : f(n) >= c.g(n); , --1<...<(n)^1/2
tight bound of fxn. : fixed value;
*/