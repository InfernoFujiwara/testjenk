#include <iostream>
#include <cmath>

class punkt {
public:
    int X, Y;
    punkt(int x, int y) {
        X = x;
        Y = y;
    }
};

class trojkat {
private:
    double podstawa, wysokosc;
    punkt srodek = punkt(0, 0);

public:
    trojkat(double a, punkt srodek) : srodek(srodek) {
        podstawa = a;
        wysokosc = a * std::sqrt(3) / 2;
    }

    double poleTrojkata() {
        return (podstawa * wysokosc) / 2;
    }

    void Info() {
        std::cout << "Trojkat rownoboczny o boku " << podstawa 
                  << " i wysokosci " << wysokosc 
                  << " majacy srodek w punkcie [" << srodek.X << ", " << srodek.Y << "]" << std::endl;
        std::cout << "Pole trojkata: " << poleTrojkata() << std::endl << std::endl;
    }
};

int main() {
    trojkat tkat(1, punkt(0, 0));
    tkat.Info();

    trojkat nastepny(5, punkt(4, 4));
    nastepny.Info();

    trojkat* wsktr = new trojkat(3, punkt(2, 2));
    wsktr->Info();

    delete wsktr;
    return 0;
}
