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
       
        while(1)
        {
            if (len !=0 &&count >=len)
            {
                break;
            }
             long long sum=1;
        if (num ==1)
        {sum=0;}
        else 
        {
            for (long long i=2;i*i<=num ;i++ )
            {
                if (num%i==0)
                {
                    sum += i;
                    if(i!=num/i)
                    {
                    sum+=num/i;
                    }
                }
            }
        }
    num=sum;
    count++;
    if (num>limit)
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
       
