#include "main.h"
void print_to_98(int n)
{
while(n != 98)
    {
        if(n < 0)
        {
            putchar(45);
            if(n < -9)
            {  
                putchar((n * -1 % 100 / 10) + '0');
            }
            putchar((n * -1 % 10) + '0');
        }
            
        if(n >= 0 && n <= 9)
            putchar(n + '0');
            
        if(n > 9)
        {
            if(n > 99)
            {
                putchar((n / 100) + '0');
            }
            putchar((n % 100 / 10) + '0');
            putchar((n % 10) + '0');
        }
        if(n != 98)
        {
            putchar(44);
            putchar(32);
        }
        n = n < 98 ? ++n : --n;
    }
    if (n == 98)
    {   putchar(57);
        putchar(56);
    }
}
