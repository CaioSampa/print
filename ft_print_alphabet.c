#include <unistd.h>

void ft_print_alphabt(void);

int main (void) {

    ft_print_alphabt();

    return 0;
}

void ft_print_alphabt(void){
    char letter = 'a';

    while(letter != '{'){
        write(1, &letter, 1);
        letter++;
    }

}