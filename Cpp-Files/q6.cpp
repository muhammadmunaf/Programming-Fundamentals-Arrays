/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>

using namespace std;
//Prototypes
void Count(int [], int);
void Partition(int [], int);
void Duplication(int [], int);
void Circular(int [], int);
void Search(int [], int);
void next_XOR(int [], int);
void circular_Shift(int [], int);


int main()
{
	int n=0, option;

	cout << "Enter the size of the array\n";
	cin >> n;
	while(n<1)
	{
	    cout << "Enter a number greater than 0\n";
	    cin >> n;
	}
	
	int arr[n];
	
	cout << "Enter the values of the array (1 by 1)\n";
	for (int i=0 ; i<n ;i++)
	{
		cin >> arr[i];
	}
	
	cout << "Which of the following operations do you want to perform? \n";
	
	cout << "1. Count\n"
	<< "2. Parition\n"
	<< "3. Next XOR\n"
	<< "4. Frequecy of elements\n"
	<< "5. Cicular\n"
	<< "6. Search\n"
	<< "7. Shift Circular\n";
	
	cin >> option;
	switch(option)
	{
	    case 1:
	        Count(arr, n);
	        break;
	    case 2:
	        Partition(arr, n);
	        break;
	    case 3:
	        next_XOR(arr, n);
	        break;
	    case 4:
	        Duplication(arr, n);
	        break;
	    case 5:
	        Circular(arr, n);
	        break;
	    case 6:
	        Search(arr, n);
	        break;
	    case 7:
	        circular_Shift(arr, n);
	        break;
	    default:
	        cout << "Invalid value entered\n";
	        break;
	        
	}
	
	return 0;
	
}

void Count(int arr[], int n)
{
    int x=0, count_num=0;
    
    cout << "Enter the number you want to check occurance of\n";
    cin >> x; //the number we want to check occurance of
    
    for (int i=0 ; i<n ; i++)
    {
        if(arr[i]==x)//comparing x with all values and if they match, it counts it
        {
            count_num++;
        }
    }
    
    cout << "The number of occurance of that number is " << count_num << endl;
}

void Partition(int arr[], int n)
{
    int x = arr[0];
    int arr_test[n]; 
    
    for ( int i=0 ; i<n ; i++) 
    {
        if(i==0)
            continue;
        
        if(x>arr[i]) 
            arr_test[i]=arr[i];
        else if(x<arr[i]) 
            arr_test[i]=arr[i];
        else if(x==arr[i])
            arr_test[i]=x;
        
    }
    
    for(int i=0 ; i<n ; i++)
	arr[i]=arr_test[n];

    //output
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void Duplication(int arr[], int n)
{
    int check[n];
    
    for(int i=0 ; i<n ; i++)
    {
        check[i]=0;
    }
    
    for(int i=0 ; i<n ; i++)
    {
        if(check[i]==1)
        {
            continue;
        }
        
        int freq=1;
        
        for(int j=(i+1) ; j<n ; j++)
        {
            if (arr[i]==arr[j])
            {
                check[j]=1;
                freq++;
            }
        }
        
        cout<< "frequency of " << arr[i] << " is: " << freq << endl;
   }
}

void Circular(int arr[], int n)
{
    int circular[n];
    
    for(int i=0 ; i<n ; i++)
    {
        if(i+1==(n-1))
            circular[i]=arr[i+1] + arr[0];
        else if(i+1==(n))
            circular[i]=arr[0] + arr[1];
        else
        circular[i] = arr[i+1] + arr[i+2];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        arr[i]=circular[i];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

void Search(int arr[], int n)
{
    int num=0 ,save=0;
    
    cout << "Input the number you want to search\n";
    cin >> num;
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==num)
        {
            save=i;
            break;
        }
    }
    
    if(save!=0)
        cout << "Index of that element is " << save << endl;
    else
        cout << "-1" << endl;
    
}

void next_XOR(int arr[], int n)
{
    int count=0;
    
    for(int i=0 ; i<(n-2) ; i++)
    {
        if(arr[i]==(arr[i+1]^arr[i+2]))
        {
            count++;
        }
    }
    
    cout << "The count of elements that are same is " << count << endl;
}

void circular_Shift(int arr[], int n)
{
    int shift;
    
    int arr_shift[n];
    
    cout << "Enter the shift number\n";
    cin >> shift; 
    
    int x=n-shift;
    for(int i=0; x<n;x++,i++) 
    {
        arr_shift[i]=arr[x];
    }
    
    for(int i=0, y=shift ; i<n-shift ; i++,y++)
    {
        arr_shift[y]=arr[i];
    }
    
    
    for(int i=0 ; i<n ; i++)
        cout << arr_shift[i] << " ";
}















