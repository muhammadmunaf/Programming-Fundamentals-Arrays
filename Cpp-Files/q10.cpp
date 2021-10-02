/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>

using namespace std;

int main()
{
    int coefMatrix[2][2];
    int consMatrix[2];
    
    cout << "Enter values of coefficient matrix\n";
    for(int i=0 ; i<2 ; i++)
        for(int j=0 ; j<2 ; j++)
            cin >> coefMatrix[i][j];
            
    cout << "Enter values of constant matrix\n";
    for(int i=0 ; i<2 ; i++)
        cin >> consMatrix[i];
    
    //determinant of coefficent matrix    
    int D = (coefMatrix[0][0]*coefMatrix[1][1])-(coefMatrix[0][1]*coefMatrix[1][0]);
    
    if(D!=0)
    {
        int xMatrix[2][2];
        int yMatrix[2][2];

        //calculating the dx and dy matrix
        for(int i=0 ; i<2 ; i++)
        {
            for(int j=0 ; j<2 ; j++)
            {
                if(i==0)
                {
                    xMatrix[i][j]=consMatrix[j];
                    yMatrix[i][j]=coefMatrix[i][j];
                }
                else if(i==1)
                {
                    xMatrix[i][j]=coefMatrix[i][j];
                    yMatrix[i][j]=consMatrix[j];
                }
            }
        }
        
        int DY, DX;
        
        //calculating determinants
        for(int i=0 ; i<2 ; i++)
        {
            for(int j=0, k=1 ; j<2 ; j++)
            {
                DX=(xMatrix[j][j]*xMatrix[k][k])-(xMatrix[j][k]*xMatrix[k][j]);
                DY=(yMatrix[j][j]*yMatrix[k][k])-(yMatrix[j][k]*yMatrix[k][j]);
                break;
            }
            break;
        }
        
        double x = static_cast<double>(abs(DX))/abs(D);
        double y = static_cast<double>(abs(DY))/abs(D);
        
        cout << "Value of x is: " << x << endl;
        cout << "Value of y is: " << y << endl;
        
    }
    else
        cout << "As the determinant is 0, there is no solution for the equations\n";
        
    return 0;
}
