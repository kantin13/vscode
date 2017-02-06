#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;

void binaire_rec(int n, int &n1, int &n2, int &n3, int &n4, int &n5, int &n6, int &n7, int &n8, int pos)
{
    if (n != 0)
    {
        switch (pos)
        {
        case 0:
            n8 = n % 2;
            break;
        case 1:
            n7 = n % 2;
            break;
        case 2:
            n6 = n % 2;
            break;
        case 3:
            n5 = n % 2;
            break;
        case 4:
            n4 = n % 2;
            break;
        case 5:
            n3 = n % 2;
            break;
        case 6:
            n2 = n % 2;
            break;
        case 7:
            n1 = n % 2;
            break;
        }
        pos += 1;
        n /= 2;
        binaire_rec(n, n1, n2, n3, n4, n5, n6, n7, n8, pos);
    }
    else
        return;
}

void binaire(int n, int &n1, int &n2, int &n3, int &n4, int &n5, int &n6, int &n7, int &n8)
{
    int i = 0;

    while (n != 0)
    {
        switch (i)
        {
        case 0:
            n8 = n % 2;
            break;
        case 1:
            n7 = n % 2;
            break;
        case 2:
            n6 = n % 2;
            break;
        case 3:
            n5 = n % 2;
            break;
        case 4:
            n4 = n % 2;
            break;
        case 5:
            n3 = n % 2;
            break;
        case 6:
            n2 = n % 2;
            break;
        case 7:
            n1 = n % 2;
            break;
        }
        i += 1;
        n /= 2;
    }
}

int convert_bin_dec(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8)
{
    int nb;
    int i;

    nb = 0;

    if (n8 == 1)
        nb += 1;
    if (n7 == 1)
        nb += 2;
    if (n6 == 1)
        nb += 4;
    if (n5 == 1)
        nb += 8;
    if (n4 == 1)
        nb += 16;
    if (n3 == 1)
        nb += 32;
    if (n2 == 1)
        nb += 64;
    if (n1 == 1)
        nb += 128;
    return (nb);
}

int main()
{
    int n, n1, n2, n3, n4, n5, n6, n7, n8, pos;

    n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = pos = 0;
    cout << "Entrez n:";
    cin >> n;
    binaire_rec(n, n1, n2, n3, n4, n5, n6, n7, n8, pos);

    cout << convert_bin_dec(n1, n2, n3, n4, n5, n6, n7, n8) << "->" << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << endl;
    return (1);
}