#include<stdio.h>
int main()
{
    float c;
    printf("Unesite broj\n");
    scanf("%f",&c);
    printf("Uneti broj je (f) = %f\n",c); 
    printf("Uneti broj je (.8f) = %.8f\n",c);  
    printf("Uneti broj je (lf) = %lf\n",c);      
    printf("Uneti broj je (g) = %g\n",c);	
    printf("Uneti broj je (e) = %e\n",c);
    return 0;
}
