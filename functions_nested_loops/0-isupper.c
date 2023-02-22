#include "main.h"
int
_isupper(int c)
{
        if (c > 64 && c < 91)
                return (1);
        else
                return (0);
}
