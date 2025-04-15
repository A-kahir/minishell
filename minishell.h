


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_cmd
{
    char **args;
    char *infile;
    char *outfile;
    int append;
    int is_builtin;
    struct s_command *next;
} t_cmd;

