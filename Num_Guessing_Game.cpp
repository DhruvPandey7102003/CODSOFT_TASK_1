// create a program that generates a random numbers and asks the user to guess it.provide feedback on whether the guess is too high or too low until the user guesses the correct number.

#include <iostream>
#include <cstdlib> //--> --> this library includes random function i.e.,rand(),srand().

using namespace std;
int main()
{
    cout << "\t\t\t Welcome to the Number Guessing Game!" //--> --> \t will take 4 char space so that our heading
                                                          // should pop up in the middle

         << endl;

    cout << "In this game You have to guess a number between 1 and 100."
            "You will get chances based upon your"
         << " " << endl
         << "difficulty level that you pick. Good Luck!" << endl;

    while (true)
    {
        cout << "\nEnter the diificulty level: \n";
        cout << "\tPress 1 for Easy Level" << endl;
        cout << "\tPress 2 for Medium Level" << endl;
        cout << "\tPress 3 for Hard Level" << endl;
        cout << "\tPress 0 for Exit the game" << endl;

        // this will ask the user to select difficulty level.
        int difficulty_level;
        cout << "Enter the Number" << endl;
        cin >> difficulty_level;

        // Now we have to generate a magic number that the user will guess.
        int magic_number = (rand() % 100) + 1;
        int player_choice;

        // difficulty level = 1 then.
        if (difficulty_level == 1)
        {
            cout << "You have 10 chances to guess the magic number between 1 and 100" << endl;
            int chance_left = 10;

            for (int i = 0; i <= 10; i++)
            {
                cout << "Enter the number" << endl;
                cin >> player_choice;

                if (player_choice == magic_number)
                {
                    cout << "Hurray! You won,"
                         << " " << player_choice << " "
                         << "is the correct number"
                         << endl;
                    cout << "\t\t thanks for playing!" << endl;
                    break;
                }
                else
                {
                    cout << "Wrong Guess"
                         << " " << player_choice << " "
                         << "is not the correct number\n";
                    if (player_choice > magic_number)
                    {
                        cout << "the magic number is smaller than the number you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "the magic number is greater than the number you have chosen"
                             << endl;
                    }
                    chance_left--;
                    cout << chance_left << " "
                         << "chance_left." << endl;
                    if (chance_left == 0)
                    {
                        cout << "You ran out of the chances magic number was"
                             << " " << magic_number
                             << endl;
                        cout << "\nBetter luck Next Time!";
                    }
                }
            }
        }

        // difficulty level = 2 then.
        else if (difficulty_level == 2)
        {
            cout << "You have 8 chances to guess the magic number between 1 and 100" << endl;
            int chance_left = 8;
            for (int i = 0; i <= 8; i++)
            {
                cout << "Enter the number" << endl;
                cin >> player_choice;

                if (player_choice == magic_number)
                {
                    cout << "Hurray! You won,"
                         << " " << player_choice << " "
                         << "is the correct number"
                         << endl;
                    cout << "\t\t thanks for playing!" << endl;
                    break;
                }
                else
                {
                    cout << "Wrong Guess"
                         << " " << player_choice << " "
                         << "is not the correct number\n";
                    if (player_choice > magic_number)
                    {
                        cout << "the magic number is smaller than the number you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "the magic number is greater than the number you have chosen"
                             << endl;
                    }
                    chance_left--;
                    cout << chance_left << " "
                         << "chance_left." << endl;
                    if (chance_left == 0)
                    {
                        cout << "You ran out of the chances magic number was"
                             << " " << magic_number
                             << endl;
                        cout << "\nBetter luck Next Time!";
                    }
                }
            }
        }

        // difficulty level = 3 then.
        else if (difficulty_level == 3)
        {
            cout << "You have 5 chances to guess the magic number between 1 and 100" << endl;
            int chance_left = 5;
            for (int i = 0; i < 5; i++)
            {
                cout << "Enter the number" << endl;
                cin >> player_choice;

                if (player_choice == magic_number)
                {
                    cout << "Hurray! You won,"
                         << " " << player_choice << " "
                         << "is the correct number"
                         << endl;
                    cout << "\t\t thanks for playing!" << endl;
                }
                else
                {
                    cout << "Wrong Guess"
                         << " " << player_choice << " "
                         << "is not the correct number\n";
                    if (player_choice > magic_number)
                    {
                        cout << "the magic number is smaller than the number you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "the magic number is greater than the number you have chosen"
                             << endl;
                    }
                    chance_left--;
                    cout << chance_left << " "
                         << "chance_left." << endl;
                    if (chance_left == 0)
                    {
                        cout << "You ran out of the chances magic number was"
                             << " " << magic_number
                             << endl;
                        cout << "\nBetter luck Next Time!";
                    }
                }
            }
        }

        // for exiting the game.
        else if (difficulty_level == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid choice Enter a valid choice to play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}