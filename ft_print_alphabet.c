#include <unistd.h>

void ft_print_alphabt(void);

int main (void) {

    ft_print_alphabt();

    return 0;
}

void ft_print_alphabt(void){
    char alph[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int index = 0;

    while(index < (sizeof(alph) / sizeof(alph[0]))){
        write(1, &alph[index], 1);
        index++;
    }

}