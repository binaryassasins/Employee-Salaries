/*
    Student Name: MOHAMAD SYAFIQ ASYRAF BIN BHARUDIN                            Matric No:201178
    Section No: 404
    Date: 19/05/2021
    Program description: Calculating employees salaries based on EmployeeID
*/
#include <stdio.h>
#define RATE1 4.00
#define RATE2 6.00
#define RATE3 8.00
#define TAX 0.08
#define EPF 0.10
#define UNION 10.00

int main()
{
    int ID, hour, entry, employee;
    double gross_pay, deduction, nett_pay, tot_deduction, tot_nett_pay, sum;
    char option;

    printf("\t\tWELCOME TO GREAT RESOURCES SDN. BHD.\t\t\n");
    do
    {   
        printf("Employee ID #%d: ", employee);
        
        employee=1;     
        sum=0;
        do
        {
            scanf("%d", &ID);

                if (ID<111 || ID>999)
                {
                    printf("Invalid input. Please enter again.\n");
                }
        } while (ID<111 || ID>999);
        
        printf("Input working hours: ");
        do
        {
            scanf("%d", &hour);

                if (hour<1 || hour>80)
                {
                    printf("Invalid input. Please enter again.\n");
                }
        } while (hour<1 || hour>80);

        if (hour<=40)
        {
            gross_pay=RATE1*hour;

        }
        else if (hour>=41 && hour<=50)
        {
            gross_pay=(double)RATE2*hour;

        }
        else if (hour>=50)
        {
            gross_pay=(double)RATE3*hour;

        }
        
        tot_nett_pay+=sum;
        printf("\n============================\n");
        printf("EMPLOYEE ID : %d\n", ID);
        printf("GROSS PAY (RM): %.2lf\n", gross_pay);
        printf("DEDUCTION (RM): %.2lf\n", deduction);            
        printf("NETT PAY (RM): %.2lf\n", nett_pay);
        printf("\n============================\n");
        
        printf("Continue with next employee? Y-yes, N-no: ");
        scanf(" %c", &option);
        
    } while (option!='N');
    
    printf("Total employees: %d\n", entry);
    printf("Total deduction (RM): %lf\n", tot_deduction);
    printf("Total net pay (RM): %lf", tot_nett_pay);

    //system("pause");
    return 0;
}
