#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int broj,ran,ran2,broj2;
    vector<int> brojevi;
    int niz1[5] = {10,20,30,40};
    int niz2[5];
    int brojac=0;
   

    for(int i = 0 ; i < (sizeof(niz1)/sizeof(niz1[0]));i++)
        if(niz1[i] != 0)
            brojac++;

    brojevi.insert(brojevi.begin(),niz1,niz1+brojac);


    for(int i = 0 ; i < brojevi.size();i++)
    cout << "A[" << i+1 << "] = " << brojevi.at(i)<<endl;

    cout<<endl << brojac<<endl;
    ran = rand()% 5 +1 ;
    cout << "Dodaj " << ran << " brojeva: ";

    for(int i = 0 ; i < ran;i++)
    cin >> niz2[i];

    brojevi.insert(brojevi.end(),niz2,niz2+ran);

    for(int i = 0 ; i < brojevi.size();i++)
    cout << "B[" << i+1 << "] = " <<brojevi.at(i)<<endl;

    ran2 = rand()% brojevi.size();
    cout << "Dodaj jos 1 broj na poziciji "<< ran2 <<endl;

    cin >> broj2;
    brojevi.insert(brojevi.begin()+ran2,broj2);
    
    
    for(int i = 0 ; i < brojevi.size();i++)
    cout << "C[" << i+1 << "] = " <<brojevi.at(i)<<endl;

    cout << endl;
    return 0;    
}