# include <iostream>
using namespace std;
int main(){
	float *ptr;
	ptr = (float*) calloc(1,sizeof(float));
	*ptr = 5.233;
	cout << "Before freeing" << endl;
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;
	free(ptr);
	cout << "After freeing" << endl;
	/* ptr remains same, *ptr changes*/
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;
	return 0;	
}