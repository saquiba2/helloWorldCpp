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
	cout<<"now this branch is many commits behind the saquiba original branch";
	
	cout<<"Now my branch is ahead and different than saquiba2 's version."<<endl;
	
	for (int i = 0; i<5;i++){
		cout<< ":-)    ";
	}
	
	cout<<"The third change ahead of saquiba2's version";
	cout<<"Saquiba wrote blah blah blah";

	
	
	return 0;
}
