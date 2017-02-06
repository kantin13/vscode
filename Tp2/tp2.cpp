#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;


//ex1 ----------------------
bool est_premier(int a)
{
    int i;

    i = 2;
    while(i < a)
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
            cout<<min<<" est premier"<<endl;
        else
            cout<<min<<" n'est pas premier"<<endl;
        min += 1;
    }
}
//-----------------------------------

//exo2-------------------------------
int nb_chiffre(int nb)
{
    int c;

    c = 0;
    while(nb != 0)
    {
        nb /= 10;
        c += 1;
    }
    return (c);
}
//--------------------------------------

void equation(int a, int b, int c){
    int s;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout<<"il y a une infinité de solution"<<endl;
            else
                count<<"Il y a aucune solution"<<endl;
        }
        else
            cout<<"la solution est "<<-c/b<<endl;
    }
}

int main()
{
    cout<<nb_chiffre(12345)<<endl;
    return (0);
}