#include <unistd.h>

void ft_print_numbers(void);

int main (void) {

    ft_print_numbers();
    
    return 0;
}

void ft_print_numbers(void){

    char n[] = {'0','1','2','3','4','5','6','7','8','9'};

    int index = 0;
    
    while (index < (sizeof(n) / sizeof(n[0]))){
        write(1, &n[index], 1);
        index++;
    }

}