// comsc-210 | lab6 | Christian Molina 
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class film {
    private:
            string title;
            int Ryear;
            string scwriter;

    public:
            film() : title(""), Ryear(0), scwriter("") {} // default constructor
            film(const string& t, int y, const string& s) : title(t), Ryear(y), scwriter(s) {} // constructor with parameters

            void SetTitle(const string& t) { title = t; }
            void SetYear(int y) { Ryear = y; }


            string getTitle() const { return title; }
            int getYear() const { return Ryear; }
            string getWriter() const { return scwriter; }

            void print() const {
                cout << "Title: " << title << ", Year: " << Ryear << ", Screenwriter: " << scwriter << endl;
            }

};

int main () {

    ifstream fin("films.txt");
    if (!fin) {
        cerr << "Error opening the file" << endl;
        return 1;
    }
    vector<film> films;

}