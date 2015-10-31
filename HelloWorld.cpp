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
	cout<<"This is the third of a series of 3 commits before sending a pull request." <<endl;
	
	cout<<"the change to fork this to a new project in my repository"<<endl;
	return 0;
}
