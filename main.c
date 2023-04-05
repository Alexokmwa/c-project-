#include <stdio.h>
/*THIS PROGRAM DOES CALCULATION OF RENTAL INCOME FROM A LIST OF PROPERTIES OWNED BY A LANDLOARD
THE PRODUCTS OWNED AS PER THE PROGRAM ARE STUDIOS AND HOUSES */
int total_rental_income(int,int,int,int);
int income_for_property(int  ,int );
int main()
{
    printf("\nSTAR RENTALS \n");
    int studios,studiosrent,studio_total;

    int one_bedroom,one_bedroomrent,one_bedroomtotals;
    int two_bedroom,two_bedroomrent,two_bedroomtotals;
    int three_bedroom,three_bedroomrent,three_bedroomtotals;
    int Total_rent;
printf("--------------------------------------------\n");
    printf("input number of studios: ");

    scanf("%d",&studios);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input rent of studiosrent: ");
    scanf("%d",&studiosrent);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input number of one_bedroom: ");
    scanf("%d",&one_bedroom);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input rent of one_bedroomrent: ");
    scanf("%d",&one_bedroomrent);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input number of two_bedroom: ");
    scanf("%d",&two_bedroom);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input rent of two_bedroom: ");
    scanf("%d",&two_bedroomrent);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input number of three_bedroom: ");
    scanf("%d",&three_bedroom);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    printf("input rent of three_bedroom: ");
    scanf("%d",&three_bedroomrent);
    printf("--------------------------------------------\n");
    fgetc(stdin);
    studio_total= income_for_property(studios,studiosrent);
    one_bedroomtotals=income_for_property(one_bedroom,one_bedroomrent);
    two_bedroomtotals=income_for_property(two_bedroom,two_bedroomrent);
    three_bedroomtotals=income_for_property(three_bedroom,three_bedroomrent);
    printf("        \nSTAR RENTALS\n");

    printf("\nDEAR LANDLOARD HERE IS THE TOTAL RENT COLLECTION: \n");
    printf(" \nTotal studio rent is: %d\n\n",studio_total);
    printf("\nTotal one_bedroom rent is: %d \n\n",one_bedroomtotals);
    printf("\nTotal two_bedroom rent is: %d\n\n",two_bedroomtotals);
    printf("\nTotal three_bedroom rent is: %d\n\n",three_bedroomtotals);

    Total_rent=total_rental_income(studio_total,one_bedroomtotals,two_bedroomtotals,three_bedroomtotals);
    printf("--------------------------------------------\n");
    printf("total rental collection is: %d\n",Total_rent);
    printf("--------------------------------------------\n");
    return 0;
}

int income_for_property(int rent ,int rentals)
{

 int total_amount;
 total_amount=(rent*rentals);
 return total_amount;
}
int total_rental_income(int a,int b,int c,int d)
{
 int totals;
 totals=(a+b+c+d);
 return totals;
}
