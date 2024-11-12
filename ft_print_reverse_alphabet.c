#include <unistd.h>

void  ft_print_reverse_alphabet(void){
    char alph[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i = (sizeof(alph) / sizeof(alph[0]) - 1) ; i >= 0; i--){
        write(1, &alph[i], 1);
    }
}

int main (void) {

    ft_print_reverse_alphabet();

    return 0;
}