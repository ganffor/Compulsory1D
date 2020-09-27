#include <iostream>
#include <string>

char one;
char two;
char three;
char four;
char five;
char six;
char seven;
char eight;
char nine;


bool playerOneWin() //win conditions for player 1
{
    bool gameWon{ false };

    if (one == 'O' && two == 'O' && three == 'O') {
        gameWon = true;
    }
    else if (one == 'O' && four == 'O' && seven == 'O')
    {
        gameWon = true;
    }
    else if (one == 'O' && five == 'O' && nine == 'O')
    {
        gameWon = true;
    }
    else if (seven == 'O' && eight == 'O' && nine == 'O')
    {
        gameWon = true;
    }
    else if (three == 'O' && six == 'O' && nine == 'O')
    {
        gameWon = true;
    }
    else if (seven == 'O' && five == 'O' && three == 'O')
    {
        gameWon = true;
    }
    else if (four == 'O' && five == 'O' && six == 'O')
    {
        gameWon = true;
    }
    else if (two == 'O' && five == 'O' && eight == 'O')
    {
        gameWon = true;
    }
    return gameWon;
}

bool playerTwoWin() //win conditions for player 2
{
    bool gameWon{ false };

    if (one == 'X' && two == 'X' && three == 'X') {
        gameWon = true;
    }
    else if (one == 'X' && four == 'X' && seven == 'X')
    {
        gameWon = true;
    }
    else if (one == 'X' && five == 'X' && nine == 'X')
    {
        gameWon = true;
    }
    else if (seven == 'X' && eight == 'X' && nine == 'X')
    {
        gameWon = true;
    }
    else if (three == 'X' && six == 'X' && nine == 'X')
    {
        gameWon = true;
    }
    else if (seven == 'X' && five == 'X' && three == 'X')
    {
        gameWon = true;
    }
    else if (four == 'X' && five == 'X' && six == 'X')
    {
        gameWon = true;
    }
    else if (two == 'X' && five == 'X' && eight == 'X')
    {
        gameWon = true;
    }
    return gameWon;
}

bool gameDraw()  //draw condition.
{
    bool gameDraw{ false };

    if (one != '1' && two != '2' && three != '3' && four != '4' && five != '5' && six != '6' && seven != '7' && eight != '8' && nine != '9') {
        gameDraw = true;
    }

    return gameDraw;
}

int calculateWinner() //decides whether there's a winner, or there's a draw.
{

    int winner{ 0 };

    if (playerOneWin() == true)
    {
        winner = 1;
    }
    else if (playerTwoWin() == true)
    {
        winner = 2;
    }
    else if (gameDraw() == true)
    {
        winner = 3;
    }

    return winner;
}

bool playerOneInput() //input function. also checks if space is occupied before running the switch case.
{
    char input;

    std::cin >> input;
    std::cin.ignore(32767, '\n');   //ignores extraneous input

    if (input == '1' && one == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    if (input == '1' && one == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '2' && two == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '2' && two == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '3' && three == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '3' && three == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '4' && four == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '4' && four == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '5' && five == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '5' && five == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '6' && six == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '6' && six == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '7' && seven == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '7' && seven == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '8' && eight == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '8' && eight == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '9' && nine == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '9' && nine == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input != '9')
    {
        std::cout << "Please enter a number between 1 and 9." << std::endl;
        return false;
    }
    else
    {
        switch (input)
        {
        case '1':
            one = 'O';
            break;
        case '2':
            two = 'O';
            break;
        case '3':
            three = 'O';
            break;
        case '4':
            four = 'O';
            break;
        case '5':
            five = 'O';
            break;
        case '6':
            six = 'O';
            break;
        case '7':
            seven = 'O';
            break;
        case '8':
            eight = 'O';
            break;
        case '9':
            nine = 'O';
            break;
        }
        return true;
    }
}

int playerOne() //loops input of player 1 until input is valid
{
    std::cout << std::endl;
    std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
    std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
    std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
    std::cout << std::endl;
    std::cout << "Player 1" << std::endl;

    do {
        std::cout << "Enter a number from 1 to 9 in an unoccupied field" << std::endl;
    } while (playerOneInput() == false);

    calculateWinner();      //checks the win conditions. Game continues while value is 0.

    return 0;
}

bool playerTwoInput() //checks for valid input before running the switch case. (Whether space is occupied or if there's a letter input)
{
    char input;

    std::cin >> input;
    std::cin.ignore(32767, '\n');   //ignores extraneous input

    if (input == '1' && one == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '1' && one == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '2' && two == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '2' && two == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '3' && three == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '3' && three == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '4' && four == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '4' && four == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '5' && five == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '5' && five == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '6' && six == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '6' && six == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '7' && seven == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '7' && seven == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '8' && eight == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '8' && eight == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '9' && nine == 'O')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input == '9' && nine == 'X')
    {
        std::cout << "Space is occupied." << std::endl;
        return false;
    }
    else if (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input != '9')
    {
        std::cout << "Please enter a number between 1 and 9." << std::endl;
        return false;
    }
    else
    {
        switch (input)
        {
        case '1':
            one = 'X';
            break;
        case '2':
            two = 'X';
            break;
        case '3':
            three = 'X';
            break;
        case '4':
            four = 'X';
            break;
        case '5':
            five = 'X';
            break;
        case '6':
            six = 'X';
            break;
        case '7':
            seven = 'X';
            break;
        case '8':
            eight = 'X';
            break;
        case '9':
            nine = 'X';
            break;
        }
        return true;
    }
}

int playerTwo() //loops input of player 2 until input is valid
{

    std::cout << std::endl;
    std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
    std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
    std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
    std::cout << std::endl;
    std::cout << "Player 2" << std::endl;

    do {
        std::cout << "Enter a number from 1 to 9 in an unoccupied field.";
    } while (playerTwoInput() == false);

    calculateWinner();      //checks the win conditions

    return 0;
}

int ticTacToe() //loops player one's turn, and player 2's turn until there's a winner, or there's a draw.
{
    one = '1';
    two = '2';
    three = '3';
    four = '4';
    five = '5';
    six = '6';
    seven = '7';
    eight = '8';
    nine = '9';

    do {
        playerOne();
        if (calculateWinner() == 1 || calculateWinner() == 3)
        {
            break;                                                  //loop breaks early if player 1 wins the game or there's a draw
        }
        playerTwo();
    } while (calculateWinner() == 0);

    if (calculateWinner() == 1)
    {
        std::cout << std::endl;
        std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
        std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
        std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
        std::cout << std::endl;
        std::cout << "Player 1 wins the game!" << std::endl;
    }
    else if (calculateWinner() == 2)
    {
        std::cout << std::endl;
        std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
        std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
        std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
        std::cout << std::endl;
        std::cout << "Player 2 wins the game!" << std::endl;
    }
    else if (calculateWinner() == 3)
    {
        std::cout << std::endl;
        std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
        std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
        std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
        std::cout << std::endl;
        std::cout << "Draw." << std::endl;
    }

    return 0;
}

bool playAgain()
{
    bool playAgain{ true };
    char input;

    std::cout << "Play again? y/n" << std::endl;
    do {
        std::cin >> input;
    } while (input != 'n' && input != 'y');

    if (input == 'y') {
        playAgain = true;
    }
    else if (input == 'n') {
        playAgain = false;
    }

    return playAgain;
}

int main()
{
    std::cout << "\033[32m" << "*** Welcome to Tic Tac Toe ***" << std::endl;

    do {
        ticTacToe();                 //loops the game
    } while (playAgain() == true);   //while the player inputs "y" at the end of each game
}