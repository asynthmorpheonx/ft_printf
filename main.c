#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
	close(1);
	int i = ft_printf("\n");
	return (i);
}