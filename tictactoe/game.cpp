// tic tac toe
// ttteena
// 9/28/2023

#include "game.h"

ttt::Game::Game()
{
    // set width and height (in columns) for console window
    size_t consoleWidth = 100;
    size_t consoleHeight = 42;

    // Get the handle to the console screen buffer
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // set console window size
    SMALL_RECT windowSize = { 0, 0, consoleWidth - 1, consoleHeight - 1 };
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

    // set console buffer size to match window size
    COORD bufferSize = { consoleWidth, consoleHeight };
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    menu();
}

void ttt::Game::menu()
{
    std::string input;

    while (true)
    {
        title();
        std::cout << "  press 1 to play!" << std::endl;
        std::cout << "  press 2 for more info!" << std::endl;

        // get input from user
        std::cout << "\n  > ";
        std::getline(std::cin, input);

        std::cout << "input = " << input << std::endl;

        if (input == "1")
        {
            system("cls");
            std::cout << "start game";
            break;
        }
        else if (input == "2")
        {
            system("cls");
            instructions();
        }
        else
        {
            system("cls");
            continue;
        }
    }
}

void ttt::Game::title()
{
    std::cout << R"(
  ==================================================================================================
                      .----------------. .----------------. .----------------.
                     | .--------------. | .--------------. | .--------------. |
                     | |  _________   | | |     _____    | | |     ______   | |
                     | | |  _   _  |  | | |    |_   _|   | | |   .' ___  |  | |
                     | | |_/ | | \_|  | | |      | |     | | |  / .'   \_|  | |
                     | |     | |      | | |      | |     | | |  | |         | |
                     | |    _| |_     | | |     _| |_    | | |  \ `.___.'\  | |
                     | |   |_____|    | | |    |_____|   | | |   `._____.'  | |
                     | |              | | |              | | |              | |
                     | '--------------' | '--------------' | '--------------' |
                      '----------------' '----------------' '----------------'
                      .----------------. .----------------. .----------------.
                     | .--------------. | .--------------. | .--------------. |
                     | |  _________   | | |      __      | | |     ______   | |
                     | | |  _   _  |  | | |     /  \     | | |   .' ___  |  | |
                     | | |_/ | | \_|  | | |    / /\ \    | | |  / .'   \_|  | |
                     | |     | |      | | |   / ____ \   | | |  | |         | |
                     | |    _| |_     | | | _/ /    \ \_ | | |  \ `.___.'\  | |
                     | |   |_____|    | | ||____|  |____|| | |   `._____.'  | |
                     | |              | | |              | | |              | |
                     | '--------------' | '--------------' | '--------------' |
                      '----------------' '----------------' '----------------'
                      .----------------. .----------------. .----------------. 
                     | .--------------. | .--------------. | .--------------. |
                     | |  _________   | | |     ____     | | |  _________   | |
                     | | |  _   _  |  | | |   .'    `.   | | | |_   ___  |  | |
                     | | |_/ | | \_|  | | |  /  .--.  \  | | |   | |_  \_|  | |
                     | |     | |      | | |  | |    | |  | | |   |  _|  _   | |
                     | |    _| |_     | | |  \  `--'  /  | | |  _| |___/ |  | |
                     | |   |_____|    | | |   `.____.'   | | | |_________|  | |
                     | |              | | |              | | |              | |
                     | '--------------' | '--------------' | '--------------' |
                      '----------------' '----------------' '----------------' 
  ==================================================================================================
    )" << std::endl;
}

void ttt::Game::instructions()
{
    std::cout << R"(
  ==================================================================================================


                               welcome to tic tac toe!

                                the rules are simple!

                    each player takes turns placing a symbol on a tile.
                          player 1 uses X's and player 2 uses O's.

                            you cannot place your symbol on a 
                        tile that your opponent has already claimed.

                     the first player to get 3 of their symbols
                                in a row is the winner!

                        the row can be vertical, horizontal, or diagonal!





                            press any key to return to the main menu







  ==================================================================================================
    )" << std::endl;
}
