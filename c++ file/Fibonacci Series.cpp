# include <iostream>
using namespace std;
int main()
{
	int n1 = 0;
	int n2 = 1;
	int num;
	cout << "Enter the number of terms: ";
	cin >> num;
	cout << n1 << " " << n2 << " ";
	for(int i=2;i<num;++i)  
 	{    
  		int n3=n1+n2;    
  		cout<<n3<<" ";    
  		n1=n2;    
  		n2=n3;    
 	}    
	return 0;
}