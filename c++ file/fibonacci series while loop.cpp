# include <iostream>
using namespace std;
int main()
{
	int n1 = 0;
	int n2 = 1;
	int num,i;
	cout << "Enter number of terms: ";
	cin >> num;
	cout << n1 << " " << n2 << " ";
	i = 2;
	while(i<num)  
 	{    
  		int n3=n1+n2;    
  		cout<<n3<<" ";    
  		n1=n2;    
  		n2=n3;
		i++;    
 	}    
	return 0;
}