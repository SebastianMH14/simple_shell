#include "shell.h"


int execute(char * command)
{
    char **token = NULL;
    char *aux = NULL;
    int i = 0;
    pid_t id;

    token = malloc((cont(command) + 1) * sizeof(char *));
    aux = strtok(command, " ");

    while(aux)
    {
        token[i] = aux;
        aux = strtok(NULL, " ");
        i++;
    }
    token[i] = aux;

    id = fork();
   

    if (id == 0)
    {
        if(execve(token[0], token, environ) == -1)
        {
            perror("/br_shell");
            return (0);
        }
        
    }

    if (id != 0)
    {
        while(wait(NULL) != -1) ;
    }

    free(token);
    return (1); 
}

char *token(char *command)
{

}

int cont(char *buff)
{
    int i, count = 0;
    
    for (i = 0; buff[i]; i++)
        if(buff[i] == 32 && buff[i + 1] != 32 && buff[i + 1] != 0)
            count++;

    if(buff[0] != 32)
        count++;

    return (count);
}
