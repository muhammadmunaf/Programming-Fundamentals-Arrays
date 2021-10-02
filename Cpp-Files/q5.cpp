/* Muhammad Munaf Ul Hassan
   i200891 */

#include <iostream>

using namespace std;

int main()
{

	// no instructions given on size of array or whether it'd be taken input from user or not so i've taken sample data
	
	char my_Array[10] = {"aaaabcbbc"};
	int a=0,b=0,c=0;
		
	for (int i=0 ; i<10 ; i++) // checks how many of each letters are present
	{
		if(my_Array[i]=='a')
			a++;
		else if(my_Array[i]=='b')
			b++;
		else if(my_Array[i]=='c')
			c++;					
	}
	
	for (int i=0 ; i<10 ; i++) //placing the aplphabets in order
	{
		if(a>0) //at first adds the a's in the first n rows
		{
			my_Array[i]='a';
			a--;
		}
		else if(b>0) // after a's are done, then add the b's in the next n rows
		{
			my_Array[i]='b';
			b--;
		}
		else if(c>0) //after b's are done, then add the c's in the last n rows
		{
			my_Array[i]='c';
			c--;
		}
	}
	
	// printing the array
	for(int i=0;i<10;i++)
		cout << my_Array[i] << endl;
		
	return 0;
}
