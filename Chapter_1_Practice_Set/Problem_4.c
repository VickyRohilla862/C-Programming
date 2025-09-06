// calculating simple interest
#include <stdio.h>
int main(){
    int p, r, t;
    printf("Enter the principal: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the number of years: ");
    scanf("%d", &t);
    int SI = (p * r * t) / 100;
    printf("The simple interest for principal ₹%d, rate %d%% and time %d is %d", p, r, t, SI);
    return 0;
}