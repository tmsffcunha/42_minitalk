#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

int	ft_putnbr(int nbr)
{
	int	result;

	result = 0;
	if (nbr == -2147483648)
	{
		result += write(1, "-2147483648", 11);
		return (result);
	}
	if (nbr < 0)
	{
		result += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
		result += ft_putchar(nbr + 48);
	else
	{
		result += ft_putnbr((nbr / 10));
		result += ft_putnbr((nbr % 10));
	}
	return (result);
}

int	ft_putnbr_char(unsigned int n)
{
	int		count;
	char	num[11];
	int		i;

	count = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		num[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i--)
		count += ft_putchar(num[i]);
	return (count);
}

int	ft_putnbr_hex(unsigned int n, char format)
{
	int		count;
	char	hex[16];
	int		i;
	char	*base;

	count = 0;
	i = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		hex[i++] = base[n % 16];
		n /= 16;
	}
	while (i--)
		count += ft_putchar(hex[i]);
	return (count);
}