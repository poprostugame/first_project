#include <iostream>

using namespace std;

int main()
{
    int szSciany, wSciany;
    double powierzchnia, zuzycieProducent, zuzycieNaSciane;
    string nazwaMaterialu;
    const double zapas = 1.15;
    cout << "Program liczacy zuzycie danego materialu na sciane"<< endl;
    cout << "Podaj wymiary sciany" << endl;
    cout << "Szerokosc[cm]: " << endl;
    cin >> szSciany;
    cout << "Wysokosc[cm]: " << endl;
    cin >> wSciany;
    powierzchnia = szSciany * wSciany / 10000.0;
    cout << "Podaj nazwe materialu: ";
    cin >> nazwaMaterialu;
    cout << "Podaj zuzycie wedlug producenta na m^2: ";
    cin >> zuzycieProducent;
    zuzycieNaSciane = powierzchnia * zuzycieProducent * zapas;
    cout << "Powierzchnia sciany " << powierzchnia <<" m^2." << endl;
    cout << "Potrzebujesz " << zuzycieNaSciane <<" " << nazwaMaterialu;


    return 0;
}
