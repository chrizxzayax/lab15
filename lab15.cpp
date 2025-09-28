// comsc-210 | lab6 | Christian Molina 
#include <iostream>
#include <fstream>

using namespace std;

class film {
    private:
            string title;
            int Ryear;
            string scwriter;

    public:
            film() : title(""), Ryear(0), scwriter("") {} // default constructor
            film(const string& t, int y, const string& s) : title(t), Ryear(y), scwriter(s) {} // constructor with parameters
    

};

int main () {

    ifstream fin("films.txt");
    if (!fin) {
        cerr << "Error opening the file" << endl;
        return 1;
    }

    
}