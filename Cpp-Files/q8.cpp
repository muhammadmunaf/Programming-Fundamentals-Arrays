/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>
#include <string>
#include <cctype>
#include <bits/stdc++.h>


using namespace std;
//Prototypes
void Count_Words(char [], int);
void Find_Word(char [], int);
void Uppercase(char [], int);
void Lowercase(char [], int);
void Palindrome(char [], int);
void lenght(char [], int);

int main()
{
    bool again=0;
    string s;
    int n=0 , option;
    char arr[1000];
  
    do{
        cout << "Enter a string\n";
      
        getline(cin,s);

        n = s.length();
     
        arr[n + 1];
      
        strcpy(arr, s.c_str()); //putting string into the char array
      
        for( int i=0 ; i<n ; i++)
        {
            if((arr[i]<'A'||arr[i]<'Z')&&(arr[i]<'a'||arr[i]>'z')&&arr[i]!=32&&arr[i]!=27) //checking if the input is alphabets only or not
                again=1;
            else
                again=0;
        }
    }while(again!=0);
    
    cout << "Which function do you want to perform? \n";
    cout << "1. Calculate lenght of string\n"
    << "2. Count number of words in string\n"
    << "3. Check if string is palindrome\n"
    << "4. Find a word in the array\n"
    << "5. Convert string in lowercase\n"
    << "6. Convert string in uppercase\n";
    cin >> option;
    
    switch(option)
    {
        case 1:
            lenght(arr,n);
            break;
        case 2:
            Count_Words(arr, n);
            break;
        case 3:
            Palindrome(arr, n);
            break;
        case 4:
            Find_Word(arr, n);
            break;
        case 5:
            Lowercase(arr, n);
            break;
        case 6:
            Uppercase(arr, n);
            break;
        default:
            cout << "Incorrect value entered\n";
            break;
    }
    
    return 0;
}

void Count_Words(char arr[], int n)
{
    int words=1; //it is initially 1 as the first word won't have a space before it
    
    for (int i=0 ; i<=n ; i++)
    {
        if(arr[i]==32)
            words++;
    }
    
    cout << "Number of words are " << words << endl;
}

void Find_Word(char arr[], int n)
{
    for (int i=0 ; i<=n ; i++)
    {
        if(arr[i]==32)
        {
            cout << "The position of the word is " << (i+1) << endl; // +1 as it starts from 0
            break;
        }
        
    }
}

void Palindrome(char arr[], int n)
{
    bool pal;
    
    for(int i=0 , j=n-1; i<n && j!=0 ; )
    {
    
        if(arr[i++]==arr[j--]) {
            pal=true;
            cout<<pal<<"\n";
        }
        else 
        {
            pal= false;
            break;
        }
            
    }
    if(pal==true)
        cout << "The string is palindrome\n";
    else
        cout << "The string is not palindrome\n";
}

void Uppercase(char arr[], int n)
{
    for (int i=0 ; i<=n ; i++)
    {
        arr[i]=toupper(arr[i]);
    }
    
    for (int i=0 ; i<=n ; i++)
        cout << arr[i];
}

void Lowercase(char arr[], int n)
{
    for (int i=0 ; i<=n ; i++)
    {
        arr[i]=tolower(arr[i]);
    }
    
    for (int i=0 ; i<=n ; i++)
        cout << arr[i];
}

void lenght(char arr[], int n)
{

    cout << "Lenght is " << n << endl;
}


