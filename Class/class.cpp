#include <iostream>
using namespace std;

class Geek
{
private:
    string geekName;
    int geekId;

public:
    // Default constructor
    Geek()
    {
        geekId = 0;
    }

    // Parameterized Constructor
    Geek(int gID, string gName)
    {
        geekId = gID;
        geekName = gName;
    }

    // Getter and setter functions
    void setGeekName(string);
    void setGeekId(int);
    void printGeekName();
    void printGeekId();

    ~Geek()
    {
        cout << "Destructor called for id: " << geekId << endl;
    }
};

void Geek::printGeekName()
{
    cout << "Geek name is " << this->geekName << endl;
}

void Geek::printGeekId()
{
    cout << "Geek id is " << this->geekId << endl;
}

void Geek::setGeekId(int gID)
{
    this->geekId = gID;
}

void Geek::setGeekName(string gName)
{
    this->geekName = gName;
}

int main()
{
    Geek geek1;
    Geek geek2(2, "Gayatri");
    geek2.printGeekId();
    geek2.printGeekName();
    geek1.printGeekId();
    geek1.printGeekName();
    geek1.setGeekId(1);
    geek1.setGeekName("Dilip");
    geek1.printGeekId();
    geek1.printGeekName();
}