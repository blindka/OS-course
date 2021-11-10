#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t cpid = fork();
	if(cpid)
		while(1) printf("1");
	else
		while(1) printf("2");

	return 0;
}