#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{


   int a, b;
   scanf("%d %d", &a, &b);
   int c = 3;
   int pomPomocniBroj;
   int pomDrugiPomocniBroj;
   int delilac;

   int pom(int a){
        while (a>0){
         pomPomocniBroj= a%10;
         pomDrugiPomocniBroj = a/10;
         if (3>(pomPomocniBroj-pomDrugiPomocniBroj)|| 3>(pomDrugiPomocniBroj-pomPomocniBroj)){

        }
        else {
                printf("%d", a);
        }
        delilac= a/10;
    }
   }




    if (a<10 || b < 10){
        printf("Brojevi moraju biti najmanje dvocifreni");
        return 0;
    }
    for (int i=a; i<b; i++){
            printf("%d", i);
    }




}


