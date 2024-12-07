#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void);


int main (void) {
   
    ft_print_comb2();

    return (0);

}

void ft_print_comb2(void) {

    char str[] = {'0','0'};
    char str2[] = {'0','0'};

    char *string[] = {&str[0], &str[1], &str2[0], &str2[1]};

    int index = 0;
    while(!(str[0] == '9' && str[1] == '8')){
        
        if (str2[1] <= '9') str2[1]++;
        
        write(1, &str[0], 1);
        write(1, &str[1], 1);
        write(1, " ", 2);
        write(1, &str2[0], 1);
        write(1, &str2[1], 1);
        printf("\n");

        //refazer essa parte com atenção
        if(str2[0] == '9' && str2[1]=='9')
        {
            
            str2[1] = '0';

            if(str[1] <= '9') {
                str[1]++;
                str2[1] = str[1] + 1;
            }
            
            if(str[1] > '9'){
                str[0]++;
                str[1] = '0';

                str2[0] = str[0] + 1 ;
                str2[1] = str[1] + 1; //* pode ser um possivel problema
            } 

            str2[0] = str[0];

            if(str[0] == '9' && str[1] =='8')
            {
                str2[0] = str[0];
                str2[1] = str[1] + 1;

                // write(1, *string, 4);
                write(1, &str[0], 1);
                write(1, &str[1], 1);
                write(1, " ", 2);
                write(1, &str2[0], 1);
                write(1, &str2[1], 1);
                printf("\n");
                break;
            }

            if(str2[1] >= '9'){
                str2[0]++;
                str2[1] = '0';
            }

            

            write(1, &str[0], 1);
            write(1, &str[1], 1);
            write(1, " ", 2);
            write(1, &str2[0], 1);
            write(1, &str2[1], 1);
            printf("\n");
            
        }

        // isso so pode ocorrer depois do metodo write senão não lerá o 9.
        if(str2[1] == '9'){
            str2[0]++;
            str2[1] = '0';
            write(1, &str[0], 1);
            write(1, &str[1], 1);
            write(1, " ", 2);
            write(1, &str2[0], 1);
            write(1, &str2[1], 1);
            printf("\n");
        }

        
        index++;

    }
}
