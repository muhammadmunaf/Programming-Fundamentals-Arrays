/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>

using namespace std;

int main()
{
    int numberOfArrays=0, size=0;
    
    //taking input for array detials
    cout << "How many arrays do you want to make?\n";
    cin >> numberOfArrays;
    while(numberOfArrays<1)
    {
        cout << "Enter a number greater than 0\n";
        cin >> numberOfArrays;
    }
    
    cout << "What will be the size of the arrays?\n";
    cin >> size;
    while(size<1)
    {
        cout << "Enter a number greater than 0\n";
        cin >> size;
    }
    
    
    //taking input for array elements
    int array[numberOfArrays][size];
    
    for (int i=0 ; i<numberOfArrays ; i++)
    {
        cout << "Enter values of array " << (i+1) << endl;
        
        for(int j=0 ; j<size ; j++)
        {
            cin >> array[i][j];
        }
    }
    
    int totalSize = size*numberOfArrays;
    cout << "Total size of array " << totalSize << endl;
    
    int arryTotal[totalSize];
    
    for(int i=0, j=0, k=0 ; i<totalSize ; i++)
    {
        arryTotal[i]=array[k][j];
        if(j==(size))
        {
            j=0;
            k++;
        }
        j++;
    }
    
    
    for(int i=0 ; i<totalSize ; i++)
    {
        for(int j=0 ; j<totalSize ; j++)
        {
            if(i==j)
                continue;
            
            if(arryTotal[i]==arryTotal[j])
            {
                arryTotal[i]= -9999; //for any duplicate value it'll assign it -9999
            }
        }
    }
    
    
    for(int i=0 ; i<totalSize ; i++)
    {
        if(arryTotal[i]!= -9999)
            cout << arryTotal[i] << " " ;
    }
    
    return 0;
    
}











