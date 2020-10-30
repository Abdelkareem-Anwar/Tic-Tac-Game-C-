#include <iostream>

using namespace std;
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void Draw()
{
    /* This function used for drawing the shape */
    cout << "\tPlayer1[X]\t\t" << "\t\tPlayer2[O]\n";
    cout << endl;
    cout << "\t\t" << arr[0][0] <<"\t\t"<< arr [0][1] << "\t\t" << arr[0][2] << endl;
    cout << endl;
    cout << "\t\t" << arr[1][0] <<"\t\t"<< arr [1][1] << "\t\t" << arr[1][2] << endl;
    cout << endl;
    cout << "\t\t" << arr[2][0] <<"\t\t"<< arr [2][1] << "\t\t" << arr[2][2] << endl;
}
void inputs()
{
    /* This function used for taking fill the field */
    int x;
    cout << "Enter the no.\n";
    cin >> x;
    switch (x)
    {
        case 1: arr[0][0]=player;
        break;
        case 2: arr[0][1]=player;
        break;
        case 3: arr[0][2]=player;
        break;
        case 4: arr[1][0]=player;
        break;
        case 5: arr[1][1]=player;
        break;
        case 6: arr[1][2]=player;
        break;
        case 7: arr[2][0]=player;
        break;
        case 8: arr[2][1]=player;
        break;
        case 9: arr[2][2]=player;
        break;
    }
}
void change_player()
{
    /* This function used for change the player turn */
    if(player=='X')
        player='O';
    else
        player='X';
}
char win()
{
    /* This function used for knowing who's the winner */
    // Player1[X]
    if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X')
        return 'X';
    if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X')
        return 'X';
    if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')
        return 'X';
    if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')
        return 'X';
    if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')
        return 'X';
    // Player2[O]
    if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')
        return 'O';
    if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')
        return 'O';
    if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O')
        return 'O';
    if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')
        return 'O';
    if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')
        return 'O';
}
int main()
{
    cout << "\t\t\t      TIC-TAC \t\t\t\n";
    Draw();
    while(1)
    {
        inputs();
        Draw();
        if(win() == 'X')
        {
            cout << "Player 1 wins";
            break;
        }
        else if (win()=='O')
        {
            cout << "Player 2 wins";
            break;
        }
        change_player();
    }
    return 0;
}
