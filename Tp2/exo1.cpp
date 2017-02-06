#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;

//ex1 ----------------------
bool est_premier(int a)
{
    int i;

    i = 2;
    while (i < a)
    {
        if (a % i == 0)
            return (false);
        i += 1;
    }
    return (true);
}

void plage_premier(int min, int max)
{
    while (min <= max)
    {
        if (est_premier(min) == true)
            cout << min << " est premier" << endl;
        else
            cout << min << " n'est pas premier" << endl;
        min += 1;
    }
}

int main()
{
    int min;
    int max;

    cout << "Entrez une plage: " << endl;
    cin >> min;
    cin >> max;
    plage_premier(min, max);
    return (0);
}