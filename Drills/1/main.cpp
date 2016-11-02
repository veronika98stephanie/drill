#include <iostream>

using namespace std;

class Author
{
    string name;
    string email;
    char gender;
public:
    Author(string name, string email, char gender);
    string getName ();
    string getEmail ();
    void setEmail (string email);
    char getGender ();
    string toString ();
};

Author::Author(string name, string email, char gender)
{
    this->name = name;
    this->email = email;
    this->gender = gender;
}
string Author::getName()
{
    return name;
}
string Author::getEmail()
{
    return email;
}
string Author::toString()
{
    string one, two, three, four, total;
    one = "Author[name= ";
    two = ", email= ";
    three = ", gender= ";
    four = "]";
    return one + name + two + email + three + gender + four;
}
int main()
{
    string name, email;
    char gender;

    cout << "Please input the name, email, and gender" << endl;
   getline(cin, name);
   getline(cin, email);
    cin >> gender;

    Author one (name, email, gender);

    cout << one.toString();

    return 0;
}
