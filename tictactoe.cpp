#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player no-> " << player << "\nEnter a position Number  onbord :  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';
        switch(choice)
        {
         case 1:        if(square[1]=='1')
                        {
                          square[1] = mark;
                        }
                        else
                        {
                            player--;
                            cout<<"Invalid move\n";
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                           cin.get();
                           continue;
                        }
                    break;
       case 2 :         if( square[2]=='2')
                        {
                            square[2] = mark;
                        }
                        else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                    break;
       case 3:         if (square[3] == '3')
                       {
                           square[3] = mark;
                       }
                       else
                       {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                           cin.get();
                            continue;
                        }
                    break;
      case 4:       if( square[4] == '4')
                    {
                        square[4] = mark;
                    }
                    else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                    break;
        case 5:     if (square[5] == '5')
                    {
                        square[5] = mark;
                    }
                    else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                    break;
          case 6:    if (square[6] == '6')
                    {
                        square[6] = mark;
                    }
                    else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                    break;
         case 7:    if(square[7] == '7')
                     {
                         square[7] = mark;
                    }
                    else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }break;
        case 8: if(square[8] == '8')
                    {
                        square[8] = mark;
                    }else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                    break;
        case 9:   if (square[9] == '9')
                   {

                   square[9] = mark;
                   }   else
                        {
                            cout<<"Invalid move ";

                            player--;
                             cout<<"\n Please Press Enter \n";
                            cin.ignore();
                            cin.get();
                            continue;
                        }
                      break;
        default :
            cout<<"Invalid move ";
            cout<<"\nPlease press Enter\n";
            player--;
            cin.ignore();
            cin.get();

        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/***************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
****************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    cout<<"______"<<endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "|__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "|   " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl ;
   cout<<"_____|_____|____"<<endl;
}
