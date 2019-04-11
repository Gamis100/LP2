#include<iostream>
using  namespace std;
class  String 
{
	private:
		char  *data;
		int length;
		
	public:
		String();
        String(char c);
        String(const char *c);
        String(const String &s);
		~String();
		
		friend ostream &operator<<(ostream & os, const String &s);
		char operator[](int j) const;
        char &operator[](int j);
        String &operator=(const String &s);
        String &operator+=(const String &s);
        friend String operator+(const String &lhs, const String &rhs);
        friend String operator+(const String &lhs, char rhs);
        friend String operator+(const String &lhs, const char *rhs);
        friend String operator+(char lhs, const String &rhs);
        friend String operator+(const char *lhs, const String &rhs);
			
};
