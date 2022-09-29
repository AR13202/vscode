#include <iostream>
using namespace std;
int* insertX(int n, int arr[],
             int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
  
    return arr;
}
int main()
{
	int n;
	cout << "enter size of array: ";
	cin >> n;
    int arr[n];
    int i, x, pos;
    cout << "Enter values: ";
    for (i = 0; i < n; i++){
       cin >> arr[i] ;
	}
	cout << "Array: ";
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter values and position to be inserted: ";
    cin >> x >> pos;
    insertX(n, arr, x, pos);
    cout << "Inserted Array: ";
    for (i = 0; i < n + 1; i++){
        cout << arr[i] << " ";
	}
    cout << endl;
  
    return 0;
}