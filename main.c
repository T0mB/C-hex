#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t num1;
    uint32_t num2;
} inp ;

int main() {
    inp i =
    {
    };
    
    uint32_t sum;

    printf("enter nr1 : ");
    scanf("%d", i.num1);

    printf("enter nr2 : ");
    scanf("%d", i.num2);

    sum = i.num1 + i.num2;

    printf("sum = %d\n", sum);

    return 0;
}