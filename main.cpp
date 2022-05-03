#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

string melangerLettres(string mot)
{
   string melange;
   int position(0);
   while (mot.size() != 0)
   {
        position = rand() % mot.size();

        melange += mot[position];

        mot.erase(position, 1);
    }
    return melange;
}

int main()
{
     srand(time(0));
    //1.mots demande

    string motsMystere;
    cout << "Donne moi un mots" << endl;
    cin >> motsMystere ;
    string motsDonne;
    //2.mots melange
    do
    {
    string motsMelange;
    motsMelange = melangerLettres(motsMystere);

    //3.mots a retrouver

    cout << "Quel est le mot: " << motsMelange << endl;
    cin >> motsDonne;

    if(motsDonne == motsMystere)
    {
        cout << "Bravo tu as trouve le mots mystere.\n" << endl;
    }
    else
    {
        cout << "le mots donne est pas le bon\n " << endl;
    }
    }
    while(motsDonne != motsMystere);

    return 0 ;
}
