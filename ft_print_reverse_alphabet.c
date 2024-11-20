#include <unistd.h>

void  ft_print_reverse_alphabet(void);

int main (void) {
    ft_print_reverse_alphabet();

    return 0;
}

void  ft_print_reverse_alphabet(void){
    char alph[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int index = (sizeof(alph) / sizeof(alph[0])) - 1;

    while(index >= 0){
        write(1, &alph[index], 1);
        index--;
    }
}