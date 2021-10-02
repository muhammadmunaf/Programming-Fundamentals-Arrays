/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>

using namespace std;

//Prototypes
void Total_Marks(int [50][10], int, int);
void Avg_Marks(int [50][10], int, int);
void Stud_Highest(int [50][10], int, int);
void Stud_Lowest(int [50][10], int, int);



void Total_Marks(int arr[50][10], int n, int m)
{
    int id=0, save=0, total=0;
     
    cout << "Enter the ID of the student you want the total marks of\n";
    cin >> id;
    
    for (int i=0 ; i<n ; i++) //looking for matched ID
    {
        if(arr[i][0]==id)
        {
            save=i; //saves the index of the student which is called
            break;
        }
    }
    
    if(save==0) //incase ID entered is invalid
    {
        cout << "The ID you entered does not exist\n";
        exit(0);
    }
    
    for(int j=1 ; j<m ; j++)
    {
        total += arr[save][j]; //totaling marks of that student
    }
    
    cout << "Total marks of that student are " << total << endl;
}

void Avg_Marks(int arr[50][10], int n, int m)
{
    int avg=0, subject =0, total=0;
    
    do{ 
        cout << "Enter the coloumn number of the subject you want the average of\n";
        cin >> subject;
    }while(subject>(m));//to make sure a subject that hasn't been added is tried to access
    
    for(int i=0; i<n ; i++)
    {
        total+= arr[i][subject]; //adding marks of that subject
    }
    
    avg = total/n; //taking average
    
    cout << "The average of that subject is " << avg << endl;
}

void Stud_Highest(int arr[50][10], int n, int m)
{
    int id=0, save=0, max=0;
    
    cout << "Enter the ID of the student you want the total marks of\n";
    cin >> id;
    
    for (int i=0 ; i<n ; i++) //looking for matched ID
    {
        if(arr[i][0]==id)
        {
            save=i;
            break;
        }
    }
    
    if(save==0) //incase ID entered is invalid
    {
        cout << "The ID you entered does not exist\n";
        exit(0);
    }
    
    for(int j=1 ; j<m ; j++) //finding highest marks
    {
        if(arr[save][j]>max)
            max = arr[save][j];
    }
    
    cout << "Highest marks are " << max << endl;
}

void Stud_Lowest(int arr[50][10], int n, int m)
{
    int id=0, save=0, min=10000;
    
    cout << "Enter the ID of the student you want the total marks of\n";
    cin >> id;
    
    for (int i=0 ; i<n ; i++)
    {
        if(arr[i][0]==id)
        {
            save=i;
            break;
        }
    }
    
    if(save==0) //incase ID entered is invalid
    {
        cout << "The ID you entered does not exist\n";
        exit(0);
    }
    
    for(int j=1 ; j<m ; j++)
    {
        if(arr[save][j]<min)
            min = arr[save][j];
    }
    
    cout << "Lowest marks are " << min << endl;
}

int main()
{
    int n,m, option;
    int arr[50][10]; //taking 50 students and 10 subjects as the limit of this program
    
    cout << "Enter the number of students\n";
    cin >> n;
    while(n<1)
    {
        cout << "Enter a number greater than 0\n";
        cin >> n;
    }
    
    cout << "Enter the number of subjects\n";
    cin >> m;
    while(m<1)
    {
        cout << "Enter a number greater than 0\n";
        cin >> m;
    }
    m=m+1; //adding as the very first column is for student ID so need m more for subjects
    
    cout << "Enter the student ID and scores of subjects respectively\n";
    
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cout << "Which task you want to perform?\n";
    
    cout << "1. Total marks of specific student\n"
    << "2. Average marks of a subject\n"
    << "3. Highest marks of a student in any subject\n"
    << "4. Lowest marks of a student in any subject\n";
    cin >> option;
    
    switch(option)
    {
        case 1:
            Total_Marks(arr,n, m);
            break;
        case 2:
            Avg_Marks(arr, n, m);
            break;
        case 3:
            Stud_Highest(arr, n, m);
            break;
        case 4:
            Stud_Lowest(arr,n, m);
            break;
        default:
            cout << "Incorrect value entered\n";
            break;
    }
    
    return 0;
}


