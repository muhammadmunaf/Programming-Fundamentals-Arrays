/* Muhammad Munaf Ul Hassan
   i200891 */

#include <iostream>

using namespace std;

int main()
{
    //taking sample data as no requirement is given in the question
    
    int arr1[4] = {1,5,8,19};
    int arr2[4] = { 7,10,65,66};
    
    int n=4;
    
    //swapping values of array 1
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr1[i]>arr2[j])//if a value is less than the next value in first array, this swaps the values
            {
                int temp = arr2[j];
                arr2[j]=arr1[i];
                arr1[i] = temp;               
            }
        }
    }
    
    //swapping values of array 2
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr2[i]<arr2[j]) //if a value is less than the next value in first array, this swaps the values
            {
                int temp = arr2[j];
                arr2[j]=arr2[i];
                arr2[i] = temp;
            }
        }
    }
    
    //output
    for(int i = 0 ; i<n ; i++)
    {
        cout << arr1[i] << " " << arr2[i] << endl;
    }
    
    return 0;
}





