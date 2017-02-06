#include <iostream> // pour std::cout
#include <string>   // pour std::string
#include <stdlib.h>
#include <time.h>

using namespace std;

int generate_nb()
{
    int nb;

    srand (time(NULL));
    nb = rand() % 100 + 1;
    return (nb);
}

void loop_game(int nb, int &score)
{
    int win;
    int nb_select;

    win = 0;
    while(win == 0)
    {
        cout << "Entrez un nombre: " << endl;
        cin >> nb_select;
        if (nb_select == nb)
            win = 1;
        else if (nb_select > nb)
            cout << "C'est moins !" << endl;
        else
            cout << "c'est plus !" << endl;
        score += 1;
    }
}

int main()
{
    int score;

    score = 0;
    loop_game(generate_nb(), score);
    cout << "Vous avez trouvé en " << score << " coups." << endl;
    return (0);
}