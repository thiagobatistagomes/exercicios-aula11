#include <stdio.h>
int main()
{
printf("int = %d bytes \n", sizeof( int ) );
printf("float = %d bytes \n", sizeof( float ) );
printf("double = %d bytes \n", sizeof( double ) );
printf("char = %d bytes \n", sizeof( char ) );
printf("void = %d bytes \n", sizeof( void ) );
printf("short int = %d bytes \n", sizeof( short int ) );
printf("long int = %d bytes \n", sizeof( long int ) );
printf("long long int = %d bytes \n", sizeof( long long int ) );
printf("long double = %d bytes \n", sizeof( long double ) );
return 0;
}