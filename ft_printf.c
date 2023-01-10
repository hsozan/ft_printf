#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

//ft_printf with s d x X c p u %

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    if(!s)
        return (ft_putstr("(null)"));
    return (i);
}

int ft_putnbr_base(int nbr, char *base, int base_len)
{
    int res;

    res = 0;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
        res++;
    }
    if (nbr >= base_len)
    {
        res += ft_putnbr_base(nbr / base_len, base, base_len);
        res += ft_putnbr_base(nbr % base_len, base, base_len);
    }
    else
    {
        ft_putchar(base[nbr]);
        res++;
    }
    return (res);
}
int ft_sort(const char *s, va_list args)
{
    int res;

    res = 0;
    if (*s == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (*s == 'd')
        return (ft_putnbr_base(va_arg(args, int), "0123456789", 10));
    else if (*s == 'x')
        return (ft_putnbr_base(va_arg(args, int), "0123456789abcdef", 16));
    else if (*s == 'X')
        res += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", 16);
    else if (*s == 'c')
        res += ft_putchar(va_arg(args, int));
    else if (*s == 'p')
        return (ft_putstr("0x") + ft_putnbr_base(va_arg(args, int), "0123456789abcdef", 16));
    else if (*s == 'u')
        res += ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 10);
    else if (*s == '%')
        res += ft_putchar('%');
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int i;
    int res;

    i = 0;
    res = 0;
    va_start(args, s);
    while (s)
    {
        if (*s == '%')
        {
            res += ft_sort(s, args);
        }
        else
        {
            write(1, &s[i], 1);
            res++;
        }
        s++;
    }
    va_end(args);
    return (res);
}
