/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    Rls.c                                                     LRT_SHELL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** TODO :
**	- scandir
**	- alphasort
**	- some arguments
*/

#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <errno.h>



void	lrt_print_repository_content	(const char *repository)
{
	DIR				*directory;
	struct dirent	*entry;

	directory = opendir(repository);
	if (directory == NULL)
	{
		switch (errno)
		{
			case EACCES :
				fprintf(stdout, "Permission denied.\n");
				break;
			case ENOENT :
				fprintf(stdout, "%s does not exist.\n", repository);
				break;
			case ENOTDIR :
				fprintf(stdout, "%s is not a directory.\n", repository);
				break;
		}

		return;
	}

	while ((entry = readdir(directory)) != NULL)
	{
		fprintf(stdout, "%s ", entry->d_name);
	}
	fprintf(stdout, "\n");

	closedir(directory);
}

int		main	(int argc, char *argv[])
{
	int		i;

	if (argc < 2)
	{
		lrt_print_repository_content(".");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argc > 2)
			{
				fprintf(stdout, "%s :\n", argv[i]);
			}
			lrt_print_repository_content(argv[i]);
		}
	}

	return (0);
}

