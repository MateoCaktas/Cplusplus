#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

void PrintMenu();

int main()
{
    int niz1[5] = { 10, 20 , 30 , 40 , 50 },niz2[5];
    vector<int> Brojevi;
    int ran,n,num,broj;

    srand(time(NULL));

    ran = rand()%5 + 1;

    Brojevi.insert(Brojevi.begin(),niz1,niz1+ran);
    cout << Brojevi.size() <<endl;
    for(int i = 0 ;i < Brojevi.size();i++)
        cout << "A[ " << i << "] = " << Brojevi.at(i)<<endl;

    PrintMenu();

    cin >> n;
    switch(n){
    case 1 :
            cout << "Odaberi poziciju: "<<endl;
            cin >> num;
            if(num <= Brojevi.size())
            {
                 cout << "Odaberi broj:";
                 cin >> broj;
                 Brojevi.insert(Brojevi.begin()+num,broj);
            }
            else cout << "Greska ! " <<endl;
            break;
    
    case 2 :
            num = rand()%Brojevi.size();
            cout << "Odaberi broj:";
            cin >> broj;
            Brojevi.insert(Brojevi.begin()+num,broj);
            break;
    default:break;
        }

    cout << endl;
    for(int i = 0 ;i < Brojevi.size();i++)
        cout << "B[ " << i << "] = " << Brojevi.at(i)<<endl;
    
    return 0;
}

void PrintMenu()
{
    cout << "Odaberi:"<<endl;
    cout << "1 - Upisi broj u vektor na zeljenoj poziciji" <<endl;
    cout << "2 - Upisi broj u vektor na nasumicnoj poziciji" <<endl;
    cout << "Tvoj odabir:";
}