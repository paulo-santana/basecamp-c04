#include "ft_putnbr_base.c"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int number = 255;
	ft_putnbr_base(number, "0123456789abcdef");
}
