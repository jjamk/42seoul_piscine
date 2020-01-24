#include <unistd.h>

void ft_is_negative(int n) {
	char plus;
	char minus;
	plus='P';
	minus='N';
	if ( n >= 0 ) 
		write(1,&plus,1);

	else 
		write(1,&minus,1);
}
