#include <iostream>

using namespace std;

class Batsman {
    int bcode, innings, notout, runs;
    string bname;
    double batavg;

public:
    void readdata() 
    {
        cout << "Enter bcode: ";
        cin >> bcode;
        cin.ignore();

        cout << "Enter bname: ";
        getline(cin, bname);

        cout << "Enter innings: ";
        cin >> innings;

        cout << "Enter notout: ";
        cin >> notout;

        cout << "Enter runs: ";
        cin >> runs;
    }

    void calcavg() {
        batavg = static_cast<double>(runs) / (innings - notout);
    }

    void displaydata() {
        cout << "Batsman Details:" << endl;
        cout << "bcode: " << bcode << endl;
        cout << "bname: " << bname << endl;
        cout << "innings: " << innings << endl;
        cout << "notout: " << notout << endl;
        cout << "runs: " << runs << endl;
        cout << "batavg: " << batavg << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.readdata();
    batsman.calcavg();
    batsman.displaydata();

    return 0;
}
