#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int one, two;
    float three, four;
    scanf("%d", &one);
    scanf("%d", &two);
    scanf("%f", &three);
    scanf("%f", &four);

	printf("%d ", one + two);
    printf("%d\n", one - two);
    printf("%.1f ", three + four);
    printf("%.1f", three - four);

    return 0;
}