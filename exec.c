#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// void DumpHex(const void* data, size_t size) {
// 	char ascii[17];
// 	size_t i, j;
// 	ascii[16] = '\0';
// 	for (i = 0; i < size; ++i) {
// 		printf("%02X ", ((unsigned char*)data)[i]);
// 		if (((unsigned char*)data)[i] >= ' ' && ((unsigned char*)data)[i] <= '~') {
// 			ascii[i % 16] = ((unsigned char*)data)[i];
// 		} else {
// 			ascii[i % 16] = '.';
// 		}
// 		if ((i+1) % 8 == 0 || i+1 == size) {
// 			printf(" ");
// 			if ((i+1) % 16 == 0) {
// 				printf("|  %s \n", ascii);
// 			} else if (i+1 == size) {
// 				ascii[(i+1) % 16] = '\0';
// 				if ((i+1) % 16 <= 8) {
// 					printf(" ");
// 				}
// 				for (j = (i+1) % 16; j < 16; ++j) {
// 					printf("   ");
// 				}
// 				printf("|  %s \n", ascii);
// 			}
// 		}
// 	}
// }

void f()
{
	system("/bin/sh");
}

typedef void (*callback)();

int main()
{
	int		len = 19;
	char	func_copy[len];
	
	callback func_ptr = (callback)f;

	memcpy(func_copy, func_ptr, len);
	write(1, func_copy, len);
	write(1, "\n", 1);

	((callback)func_copy)();
};


/*
pour kamel

LOGIQUE:
	PARSER PIPE > TABLEAU PIPES
		PARSER COMMANDES	> CMDS
		PARSER REDIR		> REDIRS

	TRAITER PIPE
		FORK
			SI CHILD
				ATTENDRE PARENT
			SINON
				EFFECTUER REDIR (ECRASER STDIN, STDOUT)
				EFFECTUER COMMANDES (execve de CMDS)



int	pipe_exec(int fd_in, int fd_out, char **cmds, char **env);

PIPEX
	TAB[] COMMANDS(char *)
	TAB[] REDIR(char *, )

*/