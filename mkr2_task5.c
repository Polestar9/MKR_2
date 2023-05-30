#include <stdio.h>
#include <math.h>

// calculation
double calculateSum(int n, double arr[]) 
{
    double sum=0;
    for (int i=1;i<= n;i+=2) 
    {
    sum+=arr[i];
    }
    return sum;
}

// input
void inputElements(int n, double arr[]) 
{
    printf("Input array elements:\n");
    for (int i=1;i<=n;i++) 
    {
    printf("a%d: ", i);
    scanf("%lf", &arr[i]);
    }
}
// output
void outputElements(int n, double arr[]) 
{
    printf("Array elements:\n");
    for (int i=1;i<=n;i++) 
    {
    printf("a%d: %.2lf\n", i, arr[i]);
    }
}
int inputAmount()
{
    int n;
    printf("Input amount of array elements: ");
    scanf("%d", &n);
    return n;
}
int main() 
{
    int n;
    double arr[100];
    double sum;
    n = inputAmount();
    inputElements(n, arr);
    outputElements(n, arr);
    sum = calculateSum(n, arr);
    printf("Sum of elements with an odd index: %.2lf\n", sum);
    return 0;
}