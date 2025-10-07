#include <stdio.h>



void calculate_base_fees() {
    int Num;
    char arr[Num][1];
    float Total;
    int f;
    int Bonus;

     for (int i = 0; i < Num; i++)
   {
        if (arr[i][1] == '0')
        {
            f = f + 15;
        } else if (arr[i][1] == 'B') {
            f = f + 40;
        } else if (arr[i][1] == 'A') {
            f = f + 20;
        }
        
   }
   
    printf ("Total Base Fee: %d THB", f); 
 

}


void calcalate_final_fees() {

    
   int Num;
   char arr[Num][1];
   float Total;
   int f;
   int Bonus;

    for (int i = 0; i < Num; i++)
    {
        if (arr[Num][1] = 'B')
        {
            Bonus = f + f*20/100;
        } else if (arr[Num][1] = 'A')
        {
            Bonus = f + f*10/100;
        } else if (arr[Num][1] = 'O' && Total > 50000){
            Bonus = f + f*5/100;
        }
        }
        
        
    
    


}






int main() {

   int Num;
   char arr[Num][1];
   float Total;
   int f;
   int Bonus;
   

   printf("*** Transaction Fee Calculator ***\n");

   printf("Enter number of transaction (3-12): ");
   scanf("%d", &Num);


   for (int i = 0; i < Num; i++)
   {

        printf("Enter Chanel Type for TNX %d (O,B,A): ",i+1);
        scanf("%s", &arr[i][1]);
        
        
   }
   
   printf("Enter total Transaction Value: ");
   scanf("%f", &Total);



   printf("--- Fee Summary ---\n");
   printf("Channel Type: Mixed (");
   
   for (int i = 0; i < Num; i++)
   {
        printf("%c|",arr[i][1]);
   }
    printf(")\n");

   
   printf("Transactions Made(%d):", Num);
   
   for (int i = 0; i < Num; i++)
   {
        printf("%c|",arr[i][1]);
   }


   printf("\n");
   
  

   


   return 0;
}