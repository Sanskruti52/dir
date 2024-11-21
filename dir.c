#include<stdio.h>
#include<unistd.h>
int main (int argc,char *argv[])
{
	if(access(argv[1],F_OK)==0)
	printf("File %s exist",argv[1]);
	else
	printf("File does not exist");
	return 0;
}
