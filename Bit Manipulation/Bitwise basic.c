#include <stdio.h>

// Set kth bit
int setKthBit(int n, int k) 
{
    int mask = (1 << (k-1));
    return mask | n;
}

// Clear kth bit
int clearKthBit(int n, int k) 
{
    int mask = (1 << (k-1));
    int ans = n & ~(mask);
    return ans;
}

int main()
{
    int num,k ;
    printf("Enter number and position:\n");
    scanf("%d %d", &num, &k);
    
    printf("SetKthBit = %d\n", setKthBit(num,k));
  
    printf("ClearKthBit = %d\n", clearKthBit(num,k));
    
    return 0;
}
