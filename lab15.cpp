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
            void SetWriter(const string& s) { scwriter = s; }


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
    string title, writer;
    int year;

    for (int i = 0; i < 4; ++i) {
        getline(fin, title);
        fin >> year;

        fin.ignore(); // to ignore the newline character after the year
        getline(fin, writer);
        films.emplace_back(title, year, writer); // add film to vector

        film temp;
        temp.SetTitle(title);
        temp.SetYear(year);
        temp.SetWriter(writer);
    }
    
    for (const auto& f : films) {
        f.print();
    }
    return 0;

}

