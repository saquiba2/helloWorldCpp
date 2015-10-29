#include <iostream>

using namespace std;

int main (){
	int var = 9;
	int arr [] = {1,2,3,4,5};
	int i;
	
	for (i = 0; i<5; i++)
	{
		var = var + i;	
	}

	cout<<"hello world! var is: "<<var << "and arr[1]is: " << arr[1] <<endl;
	
	return 0;
}
