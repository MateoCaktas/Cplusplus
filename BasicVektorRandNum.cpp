#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int broj,ran,niz[5];
    vector<int> brojevi;
    int br[5] = {10,20,30,40,50};

    brojevi.insert(brojevi.begin(),br,br+5);

    for(int i = 0 ; i < brojevi.size();i++)
    cout << "Broj[" << i+1 << "] = " << brojevi.at(i)<<endl;

    ran = rand() % 5 + 1;

    cout << "Dodaj "<< ran << " svojih brojeva:";



    for(int i = 0 ; i < ran ; i++)
    cin >> niz[i];

    brojevi.insert(brojevi.begin()+ran,niz,niz+ran);

    cout << "Novi vektor:"<<endl;
    for(int i=0;i < brojevi.size();i++)
    cout << "A[" << i+1 << "] = " << brojevi.at(i)<<endl;
    return 0;
}