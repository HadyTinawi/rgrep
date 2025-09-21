#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

char buf[1024];
int match(char*, char*);

void rgrep(char *pattern, char *path, int flg)
{
	
	printf("rgrep is setup!\n");
}

int main (int argc, char *argv[])
{
	char *pattern, *path;
	int flag = 0; 
	pattern = argv[1];
	path = argv [2];

	printf("pattern: %s\n", pattern);
	printf("Path: %s\n", path);

	if(strcmp(argv[1], "-v") == 0)
	{
		flag = 1; 
	}

	rgrep(pattern, path, flag);
	
	exit(0);
}
