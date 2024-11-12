#include <unistd.h>

void ft_print_numbers(void){

    char n[10] = {'0','1','2','3','4','5','6','7','8','9'};

    for(int i = 0; i < sizeof(n) / sizeof(n[0]); i++){
        write(1, &n[i], 1);
    }
    
    
}

int main (void) {

    ft_print_numbers();
    
    return 0;
}