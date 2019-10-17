#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void my_perror()
{
	printf("error : (%d)%s\n", errno, strerror(errno));
}

int main()
{
	FILE *pFile;
	pFile = fopen("test20153267.txt", "rb");
	if(pFile == NULL)
		my_perror();
	else
		fclose(pFile);
	return 0;
}


