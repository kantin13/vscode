#include <iostream> // pour std::cout
#include <string>   // pour std::string
#include <stdlib.h>
#include <math.h>

using namespace std;


float *resoudre(float a, float b, float c, float delta)
{
    float *tab;

    if (delta > 0)
    {
        tab = (float*)malloc(sizeof(float)*2 + 1);
        tab[0] = (-b-sqrt(delta))/(2*a);
        tab[1] = (-b+sqrt(delta))/(2*a);
        tab[3] = 0;
    }
    else if (delta < 0)
    {
        tab = (float*)malloc(sizeof(float)* 1);
        tab[0] = 0;
    }
    else
    {
        tab = (float*)malloc(sizeof(float)* 1 + 1);
        tab[0] = -b/(2*a);
        tab[1] = 0;
    }
    return (tab);
}

void afficher(float a, float b, float c, float delta)
{
    float *tab;
    int i;

    i = 0;
    tab = resoudre(a, b,c, delta);
    cout << "Résolution de l'équation: " << a << "*x²+" << b << "*x+" << c << endl << "Delta = " << delta << endl;

    while (tab[i] != 0)
        i += 1;
    if (i == 1)
        cout << "Il y a une solution " << tab[0] << endl;
    else if (i == 2)
        cout << "Il y a deux solutions " << tab[0] << " et " << tab[1] << endl;
    else
        cout << "Il y a aucune solution" << endl;
    free(tab);
}

int main()
{
    float s;
    float delta;
    float a,b,c;


    cout << "Entrez a: ";    
    cin >> a;
    cout << "Entrez b: ";
    cin >> b;
    cout << "Entrez c: ";
    cin >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "il y a une infinité de solution" << endl;
            else
                cout << "Il y a aucune solution" << endl;
        }
        else
            cout << "la solution est " << -c / b << endl;
    }
    else
    {
        delta = b*b-4*a*c;
        afficher(a,b,c,delta);
    }
}