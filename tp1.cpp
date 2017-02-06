#include <iostream> // pour std::cout
#include <string>   // pour std::string
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//utilise la sortie dela fonction precedente pour afficher les chiffre composant un nombre séparé par un tiret

int exo1()
{
    int nb;
    int i;
    int c;

    i = 1;
    c = 0;
    nb = 0;
    cout << "Donnez un nombre superieur à 1 : ";
    cin >> nb;
    while (nb <= 1)
    {
        cout << "Je vous ai demande un nombre entier superieur a 1 !\nDonnez un nombre superieur à 1 : ";
        cin >> nb;
    }
    while (i <= nb && c <= 2)
    {
        if (nb % i == 0)
            c += 1;
        i += 1;
    }
    if (c == 2)
        cout << nb << " est premier" << endl;
    else
        cout << nb << " n'est pas premier" << endl;

    return (0);
}

int exo2()
{
    int nb;
    int i;
    int l;

    l = 2;
    i = 2;
    cout << "Donnez n ?";
    cin >> nb;
    while (nb <= 1)
    {
        cout << "Désolé: " << nb << " est inférieur à 2" << endl;
        cin >> nb;
    }
    cout<<"Calcul de primalité sur la plage de ]1,10] :"<<endl;
    while (i <= nb)
    {
        while (l <i){
            if (i%l == 0){
                cout<<i<<" n'est pas premier"<<endl;
                break;
            }
            l += 1;
        }
        if (l == i){
            cout<<i<<" est premier"<<endl;
        }
        l = 2;
        i += 1;
    }
    cout << "Au revoir" << endl;
    return (0);
}

int exo3()
{
    int n;
    int min;
    int max;
    float moy;
    int i;
    int value;
    i = 1;
    cout<<"Donnez n ? ";
    cin>>n;
    while(n <=0)
    {
        cout<<n<<" est négatif !"<<endl;
        cout<<"Donnez n ? ";
        cin>>n;
    }
    cout<<"Donnez la valeur "<<i << " ? ";
    cin>>min;
    max = min;
    moy = min;
    while (i < n){
        cout<<"Donnez la valeur "<< i + 1 << " ? ";
        cin>>value;
        if (value < min)
            min = value;
        if (value > max)
            max = value;
        moy += value;
        i = i + 1;
    }
    cout<<"La valeur minimale est "<<min<<endl;
    cout<<"La valeur maximale est "<<max<<endl;
    cout<<"La moyenne est "<<moy/n<<endl;
    return(0);
}

int exo4(){
    int nb, i, l;
    cout<<"Donnez la taille du carré ? ";
    cin>>nb;
    i = 0;
    l = 0;
    while (nb<1)
    {
        cout<<"Désolé, seulement des valeurs positives"<<endl<<"Donnez la taille du carré ? ";
        cin>>nb;
    }
    while(i<nb)
    {
        while(l<nb)
        {
            cout<<"* ";
            l += 1;
        }
        cout<<endl;
        l = 0;
        i += 1;
    }
    return (0);
}

int exo5(){
    int hauteur;
    int longueur;
    int x,y;

    x = 0;
    y = 0;
    cout<<"Donnez la hauteur du rectangle ? ";
    cin>>hauteur;
    while (hauteur< 1)
    {
        cout<<"Désolé, seulement des valeurs positives\nDonnez la longueur ? ";
        cin>>hauteur;
    }
    cout<<"Donnez la longueur du rectangle ? ";
    cin>>longueur;
    while (longueur < 1)
    {
        cout<<"Désolé, seulement des valeurs positives\nDonnez la longueur ? ";
        cin>>longueur;
    }
    while (y < hauteur){
        while(x < longueur)
        {
            if (y == 0 || x == 0 || y == hauteur - 1 || x == longueur - 1)
                cout<<"* ";
            else
                cout<<"  ";
            x += 1;
        }
        cout<<endl;
        x = 0;
        y += 1;
    }
    return (0);
}

int exo6()
{
    int nb;
    int c1,c2,x,y;
    cout<<"Donnez la taille (positif et impaire) ? ";
    cin>>nb;
    c1 = 0;
    c2 = nb - 1;
    x = 0;
    y = 0;
    while(nb < 1 || nb % 2 == 0)
    {
        cout<<"Désolé, seulement des valeurs positives et impaires\nDonnez la longueur ? ";
        cin>>nb;
    }
    while(y < nb)
    {
        while(x < nb)
        {
            if (x == c1 || x == c2)
                cout<<"* ";
            else
                cout<<"  ";
            x += 1;
        }
        cout<<endl;
        c1 += 1;
        c2 -= 1;
        x = 0;
        y += 1;
    }
    return(0);
}

int main()
{
    cout<<"-------------------\nExo1\n-------------------\n";
    exo1();
    cout<<"-------------------\nExo2\n-------------------\n";
    exo2();
    cout<<"-------------------\nExo3\n-------------------\n";
    exo3();
    cout<<"-------------------\nExo4\n-------------------\n";
    exo4();
    cout<<"-------------------\nExo5\n-------------------\n";
    exo5();
    cout<<"-------------------\nExo6\n-------------------\n";
    exo6();
    return (42);
}