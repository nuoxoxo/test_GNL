#include "../ft_printf.h"
#include "stdio.h"
#define ss printf("--\n")
#define nl printf("\n")
//#define ft printf("\e[1;3;32m ft: \e[0m");
#define ft write(1, "\e[1;1;44mft_printf\e[0m  ", 24);
#define pf printf(  "\e[1;1;44mprintf   \e[0m  ");
#define ft_ write(1, "\e[1;1;45mft_printf\e[0m  ", 24);
#define pf_ printf(  "\e[1;1;45mprintf   \e[0m  ");
#define S "usage: cat [-benstuv] [file ...]"
#define ILOPT printf("a.out: illegal option -- ")
#define USAGE printf("%s\n", S)
#define WARNG printf("\e[1;101m  ...two values are not the same  \e[0m\n\n")
void	print(void);
void	print_(char, char *);

//	DRIVE

int	main(int ac, char**v)
{
	char	c;

	if (ac == 1)	print();
	else
	{
		c = *v[1] ;
		if (ac < 4)	print_(c, v[2]);
	}
}

void	print_(char c, char *s)
{
	int	f = 0, f_ = 0;

	if (c == 's') {
		ft;	f = ft_printf("%s \n", s);
		pf;	f_ = printf("%s \n", s);
	} else if (c == 'c') {
		ft;	f = ft_printf("%c \n", *s);
		pf;	f_ = printf("%c \n", *s);
	} else if (c == 'p') {
		ft;	f = ft_printf("%p \n", s);
		pf;	f_ = printf("%p \n", s);
	} else if (c == 'i') {
		ft;	f = ft_printf("%i \n", atoi(s));
		pf;	f_ = printf("%i \n", atoi(s));
	} else if (c == 'd') {
		ft;	f = ft_printf("%i \n", atoi(s));
		pf;	f_ = printf("%i \n", atoi(s));
	} else if (c == 'u') {
		ft;	f = ft_printf("%u \n", atoi(s));
		pf;	f_ = printf("%u \n", atoi(s));
	} else if (c == 'x') {
		ft;	f = ft_printf("%x \n", atoi(s));
		pf;	f_ = printf("%x \n", atoi(s));
	} else if (c == 'X') {
		ft;	f = ft_printf("%X \n", atoi(s));
		pf;	f_ = printf("%X \n", atoi(s));
	} else if (c == '%') {
		(void) s ;
		ft;
		f = ft_printf("%% %%%% %%%%%% %%%%%%%% %%%%%%%%%% %%%%%%%%%%%% %%%%%%%%%%%%%%%%\n");
		pf;
		f_ = printf("%% %%%% %%%%%% %%%%%%%% %%%%%%%%%% %%%%%%%%%%%% %%%%%%%%%%%%%%%%\n");
	} else {
		ILOPT;
		printf("%c\n", c);
		USAGE;
		return ;
	}	

	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f_);
	ss;
}

void	print(void)
{
	int	f, f_ ;

	//	c
	ft;
	f = ft_printf("%c \n", 'c');
	pf;
	f_ = printf("%c \n", 'c');
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f_);
	ss;
	if (f_ ^ f)	WARNG;

	//	s
	ft;
	f = ft_printf("%s \n", "Hey hey,\n\tmy my\vRock and roll\vcan never die");
	pf;
	f_ = printf("%s \n", "Hey hey,\n\tmy my\vRock and roll\vcan never die");
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f_);
	ss;
	if (f_ ^ f)	WARNG;


	//	p
	ft;
	f = ft_printf("%p \n", "Hey hey, my my\nRock and roll can never die");
	pf;
	f_ = printf("%p \n", "Hey hey, my my\nRock and roll can never die");
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;

	//	d
	ft;
	f = ft_printf("%d %d %d %d %d \n", 1024, 2147483647, 0, -1024, -2147483647);
	pf;
	f_ = printf("%d %d %d %d %d \n", 1024, 2147483647, 0, -1024, -2147483647);
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;

	//	u
	ft;
	f = ft_printf("%d %d %d \n", 1024, 2147483647, 0);
	pf;
	f_ = printf("%d %d %d \n", 1024, 2147483647, 0);
	ft_;
	printf("\e[1;3;32m%u\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%u\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;

	//	x
	ft;
	f = ft_printf("%x %x %x %x %x \n", 42, 3053, 48879, 2147483647, 0);
	pf;
	f_ = printf("%x %x %x %x %x \n", 42, 3053, 48879, 2147483647, 0);
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;

	//	X
	ft;
	f = ft_printf("%X %X %X %X %X \n", 42, 3053, 48879, 2147483647, 0);
	pf;
	f_ = printf("%X %X %X %X %X \n", 42, 3053, 48879, 2147483647, 0);
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	//f_ ++;
	if (f_ ^ f)	WARNG;

	//	%
	ft;
	f = ft_printf("%% \n");
	pf;
	f_ = printf("%% \n");
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;

	ft;
	f = ft_printf("%% %%%% %%%%%% %%%%%%%% %%%%%%%%%% %%%%%%%%%%%% %%%%%%%%%%%%%%%%\n");
	pf;
	f_ = printf("%% %%%% %%%%%% %%%%%%%% %%%%%%%%%% %%%%%%%%%%%% %%%%%%%%%%%%%%%%\n");
	ft_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	pf_;
	printf("\e[1;3;32m%i\033[0m\n", f);
	ss;
	if (f_ ^ f)	WARNG;
}
