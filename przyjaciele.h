#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
    string nazwa;
    float x,y;

public:
    Punkt(string="A", float=0, float=0);    // poczatek kartezjanskiego ukladu wspolrzednych
    void wczytaj();

    friend void sedzia(Punkt &pkt, Prostokat &p);     // okreslenie przyjazni funkcji
};

class Prostokat
{
    string nazwa;
    float x,y,szerokosc,wysokosc;

public:
    Prostokat(string="brak",float=0,float=0,float=1,float=1);
    void wczytaj();

    friend void sedzia(Punkt &pkt, Prostokat &p);     // okreslenie przyjazni funkcji
};
