#include <stdio.h>
    int main()
    {
    int n1, n2, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
        gcd = i;
    }
    printf("G.C.D of %d and %d is %d.\n", n1, n2, gcd);
    system("pause");
    return 0;
    }
//? 程序需要严格按数学公式或是结果导向型？