#include <iostream>

using namespace std;
# include <ctype.h>
# include <stdlib.h>
void convertToLowercase (char *);
int main ()
{
 char s[30];
 cout<<"Please input a string: ";
 cin>> s; 
 cout << "The string before conversion is: " << s << endl ;
convertToLowercase ( s) ; //function call
 cout << "“The string after conversion is: " << s ;
}
void convertToLowercase (char *sptr)
{
 while ( *sptr != NULL )
 {
     if ( isupper ( *sptr) )
        *sptr = tolower ( *sptr ); 
    ++ sptr; 
 } 
}
