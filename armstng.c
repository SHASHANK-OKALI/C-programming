#include <stdio.h>

int isArmstrong(int num) {
int original = num, sum = 0;

while (num > 0) {
    int digit = num % 10;
    sum += digit * digit * digit; // cube of each digit
    num /= 10;
}

return sum == original; // returns 1 if Armstrong else 0


}

int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);


if (isArmstrong(n))
    printf("%d is an Armstrong number.\n", n);
else
    printf("%d is not an Armstrong number.\n", n);

return 0;


}
