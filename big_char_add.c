
    #include <stdio.h>
    #include <string.h>
     
    char *bigadd(char *c, const char *a, const char *b) {
        size_t alen = strlen(a);
        size_t blen = strlen(b);
        size_t clen = (alen > blen) ? alen : blen;
        size_t i = clen;
        int digit, carry = 0;
        c[i] = '\0';
        while (i > 0) {
            digit = ((alen ? a[--alen] - '0' : 0) +
                     (blen ? b[--blen] - '0' : 0) +
                     carry);
            carry = digit >= 10;
            c[--i] = (char)('0' + (digit - carry * 10));
        }
        if (carry) {
            memmove(c + 1, c, clen + 1);
            c[0] = '1';
        }
        return c;
    }
     
    int main() {
        char a[100], b[100], c[101];
     
        while (scanf("%99s%99s", a, b) > 0) {
            printf("%s\n", bigadd(c, a, b));
        }
        return 0;
    }
