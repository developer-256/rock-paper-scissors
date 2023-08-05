#include <iostream>
#include <ctime>
using namespace std;

int wins = 0;
int loses = 0;
int draws = 0;

void rock();
void paper();
void scissors();
void game();
void compare(int x);
int computer_choice();
void show_choices(int x, int y);
void check_score();

int main()
{
    int choice = 0;
    do
    {
        cin.clear();
        fflush(stdin);

        cout << "________________________________\n";
        cout << "|---------( Main Menu )--------|\n";
        cout << "| Choose one of the following: |\n";
        cout << "********************************\n";
        cout << "| 1: Play Game                 |\n";
        cout << "| 2: Check Score               |\n";
        cout << "| 3: Exit                      |\n";
        cout << "********************************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls"); // to clear console
            game();
            break;
        case 2:
            system("cls");
            check_score();
            break;
        case 3:
            system("cls");
            cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
            cout << "%%%% (Thanks for playing our game) %%%%%\n";
            cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
            break;

        default:
            system("cls");
            cout << "Invalid Input\n";
            break;
        }
    } while (choice != 3);

    return 0;
}

void rock()
{

    cout << "    _______\n";
    cout << "---'   ____)\n";
    cout << "      (_____)\n";
    cout << "      (_____)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}
void paper()
{
    cout << "     _______\n";
    cout << "---'    ____)____\n";
    cout << "           ______)\n";
    cout << "          _______)\n";
    cout << "         _______)\n";
    cout << "---.__________)\n";
}
void scissors()
{
    cout << "    _______\n";
    cout << "---'   ____)____\n";
    cout << "          ______)\n";
    cout << "       __________)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}

void game()
{
    int user_choice = 0;
    do
    {
        cin.clear();
        fflush(stdin);

        cout << "________________________________\n";
        cout << "| Choose one of the following: |\n";
        cout << "********************************\n";
        cout << "| 1: Rock                      |\n";
        cout << "| 2: Paper                     |\n";
        cout << "| 3: Scissors                  |\n";
        cout << "| 4: Exit                      |\n";
        cout << "********************************\n";
        cout << "Enter your choice: ";
        cin >> user_choice;

        switch (user_choice)
        {
        case 1:
        case 2:
        case 3:
            system("cls");
            compare(user_choice);
            break;
        case 4:
            system("cls");
            break;

        default:
            system("cls");
            cout << "Invalid Input\n";
            break;
        }
    } while (user_choice != 4);
    return;
}

void compare(int x)
{
    int y = computer_choice();
    show_choices(x, y);

    if (x == y)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%%( It's a Draw )%%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%\n";
        draws++;
    }
    else if (x == 1 && y == 2)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%( Computer Wins! Paper wraps the rock )%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        loses++;
    }
    else if (x == 1 && y == 3)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%%( You Win! Rock smashes scissors )%%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        wins++;
    }
    else if (x == 2 && y == 1)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%%( You Win! Paper wraps the rock )%%%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        wins++;
    }
    else if (x == 2 && y == 3)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%( Computer Wins! Scissors cuts the paper )%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        loses++;
    }
    else if (x == 3 && y == 1)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%%( Computer Wins! Rock smashes scissors )%%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        loses++;
    }
    else if (x == 3 && y == 2)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "%%%( You Win! Scissors cuts the paper )%%%\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        wins++;
    }
}

int computer_choice()
{
    srand(time(NULL));
    return (rand() % 3 + 1);
}

void show_choices(int x, int y)
{
    cout << "Your choice: ";
    switch (x)
    {
    case 1:
        cout << "Rock\n\n";
        rock();
        cout << "\n\n";
        break;
    case 2:
        cout << "Paper\n\n";
        paper();
        cout << "\n\n";
        break;
    case 3:
        cout << "Scissors\n\n";
        scissors();
        cout << "\n\n";
        break;
    }

    cout << "Computer's choice: ";
    switch (y)
    {
    case 1:
        cout << "Rock\n\n";
        rock();
        cout << "\n\n";
        break;
    case 2:
        cout << "Paper\n\n";
        paper();
        cout << "\n\n";
        break;
    case 3:
        cout << "Scissors\n\n";
        scissors();
        cout << "\n\n";
        break;
    }
}

void check_score()
{
    cout << "Total wins: " << wins << endl;
    cout << "Total loses: " << loses << endl;
    cout << "Total draws: " << draws << endl;
}
