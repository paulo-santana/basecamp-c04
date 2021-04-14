#include "ft_putnbr_base.c"
#include <unistd.h>

int	main(void)
{
	int number = 255;
	ft_putnbr_base(number, "0123456789abcdef");
}
