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
