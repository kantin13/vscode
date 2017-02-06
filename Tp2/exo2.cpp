#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;

int nb_chiffre(int nb)
{
    int c;

    c = 0;
    while (nb != 0)
    {
        nb /= 10;
        c += 1;
    }
    return (c);
}

int main()
{
    int nb;

    cout << "Entrez un nombre: " << endl;
    cin >> nb;
    cout << nb << " a " << nb_chiffre(nb) << " chiffre(s)" << endl;

    return (0);
}