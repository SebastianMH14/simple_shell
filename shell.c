#include "shell.h"

int main(void)
{
     char *buff = NULL;
     size_t readed, number = 0, b = EOF;

     while (1)
     {

        if (readed != b)
        {
            write(1, "#cisfun$ ", 2);
            readed = getline(&buff, &number, stdin);
            buff[readed -1] = 0;
            token(buff);
        }
        else
         {
             free(buff);
             exit(127);
         }
     }
     free(buff);
     return (0);
}
