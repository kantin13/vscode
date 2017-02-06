#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;

void decoupe(int nb, int &c1, int &c2)
{
    c1 = nb / 100;
    c2 = nb % 100;
}

int jour(int j, int m, int a)
{
    int f;
    int ns;
    int as;

    decoupe(a, ns, as);
    cout << ns << "/" << as << endl;
    if (m >= 3)
        m = m - 2;
    else
    {
        m = m + 10;
        a -= 1;
    }
    f = (j + as + as / 4 - 2 * ns + ns / 4 + (26 * m - 2) / 10) % 7;
    cout << f << endl;
    return (f);
}

string jour_lettre(int j)
{
    switch (j)
    {
    case 0:
        return ("Lundi");
    case 1:
        return ("Mardi");
    case 2:
        return ("Mercredi");
    case 3:
        return ("Jeudi");
    case 4:
        return ("Vendredi");
    case 5:
        return ("Samedi");
    case 6:
        return ("Dimanche");
    }
}

string conversion(int j, int m, int a)
{
    return (jour_lettre(jour(j, m, a)));
}

int main()
{
    int j, m, a;

    cout << "Entrez le jour: ";
    cin >> j;
    cout << "Entrez le mois: ";
    cin >> m;
    cout << "Entrez l'année: ";
    cin >> a;
    cout << conversion(j, m, a) << endl;
    return (0);
}