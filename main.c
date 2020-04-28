#include "ft_ls.h"

int main(int argc, char **argv)
{
	struct dirent *sd;
	struct stat buff;
	t_ls head;

	if (argc < 1)
		return (-1);
	head.dir = opendir(argv[1]);
	if (head.dir == NULL) {
		printf("Error! Unable to open directory.\n");
		exit(1);
	}
	while ((sd = readdir(head.dir)) != NULL) {
		printf("%s\n", sd->d_name);
	}
	/*if ((head.fp = fopen("test", "rb")) == 0) {
		printf("File is open\n");
	} else {
		printf("Error! Cannot open file.\n");
		exit(1);
	}*/
	if (!(stat("test.txt", &buff)))
	{
		printf("Something is wrong");
		exit (1);
	}
	printf("%o\n", buff.st_mode);
	return 0;
}
