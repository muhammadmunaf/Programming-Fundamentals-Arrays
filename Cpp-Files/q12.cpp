/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>
#include <cmath>

using namespace std;
void max_min(int [], int);

int main()
{
    int n;
    
    cout << "Enter size of array\n";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter elements of array (1 by 1)\n";
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    
    max_min(arr,n);
    
    return 0;
}

void max_min(int arr[], int n)
{
    int max=0, min=100000, max_value, min_value, max_value1, min_value1;
    
    for (int i=0 ; i<(n-1) ; i++)
    {
        for(int j=0 ; j<(n-1) ; j++)
        {            
            if(abs(arr[j]-arr[i])>max &&j!=i)
            {
                max = abs(arr[j]-arr[i]);
                max_value=j;
                max_value1=i;
            }
            
            if(abs(arr[j]-arr[i])<min &&j!=i)
            {
                min = abs(arr[j]-arr[i]);
                min_value=j;
                min_value1=i;
            }
        }
    }
    
    cout << "Elememts having biggest difference are " << arr[max_value] << ", " << arr[max_value1] << endl;
    cout << "Elements having least difference are " << arr[min_value] << ", " << arr[min_value1] << endl;
}