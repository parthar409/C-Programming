#include<stdio.h>

int getFirstDayofTheYear (int year){ 
    int day = (year * 365 + ((year - 1)/4) - ((year - 1)/100) + ((year - 1)/400)) % 7;
}

int main(){ 
    char *months[] = {"Janury","February","March","April","May","June","July","August","September","Octomber","Nombemr","December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};
    int totalDayes, weekday=0, year;

    printf("Enter your favarite year: ");
    scanf("%d", &year);
    printf("\n*** Wellcome to %d ***\n", year);

    if((year%4==0 && year%100!=0) || (year%400==0)){ 
        daysInMonth[1] = 29;
    }

    weekday = getFirstDayofTheYear (year);

    for(int i=0; i<12; i++){ 
        printf("\n\n\n-----------------%s------------------\n", months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for(int spaceCounter=1; spaceCounter<=weekday; spaceCounter++){ 
            printf("      ");
        }

        totalDayes = daysInMonth [i];
        for(int j=1; j<=totalDayes; j++){ 
            printf("%6d", j);
            weekday++; 
            if(weekday > 6){ 
                weekday=0;
                printf("\n"); 
            }
        }
    }
}