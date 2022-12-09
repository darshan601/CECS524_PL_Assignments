# include <stdio.h>
# include <math.h>

void main(){
    printf("This program calculates the real or imaginary roots of a quadratic equation.\n");
    printf("Input is of the form A B C where A,B and C are the coefficients of the equation.\n");
    printf("Enter 0 0 0 to quit.\n");

    int a,b,c;
    int count=0;

    while (a!=0 || b!=0 || c!=0)
    {   
        printf("Enter a b c values:");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        // printf("stored Succeffulyy");
        // printf("%d",a);
        // printf("%d",b);
        // printf("%d\n",c);

        if (a==0 && b==0 && c==0)
        {
            printf("%d cases were solved.\n",count);
        }
        else
        {
            float disc=(b*b)-(4*a*c);
            // printf("%f",disc);
            
            float root1,root2;

            if (disc==0)
            {
                /* code */
                root1=(-b)/(2*a);
                root2=0;
                printf("One real root...\n");
                printf("Root1 =%f\n",root1);
            }
            else if (disc<0)
            {
                /* code */
                root1=((-b)+sqrt(disc*-1))/(2*a);
                root2=((-b)-sqrt(disc*-1))/(2*a);
                printf("Roots are imaginary\n");
				printf("Root1 = i*%f\n",root1);
				printf("Root2 = i*%f\n",root2);
            }
            else if (disc>0)
            {
                root1=((-b)+sqrt(disc))/(2*a);
				root2=((-b)-sqrt(disc))/(2*a);
                printf("Roots are real..\n");
				printf("Root1 = %f\n",root1);
				printf("Root2 = %f\n",root2);
            }
            
            count++;
        }
    }
}
