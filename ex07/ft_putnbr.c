#include <unistd.h>

void ft_devide(int d){
	char c[10];
	int i;
	while (d>0){
		c[i]=d%10+'0';
		d=d/10;
		i++;
	}
	while (i>=0){
		write(1,&c[i],1);
		i--;
	}
}
				
void ft_putnbr(int nb) {
	if (nb == -2147483648)
		write(1,"-2147483648",11);
	else if (nb <0)
	{
		write(1,"-",1);
		nb=-nb;
		ft_devide(nb);
	}
	else 
		ft_devide(nb);
}
