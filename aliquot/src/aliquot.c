#include <stdio.h>
int main(void){
        long long num, len;
        long long limit = 1000000000000000LL;
        char ch; 
        printf("Please give the number to start the aliquot sequence from:");
         if (scanf("%lld", &num) !=1)
         {return 1;}
        printf("Provide the max aliquot length to look for (0 for unlimited):");
        if (scanf("%lld", &len) !=1)
        {return 1;}
        printf("Do you want to print the full sequence ('f') or just the length ('l')?");
        scanf(" %c", &ch);
        long long count = 0;
        if(num<=0)
        {
            return 1;
        }
        if (ch == 'f')
        {
            printf("%lld\n", num);
        }
       
        while(1)//ΥΠΟΛΟΓΙΣΜΟΣ ΑΛΙΚΟΥΟΤ
        {
            if (len !=0 &&count >=len)//ΕΛΕΓΧΟΣ ΜΗΚΟΥΣ ΑΝ ΤΟ ΦΤΑΝΕΙ ΣΤΑΜΑΤΑ 
            {
                break;
            }
             long long sum=1;// ΤΟ 1 ΕΙΝΑΙ ΔΙΑΙΡΕΤΗΣ ΟΛΩΝ ΤΩΝ ΑΡΙΘΜΩΝ
        if (num ==1)// ΑΝ ΕΙΝΑΙ 1 ΤΟΤΕ Η ΤΟΤΕ ΤΟ ΑΘΡΟΙΣΜΑ ΕΙΝΑΙ 0 
        {sum=0;}
        else 
        {
            for (long long i=2;i*i<=num ;i++ )//ΕΛΕΓΧΕΙ ΟΛΟΥΣ ΤΟΥΣ ΔΙΑΙΡΕΤΕΣ ΜΕΧΡΙ ΤΗΝ ΤΕΤΡΑΓΩΝΙΚΗ ΡΙΖΑ
            {
                if (num%i==0)//ΕΛΕΓΧΕΙ ΑΝ ΤΟ Ι ΕΙΝΑΙ ΔΙΑΙΡΕΤΗΣ
                {
                    sum += i;
                    if(i!=num/i)//ΕΛΕΓΧΕΙ ΑΝ ΤΟ Ι ΕΙΝΑΙ ΙΔΙΟ ΤΗ ΡΙΖΑ ΤΟΥ NUM
                    {
                    sum+=num/i;
                    }
                }
            }
        }
    num=sum;//ΑΝΤΙΜΕΤΑΘΕΣΗ ΤΟΥ NUM ΜΕ ΤΟ SUM
    count++;
    if (num>limit)//ΕΛΕΓΧΟΣ ΑΝ ΞΕΠΕΡΑΣΕ ΤΟ ΟΡΙΟ 
    {
         printf("Number exceeds maximum supported integer (%lld). Stopping.\n", limit);
        return 1;
    }
    if (num==0 || num==1){
        break;
    }
if (ch=='f')       
       {
        printf("%lld\n", num);
       }
    }
    if (ch =='l')
    {
         printf("Length of aliquot sequence: %lld\n", count);
    }
              
return 0;}
       
