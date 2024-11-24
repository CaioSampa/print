#include <unistd.h>
#include<stdio.h>
#include <string.h>

void ft_print_comb(void);

int main (void){
  ft_print_comb();

  return 0;
}

 void ft_print_comb(void) {
    char nums[] = {'0','1','2','3','4','5','6','7','8','9'};
    char space[] = ", ";
    int index = 0;
 
    while (index <= 7){
  
      if(nums[index + 1] > nums[index] ){
        int i = index + 1;
        int j = index + 2;

        while(j <=9 && i <=9){
            char str[] = {nums[index],nums[i],nums[j]};
            write(1,&str, 3);
            if(index < 7) write(1, &space, 2);
            j+=1;

            if(j == 9) {
              char str2[] = {nums[index],nums[i],nums[j]};
              write(1,&str2, 3);
              if(index < 7) write(1, &space, 2);
              i+=1;
              j = i + 1;
            }

        }
      }
      
      nums[index++];
    }
    
 }
