# include <iostream>
using namespace std;
int main()
{
	string s = "prime";
	for(int i = 2; i <=10; i++){
		for(int j = 2; j < i/2+1; j++){
			if (i%j == 0){
				s = "not prime";
				break;
			}
		}
		if (s=="prime"){
			cout << i << " ";
		}
		s = "prime";
	}
	return 0;
}