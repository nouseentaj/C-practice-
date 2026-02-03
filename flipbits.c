#include <stdio.h>
unsigned int flipBits(unsigned int num) {
return ~num; // Using bitwise NOT operator to flip the bits
}
int main() {
unsigned int n, result;
// Taking input from the user
printf("Enter a 32-bit unsigned integer: ");
scanf("%u", &n);
// Flipping the bits
result = flipBits(n);
// Displaying the original and flipped bits
printf("Original Number: %u\n", n);
printf("Flipped Bits: %u\n", result);
return 0;
}
