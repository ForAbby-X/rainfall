
#include <stdio.h>

typedef struct mem
{
	char	index;
	char	*data;
}	t_arg;

t_arg	*mem_create(int id)
{
	t_arg	*mem;

	mem = malloc(8);
	mem->index = id;
	mem->data = malloc(8);
	return (mem);

}

char	c[80];

int main(int argc, char **argv)
{
	FILE	*file;
	t_arg	*arg1;
	t_arg	*arg2;

	arg1 = mem_create(1);
	arg2 = mem_create(2);

	strcpy(arg1->data, argv[1]);
	strcpy(arg2->data, argv[2]);

	file = fopen("/home/user/level8/.pass", "r");
	fgets(c, 8, file);
	
	puts("~~");
	return (0);
}
