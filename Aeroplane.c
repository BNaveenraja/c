#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int c,p,i,j,b;
char a;
int s[10]={};
printf("*Welcome to Airline Seat Reservations System*\n\n");
for (j=0; j<10; j++)
{printf("\nCustomer Name:");
scanf("%s",&a);
printf("Customer Phone no:");
scanf("%d",&b);
printf("Choose 1 for First Class and 2 for Economic class\t");
scanf("%i",&c);
switch(c)
{
case 1:
printf("\nFirst class\n");
printf("Seats available are 1,2,3,4,5.\n");
do
{
                printf("Pick a seat:\n\n");
                scanf("%i",&p);
                s[j]=p;
   for (i=0; i<j; i++)
   {
                    if (s[j]==s[i])
                    {
                        printf("\n\n Seat %d is already booked.\n\n",p);
                        break;
                    }
   }
            }
            while (i!=j);
                if(s[j] <= 5)
                {
                    printf("\n");
                    printf("Class: First class\n");
                    printf("Seat no : %i\n",s[j]);
                    printf("Ticket has been booked");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
case 2:
printf("\nEconomical class\n");
printf("Seats available are 6,7,8,9,10.\n");
do
{
                printf("Pick a seat:\n\n");
                scanf("%i",&p);
                s[j]=p;
   for (i=0; i<j; i++)
   {
                    if (s[j]==s[i])
                    {
                        printf("\n\n Seat %d is already booked.\n\n",p);
                        break;
                    }
   }
            }
            while (i!=j);
                if(s[j] >= 6)
                {
                    printf("\n");
                    printf("Class: Economical class\n");
                    printf("Seat no : %i\n",s[j]);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        default:
                break;
        }
    }
return 0;
}
