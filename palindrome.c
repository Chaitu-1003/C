#include <stdio.h>
int isPalindromeHelper(int num, int *rev) {
    if (num == 0)
        return 1;
    int digit = num % 10;
    *rev = *rev * 10 + digit;
    return isPalindromeHelper(num / 10, rev);
}
int isPalindrome(int num) {
    int rev = 0;
    isPalindromeHelper(num, &rev);
    return (num == rev);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}

