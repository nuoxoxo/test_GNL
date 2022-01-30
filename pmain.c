#include "../ft_printf.h"
#include "stdio.h"
#define ss printf("---\n")
void	print(void);

int	main(int ac, char**v)
{
	if (fd == 1)	print();
}

void	print(void)
{
	int	f, f_ ;

	f = ft_print(" %c \n", 'c');
	f_ = printf(" %c \n", 'c');
	printf("\e[1;97mft_printf: \e[1;3;32m%i\033[0m\n", f);
	printf("\e[1;97mft_printf: \e[1;3;32m%i\033[0m\n", f);

}
