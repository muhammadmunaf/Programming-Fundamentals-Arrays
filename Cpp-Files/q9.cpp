/* Muhammad Munaf Ul Hassan
   i200891 */
   
#include <iostream>

using namespace std;
void show(char[][3]);
void putval(char[][3], char, char);
int checkWin(char[][3]);
char converter(int);
char generate(char [][3]);

int main()
{
    char arr[3][3] = {
        {'1','2','3'} , {'4','5','6'} , {'7','8','9'}
    };
    char option, ai, num, num1;
    int count=0;
    
    cout << "You will be playing against the computer\n";
    
    cout << "Which one do you want to select? (O or X)\n";
    int check=0, win=0;
    do{
        cin >> option;
        switch(option)
        {
            case 'O':
                ai='X';
                check=1;
                break;
            case 'X':
                ai='O';
                check=1;
                break;
            default:
                cout << "You selected an invalid option\nSelect again from X or O.\n";
                break;
        }
    }while(check!=1);
    
    show(arr);
    
    do{
        cout << "Enter the number of the position you want to select\n";
        cin >> num;
        
        putval(arr, num, option); //to add user's value to the board
        
        win=checkWin(arr);

        num1 = generate(arr); //generating a value for the computer's turn
        
        putval(arr, num1, ai); //to add computer's value to the board
        
        win=checkWin(arr);
        
        show(arr);
        
        count++;
        
        if(count==9)
        {
            cout << "It is a tie\n";
            exit(0);
        }
        
    }while(win!=1);
    
    return 0;
}

void show(char arr[][3]) //displaying the board
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void putval(char arr[][3], char n, char ch) //addind values to the board
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]==n)
            {
                arr[i][j]=ch;
            }    
        }
    }

}

int checkWin(char arr[][3]) //checking whether it is a win yet
{
    if(
        (arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2])||
        (arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2])||
        (arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2])||
        (arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0])||
        (arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1])||
        (arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2])||
        (arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])||
        (arr[2][0]==arr[1][1]&&arr[1][1]==arr[0][2])
        )
        return 1;
    else
        return 0;
}

char generate(char arr[][3]) //generating numbers for the computer's turn
{
    int num1, check=0;
    char ch;
    srand (time(NULL));
    do{
        do{
            num1 = rand()%(10);
        }while(num1<1 || num1>9);
        
        ch=converter(num1);
    
        for(int i=0 ; i<3 ; i++)
        {
            for(int j=0 ; j<3 ; j++)
            {
                if(arr[i][j]==num1)
                    check=1;
                else
                    check=0;
            }
        }
    }while(check==1);
    
    //cout << num1 << endl;
    
    return ch;
}

char converter(int n) //converting integer values to character
{
    char ch;
    
    switch(n)
    {
        case 1:
            ch='1';
            break;
        case 2:
            ch='2';
            break;
        case 3:
            ch='3';
            break;
        case 4:
            ch='4';
            break;
        case 5:
            ch='5';
            break;
        case 6:
            ch='6';
            break;
        case 7:
            ch='7';
            break;
        case 8:
            ch='8';
            break;
        case 9:
            ch='9';
            break;
        default:
            break;
    }
    
    return ch;
}











