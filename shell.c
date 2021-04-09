#include "shell.h"

int main(void)
{
     char *buff = NULL;
     size_t readed, number = 0;

     while (1)
     {
        write(1, "$ ", 2);
        readed = getline(&buff, &number, stdin);
        buff[readed -1] = 0;
        execute(buff);
        if (readed == EOF)
         {
             free(buff);
             return (-1);
         }
     }
     free(buff);
     return (0);
}
