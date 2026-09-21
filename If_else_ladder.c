#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student :");
    scanf("%d" ,&marks);
   
    //4
    if (marks>40)
    {
       
        //3
        if(marks>75)
        { 
            //2
            if (marks>85)
            {
               //1
                if(marks>95)
                {
                     printf("The student falls into O category");
                }
                else
                {
                    printf("The student falls into A category");
                }
            }
                //1
            else
            {
                printf("The student falls into DISTINCTION category");
            
            }
        }
            //2
            else 
        {
                        printf("The student falls into PASS category");
        }
    }
        //3
        else 
    {
         printf("The student falls into FAIL category");
    }
    //4
        return 0;
}


            
           
