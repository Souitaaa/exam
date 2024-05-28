#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 3)
    {
        int i = 0;
        int tab[256] = {0};
        while (argv[1][i])
            tab[(int)argv[1][i++]] = 1;
        i = 0;
        while (argv[2][i])
            tab[(int)argv[2][i++]] = 1;
        i = 0;
        while (argv[1][i])
        {
            if(tab[(int)argv[1][i]])
            {
                write(1,&argv[1][i],1);
                tab[(int)argv[1][i]] = 0;
            }
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            if(tab[(int)argv[2][i]])
            {
                write(1,&argv[2][i],1);
                tab[(int)argv[2][i]] = 0;
            }
            i++;
        }
        
    }
        write(1,"\n",2);
    return 0;
}