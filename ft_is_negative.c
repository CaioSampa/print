#include <unistd.h>

void ft_is_negative(int n);

int main (void) {

    ft_is_negative(0);

    return 0;
}

void ft_is_negative(int n) {
    n < 0 ? write(1,'N',1) : write(1, 'P',1);
}