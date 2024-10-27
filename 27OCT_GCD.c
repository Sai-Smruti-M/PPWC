//QN-wap to find GCD of two no.s using pointers
#include <stdio.h>

int gcd(int *a, int *b)
{
    int x = *a;
    int y = *b;

    while (y != 0) 
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    return x;
}

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int result = gcd(&n1, &n2);
    printf("The GCD of %d and %d is %d\n", n1, n2, result);

    return 0;
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe        
// Enter two integers: 6 8
// The GCD of 6 and 8 is 2
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> gcc 27OCT_GCD.c
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe        
// Enter two integers: 24 56
// The GCD of 24 and 56 is 8
