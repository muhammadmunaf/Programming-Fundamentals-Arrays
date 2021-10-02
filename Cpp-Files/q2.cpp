/* Muhammad Munaf Ul Hassan
   i200891 */

#include <iostream>
#include <cmath>

using namespace std;

void norm(int matrix[][20], int m, int n)
{
    int sum=0, num=0;
	double ans=0;
	
	for( int i=0; i<m ; i++)
	{
		for ( int j=0; j<n ; j++)
		{
			num=(matrix[i][j])*(matrix[i][j]); // taking sqaure 
			sum+=num; // adding the result to a variable to take sum
		}
	}
	
	ans = static_cast<double>(sqrt(sum)); // taking sqaure root
	
	cout << "Norm of the matrix is " << ans << endl;
}


int main()
{
	int m=0,n=0;
	
	cout << "Enter the order of the matrix, rows first then columns\n";
	cin >> m >> n;
	
	int matrix[20][20];
	
	cout << endl << "Enter the values of the matrix row by row (1 by 1)\n";
	
	// taking input in array
	for( int i=0; i<m ; i++)
	{
		cout << "Row " << (i+1) << endl;
		
		for ( int j=0; j<n ; j++)
		{			
			cin >> (matrix[i][j]);		
		}
	}
	
	norm(matrix,m,n);
	
	return 0;
}