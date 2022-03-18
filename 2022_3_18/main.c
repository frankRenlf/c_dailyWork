#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

int isPalindrome(char* s) {
    int r = strlen(s) - 1;
    int l = 0;
    while (l <= r) {
        while ((l <= r) && !((s[l] >= 48 && s[l] <= 57) || (s[l] >= 65 && s[l] <= 90) || (s[l] >= 97 && s[l] <= 122))) {
            l++;
        }
        while ((l <= r) && !((s[r] >= 48 && s[r] <= 57) || (s[r] >= 65 && s[r] <= 90) || (s[r] >= 97 && s[r] <= 122))) {
            r--;
        }
        if (l >= r) {
            return 1;
        }
        if (s[l] <= 90) {
            s[l] += 32;
        }
        if (s[r] <= 90) {
            s[r] += 32;
        }
        if (s[l] != s[r] && l <= r) {
            return -1;
        }
        l++;
        r--;
    }
    return 1;
}

int main() {

    char arr[] = "A man, a plan, a canal: Panama";
    printf("%d\n", isPalindrome(arr));
    return 0;
}