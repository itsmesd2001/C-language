/*     Unit	                         Charge/unit
    upto 199	                       @1.20
    200 and above but less than 400	   @1.50
    400 and above but less than 600	   @1.80
    600 and above	                   @2.00   */


   #include<stdio.h>
   #include<string.h>
   int main(){
       int id, units;
       float charge, amount;
       char name[25];
       printf("Please Enter you Name: ");
       scanf("%s", &name);
       printf("Please Enter you Customer ID: ");
       scanf("%d", &id);
       printf("Please Enter the Units consumed this month: ");
       scanf("%d", &units);

       if (units<199)
       {
           charge=1.2;
           amount= 1.2*units;
          
            }
            
       else if (units>200 && units<400)
       {
           charge=1.5;
           amount= 1.2*199 + 1.5*(units-199);
       }

       else if (units>400 && units<600)
       {
           charge=1.8;
           amount=1.2*199 + 1.5*(199) + 1.8*(units-400);
       }
       else if (units>600)

       {
           charge=2;
           amount=1.2*199 + 1.5*(199) + 1.8*(200)+2*(units-600);
       }
         
           printf("Your Electricity Bill is as follows:\n ");
           printf("\nName:%s\n", name);
           printf("\nCustomer ID: %d\n", id);
           printf("\nUnits consumed this month:%d\n", units);
           printf("\nThe amount to be paid before due date: %f Rs\n",  amount);
           printf("\nThe due date is 20th of this month. After due date you will be charged @5percent per day as fine.\n");
       

       return 0;
   }