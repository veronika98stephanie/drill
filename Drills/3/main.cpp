#include <iostream>

using namespace std;

class Author
{
    string name;
    string email;
    char gender;
public:
    Author()
    {
    };
    Author(string name, string email, char gender);
    char getGender ();
    string getName ();
    string getEmail ();
    string toString ();
};

Author::Author(string name, string email, char gender)
{
    this->name = name;
    this->email = email;
    this->gender = gender;
}

char Author::getGender()
{
    return gender;
}

string Author::getEmail()
{
    return email;
}

string Author::getName()
{
    return name;
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

class Book
{
    string name;
    Author *author;
    double price;
    int qty = 0;
public:
    Book(string name, Author author[], double price);
    Book(string name, Author author[], double price, int qty);
    string getName();
    Author getAuthor();
    double getPrice();
    void setPrice(double price);
    int getQty();
    void setQty (int qty);
    string toString();
    string getAuthorNames();
};

Book::Book(string name, Author author[], double price)
{
    this->author = new Author[2];
    for (int i = 0; i < 2; i++)
    {
        this->author[i] = author[i];
    }
        this->name = name;
        this->price = price;
}

Book::Book(string name, Author author[], double price, int qty)
{
    this->author = new Author[2];
    for (int i = 0; i < 2; i++)
    {
        this->author[i] = author[i];
    }
        this->name = name;
        this->price = price;
        this->qty = qty;

}

string Book::getName()
{
    return name;
}

Author Book::getAuthor()
{
    return *author;
}

double Book::getPrice()
{
    return price;
}

int Book::getQty()
{
    return qty;
}
string Book::toString()
{
        return  "Book[name = " + name + ", " + author[0].toString() + " and " + author[1].toString() +"," + to_string (price) + "," + to_string (qty) + "\n";
}
string Book::getAuthorNames()
{
    return author[0].getName() + author[1].getName();
}

int main()
{
    cout << "Please input your name, email, gender" << endl;
    Author one[2] = {Author("ver", "ver", 'f'),Author("vero", "vero", 'f')};
    Book two("vero", one, 30, 2);

    cout << two.toString() << endl;
    cout << two.getAuthorNames() << endl;

    return 0;
}
