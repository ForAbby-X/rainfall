

void nikzebi()
{
	printf("I am a nikzebi hehe acab\n");
}

void DD()
{
	printf("LA DEUX\n");
}

int main()
{
	atexit(&nikzebi);
	atexit(&DD);
	return (0);
}