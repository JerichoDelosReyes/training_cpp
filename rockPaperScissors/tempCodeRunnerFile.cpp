        opponent = rand() % sizeOfChoice + 1;
        cout << "Opponent picked: " << choices[opponent - 1] << '\n'
             << endl;
    }
};

class GameFunction : public DisplayContainer
{
public:
