#include "string.h"

using namespace std;

String::String()
{
    lenght = 0;
    data = new char[0];
}

String::String(char c)
{
    lenght = 1;
    data = new char(c);
}

String::String(const char *c)
{
    if (c)
    {
        int n = 0;
        while (c[n] != '\0')
        {
            n++;
        }
        lenght = n;
        data = new char[n];
        for (int j = 0; j < n; j++)
        {
            data[j] = c[j];
            data[j + 1] = '\0';
        }
    }
    else
    {
        lenght = 0;
        data = new char[0];
    }
}

String::String(const String &s)
{
    lenght = s.len();
    data = new char[lenght];
    for (int j = 0; j < lenght; j++)
    {
        data[j] = s[j];
    }
}

String::~String()
{
    delete[] data;
}

int String::len() const
{
    return lenght;
}

ostream &operator<<(ostream &os, const String &s)
{
    if (s.len() > 0)
    {
        for (int j = 0; j < s.len(); j++)
        {
            os << s[j];
        }
    }
    else
    {
        os << "";
    }
    return os;
}
char String::operator[](int j) const
{
    if (j >= lenght)
    {
        throw 1;
    }
    return data[j];
}

char &String::operator[](int j)
{
    if (j >= lenght)
    {
        throw 1;
    }
    return data[j];
}

String &String::operator=(const String &s)
{
    if (this == &s)
    {
        return *this;
    }
    delete data;
    lenght = s.len();
    data = new char[lenght];
    for (int j = 0; j < lenght; j++)
    {
        data[j] = s[j];
    }
    return *this;
}

String operator+(const String &lhs, const String &rhs)
{
    return String(lhs) += rhs;
}

String operator+(const String &lhs, char rhs)
{
    return String(lhs) += String(rhs);
}

String operator+(const String &lhs, const char *rhs)
{
    return String(lhs) += String(rhs);
}

String operator+(char lhs, const String &rhs)
{
    return String(lhs) += rhs;
}

String operator+(const char *lhs, const String &rhs)
{
    return String(lhs) += rhs;
}

String &String::operator+=(const String &s)
{
    int len = lenght + s.len();
    char *str = new char[len];

    for (int j = 0; j < lenght; j++)
    {
        str[j] = data[j];
    }
    for (int i = 0; i < s.len(); i++)
    {
        str[lenght + i] = s[i];
    }

    delete data;
    lenght = len;
    data = str;
    return *this;
}

int main()
{
    String hola;
    String a('z');
    String b("hola");
    String c = 'c';
    cout << b + a << endl;
    cout << b;

    return 0;
}
