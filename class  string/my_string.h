#include<iostream>
using  namespace std;
class  String 
{
	private:
		char  *data;
		int length;
		
	public:
	        String();
                String(const char *str=NULL);
                String(const String &str);
		~String();
		
		friend ostream &operator<<(ostream & os, const String &str);
		char operator[](int j) const;
        char &operator[](int j);
        String &operator=(const String &str);
        String &operator+=(const String &str);
        friend String operator+(const String &lhs, const String &rhs);
        friend String operator+(const String &lhs, char rhs);
        friend String operator+(const String &lhs, const char *rhs);
        friend String operator+(char lhs, const String &rhs);
        friend String operator+(const char *lhs, const String &rhs);
			
};
