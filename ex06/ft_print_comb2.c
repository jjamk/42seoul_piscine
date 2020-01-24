#include <unistd.h>

void ft_split(int a, int b) {
	char x1;
	char x2;
	char y1;
	char y2;
	x1=(a/10)+'0';
	x2=(a%10)+'0';
	y1=(b/10)+'0';
	y2=(b%10)+'0';
	write(1,&x1,1);
	write(1,&x2,1);
	write(1," ",1);
	write(1,&y1,1);
	write(1,&y2,1);
	if (a==98 && b==99)
        return;
	write(1,", ",2);
}


void ft_print_comb2(void){
		int a;
		int b;
		a=0;
		while (a<=98){
			b=a+1;
			while (b<=99){
			 	ft_split(a,b);
				b++;
			}
			a++;
	}	
}
