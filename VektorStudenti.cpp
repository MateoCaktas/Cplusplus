#include <iostream>
#include <vector>

using namespace std;


class student{
    private:
        string ime,prezime;
        int MB;
    public:
        student();
        void GetNum();
        void GetName();
        void IspisName();
        string ReturnName();
        void IspisMB();
};

void Ispis(vector <student>);

student::student()
{

}

void student::GetName()
{
    cout << "Unesi ime i prezime:";
    cin >> ime >> prezime;
 
}
void student::GetNum()
{
    
    cout << "Unesi maticni broj:";
    cin >> MB;

    cout <<endl;
}
void student::IspisName()
{
    cout << ime << " " << prezime;
}
void student::IspisMB()
{
    cout << " " << MB <<endl;
}
int main()
{
    string Ime;
    vector <student> Ucenik;
    int br;
    cout << "Unesi broj ucenika:"<<endl;
    cin >> br;
    Ucenik.resize(br);

    for(int i = 0;i< Ucenik.size(); i++)
        {
            Ucenik[i].GetName();
            Ucenik[i].GetNum();
        }

    for(int i = 0;i<Ucenik.size();i++)
            {
            Ucenik[i].IspisName();
            Ucenik[i].IspisMB();
            }
    
    cout << "Reci misto: " <<endl;
    cin >> br;

    Ucenik.insert(Ucenik.begin() + br,Ucenik[br]);
    Ucenik[br].GetName();
    Ucenik[br].GetNum();
    

    Ispis(Ucenik);
    return 0;
}
void Ispis(vector <student> x)
{
    for(int i = 0;i<x.size();i++)
    {
       x[i].IspisName();
       x[i].IspisMB();
    }
}
