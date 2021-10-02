/* Muhammad Munaf Ul Hassan
   i200891 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	
	int m1,m2,n1,n2;
	//rows and columns of matrix 1
	cout << "Enter rows and coloumns of matrix 1\n";
	cin >> m1;
	while(m1<1)
	{
	    cout << "Enter a number greater than 0\n";
	    cin >> m1;
	}
	cin >> n1;
	while(n1<1)
	{
	    cout << "Enter a number greater than 0\n";
	    cin >> n1;
	}
	
	//rows and coloumns of matrix 2
	cout << "Enter rows and coloumns of matrix 2\n";
	cin >> m2;
	while(m1<1)
	{
	    cout << "Enter a number greater than 0\n";
	    cin >> m2;
	}
	cin >> n2;
	while(n2<1)
	{
	    cout << "Enter a number greater than 0\n";
	    cin >> n2;
	}
	
	//checking if multiplication is possible
	if(n1!=m2)
	{
	    cout << "Multiplication of these matrices is not possible\n";
	    exit(0);
	}
	
	int matrix1[m1][n1]; //matrix 1
	int matrix2[m2][n2]; //matrix 2
	int matrix3[m1][n2]; //resultant matrix
	
	//taking input of array 1
	cout << "Enter elements of matrix 1, row by row (1 by 1)\n";
	for( int i=0; i<m1 ; i++)
	{
		for ( int j=0; j<n1 ; j++)
		{			
			cin >> (matrix1[i][j]);		
		}
	}
	
	//taking input of array 2
	cout << "Enter elements of matrix 2, row by row (1 by 1)\n";
	for( int i=0; i<m2 ; i++)
	{
		for ( int j=0; j<n2 ; j++)
		{			
			cin >> (matrix2[i][j]);		
		}
	}
	
	//multiplication
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            matrix3[i][j] = 0;
            for (int k = 0; k < m2; k++)
            {
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    
    //output
    cout << "Resultant matrix is \n";
    for(int i=0; i<m1 ; ++i)
    {
        for(int j=0; j<n2 ; ++j)
        {
            cout << matrix3[i][j] << " ";
            if(j==(n2-1))
                cout << endl;
        }
    }
        
	return 0;
}