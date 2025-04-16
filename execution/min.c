#include "../minishell.h"


// to test my code execution 
int main(int argc, char **argv, char **env)
{
    t_cmd cmd;
    char *args[] = {"/bin/cat", "-e", NULL};

    cmd.args = args;
    cmd.infile = NULL;
    cmd.outfile = NULL;
    cmd.append = 0;
    cmd.is_builtin = 0;
    cmd.next = NULL;

    execute_commands(&cmd, env);
}
