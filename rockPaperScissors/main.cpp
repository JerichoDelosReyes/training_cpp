#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class DisplayContainer
{
public:
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int playerchoice;
    int sizeOfChoice = sizeof(choices) / sizeof(choices[0]);
    int opponent;

    void header()
    {
        cout << endl;
        cout << "*************|ROCK PAPER SCISSORS|*************" << "\n";
    }

    void displayChoices()
    {
        cout << "Choices: Rock (1), Paper (2), Scissors (3)" << "\n";
    }

    void displayYourChoice()
    {
        cout << "Enter choice: ";
        cin >> playerchoice;

        if (playerchoice < 1 || playerchoice > 3)
        {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            displayYourChoice();
            return;
        }

        cout << "You picked: " << choices[playerchoice - 1] << '\n';
    }

    void displayOpponentChoice()
    {
        opponent = rand() % sizeOfChoice + 1;
        cout << "Opponent picked: " << choices[opponent - 1] << '\n'
             << endl;
    }
};

class GameFunction : public DisplayContainer
{
public:
    int scorePlayer = 0;
    int scoreOpponent = 0;
    char restart;
    int rounds = 5;
    bool status = false;

    void playerWon()
    {
        scorePlayer++;
    }

    void opponentWon()
    {
        scoreOpponent++;
    }

    void displayScore()
    {
        cout << "Your score: " << scorePlayer << endl;
        cout << "Opponent's score: " << scoreOpponent << endl;
    }

    void resetScore()
    {
        scorePlayer = 0;
        scoreOpponent = 0;
    }

    void functionWinLost()
    {
        if (playerchoice == opponent)
        {
            cout << "Tied.\n"
                 << endl;
        }
        else if ((playerchoice == 1 && opponent == 2) ||
                 (playerchoice == 2 && opponent == 3) ||
                 (playerchoice == 3 && opponent == 1))
        {
            cout << "You lost.\n"
                 << endl;
            opponentWon();
            status = true;
        }
        else
        {
            cout << "You win.\n"
                 << endl;
            playerWon();
            status = true;
        }
        displayScore();

        if (scorePlayer == 3)
        {
            cout << endl;
            cout << "YOU WIN! \n";
            cout << "Play again? (y/n): ";
            cin >> restart;
            restart = tolower(restart);
            if (restart == 'y')
            {
                scoreOpponent = 0;
                scorePlayer = 0;
            }
        }
        else if (scoreOpponent == 3)
        {
            cout << endl;
            cout << "YOU LOST!\n";
            cout << "Play again? (y/n): ";
            cin >> restart;
            restart = tolower(restart);
            if (restart == 'y')
            {
                scoreOpponent = 0;
                scorePlayer = 0;
            }
        }
    }

    void displayAll()
    {
        header();
        displayChoices();
        displayYourChoice();
        displayOpponentChoice();
    }
};

int main()
{
    srand(time(0));

    GameFunction game;

    do
    {
        game.displayAll();
        game.functionWinLost();
    } while (game.status = true);

    return 0;
}
