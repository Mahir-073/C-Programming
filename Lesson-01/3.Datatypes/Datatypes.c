#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x;  // declaration
    x = 73; // initialization

    int y = 18; // declaration and initialization together

    char a = 'N';                  // single Character (format-specifier: %c)
    char b[] = "Programmer Mahir"; // Sequence of characters like strings (format-specifier: %s)
    char c1 = 100;                 // 1 byte (-128 to 127) %d = value, %c = ascii
    unsigned char c2 = 255;        // (1 byte (0 to 255) %d or %c)

    float d = 3.141692;      // 4 bytes (32 bits of precision,  6-7 digits, format-specifier: %f)
    double e = 3.1416872164; // 8 bytes (64 bits precision,  15-16 digits, format-specifier: %lf)
    int f = 15466;           //(4 bytes, -2,147,483,648 to +2,147,483,648    format-specifier: %d)

    bool g = true;
    bool h = false; // (1 byte true or false, 1=true, 0=false, format-specifier: %d)

    short int i1 = 32767;          //(2 bytes, (-32,768 to 32,767), format-specifier: %d)
    unsigned short int i2 = 65535; //(2 bytes, (0 to +65535), format-specifier: %d)
    unsigned int i3 = 4264654566;  // format-specifier: %u

    long long int i4 = 46626246234216326;             //(8 bytes, (-9 quintillion to +9 quintillion), format-specifier: %lld)
    unsigned long long i5 = 56463616316346461313213U; //(8 bytes, (0 to +18 quintillion), format-specifier: %llu)

    // printing
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%c\n", a);
    printf("%s\n", b);
    printf("%c\n", c1);
    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%f\n", d);
    printf("%lf\n", e);
    printf("%d\n", f);
    printf("Boolean: %d\n", g);
    printf("Boolean: %d\n", h);
    printf("%d\n", i1);
    printf("%d\n", i2);
    printf("%u\n", i3);
    printf("%lld\n", i4);
    printf("%llu\n", i5);
    printf("LECTURE FINISHED!!!!!");

    return 0;
}