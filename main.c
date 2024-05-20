#include "ft_printf.h"
#include <limits.h>

int main(void)
{
    char     *s1;

    s1 = (char *)ft_calloc(2147483648, sizeof(char));
    ft_memset(s1, 'A', 2147483647);

    printf("%d\n", printf("%s", s1));
    // printf("%d\n", ft_printf("%s", s1));
}