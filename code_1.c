include<stdio.h>
#include<math.h>
int main()
{
    int deg, cons[10], a[10], i, n, iter;
    float x0, x1, fx0, fx1, x3, finalresult;
    printf("Enter the degree of polynomial ");
    scanf("%d", &deg);  // Highest degree of polynomial

    for(i=deg; i>=0; i--)
    {
    printf("Enter the coffiecient of %d degree of polynomial ",i);
    scanf("%d", &cons[i]);     // In this stage we are going to take coffiecient of degree from the user
    }

    printf("Enter the value of x0  \n");
    scanf("%f", &x0);     // Taking the vlue of x0

    printf("Enter the value of x1  \n");
    scanf("%f", &x1);     // Taking the value of x1
    
    for(i=deg; i>=0; i--){
        a[i]= (pow(x0, i)*cons[i]);      // here we are using the pow function i.e the power of the degree of polynomial and then multiplying it by constant
        fx0=fx0+a[i];
    }
    printf("The value of f(x0) is %f \n", fx0);
    
    for(i=deg; i>=0; i--){
        a[i]= (pow(x1, i)*cons[i]);    // same will be performed with x1
        fx1=fx1+a[i];
    }
    printf("The value of f(x1) is %f \n", fx1);
    
    printf("Enter the number of iteration ");
    scanf("%d", &iter);         // here we are going to take the number of iteration from the user
    
    
    for(n=0; n<=iter; n++)
    {
        x3=(x0+x1)/2;      // we are finding out the average of x1 and x0 and storing it in x3
        
        for(i=deg; i>=0; i--)
        {
            a[i]=(pow(x3, i)*cons[i]);   // in this we are multiplying the  average with the constant and storing it in array
            finalresult=finalresult+a[i];   // in this we are storing the final result
            }
        
            if(finalresult<0){
                x0=x3;
            }
            else{
                x1=x3;
            }
    
    printf("The value of function is %f \n ", finalresult);
    printf("\n");
    printf("The value of x0 is %f \n and x1 is %f \n", x0, x1);
}
    
    return 0;
    
        
    }
