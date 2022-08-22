#include <iostream>
#include "string"

using std::cout;
using std::endl;
using std::cin;
using std::string;

/*
 * private data members: variables that member functions can access but class users cannot
 * this data member appear after the word "private"
 */

class Countries
{
private:
    string _name;
    string _continent;

public:
    void SetName(const string& aCountry);
    void SetContinent(const string& aContinent);
    void print();
};

void Countries::SetName(const string& aCountry)
{
    _name = aCountry;
}

void Countries::SetContinent(const string& aContinent)
{
    _continent = aContinent;
}

void Countries::print()
{
    cout << "The country is " << _name << " and it is located in " << _continent << endl;
}

int main()
{
    Countries country;              // object of class
    string nameCountry;
    string theContinent;
    cout << "\nInput name of a country you know: ";
    cin >> nameCountry;
    cout << endl;
    cout << "What is the continent of the country: ";
    cin >> theContinent;
    country.SetName(nameCountry);
    country.SetContinent(theContinent);
    cout << "\n[ Data Updated ]\n" << endl;
    country.print();

    return 0;
}
