/* Muhammad Munaf Ul Hassan
   i200891 */

#include <iostream>

using namespace std;

void sortarray(int arr[], int n)
{
	int num_missing=0, num_double=0;

	for(int i=0 ; i<n ; i++)
	{
		if((arr[i]+1!=arr[i+1])&&(i<(n))) // if missing number is before the number that is repeated
			num_missing= arr[i]+1;
		
		if(arr[i]==arr[i+1]) // if a value is repeated, it would store it in a variable
			num_double=arr[i];
	}
	
	if(num_missing>num_double) //this is if the missing number comes after the number that is repeated
	{
    	for(int i=n ; i>0 ; i--)
    	if((arr[i]+1!=arr[i+1])&&(i<(n-1))) 
    			num_missing= arr[i]+1;
	}
	
	cout << "Missing number is " << num_missing << endl;
	cout << "Number that comes twice is " << num_double << endl;
}


int main()
{
	//no instructions are given for array input or initialization so i've taken sample data
	
	int arr[10] = {0,0,1,2,3,4,5,6,7,9}; 
	int n=10;
	
	sortarray(arr, n);
	
	return 0;
}
