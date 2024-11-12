#include <unistd.h>

void ft_is_negative(int n) {
    char is[2] = {'P','N'};

    if(n < 0) write(1,&is[1],1);
    else write(1, &is[0],1);

}

int main (void) {

    ft_is_negative(0);

    return 0;
}