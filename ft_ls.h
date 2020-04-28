//
// Created by dell on 23.04.2020.
//

#ifndef FT_LS_FT_LS_H
#define FT_LS_FT_LS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include "libft/libft.h"

typedef struct s_ls
{
	DIR *dir;
	FILE *fp;
	struct s_ls *next;
}				t_ls;

#endif //FT_LS_FT_LS_H
