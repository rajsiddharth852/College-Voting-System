#include<stdio.h>
int karnataka=0, sikkim=0, jaipur=0, bengaluru=0;
void electionResult()
{
    int wonByVote;
    if (karnataka > sikkim && karnataka > jaipur && karnataka > bengaluru)
    {
        printf("\n**manipal-karnataka won the election**\n\n");
        printf("Total vote of manipal-karnataka : %d\n",karnataka);
        wonByVote=karnataka-sikkim;
        printf("manipal-karnataka won by %d votes to manipal-sikkim\n",wonByVote);
        wonByVote=karnataka-jaipur;
        printf("manipal-karnataka won by %d votes to manipal-jaipur\n",wonByVote);
        wonByVote=karnataka-bengaluru;
        printf("manipal-karnataka won by %d votes to manipal-bengaluru\n",wonByVote);
    }
    else if (sikkim > jaipur && sikkim > bengaluru)
    {
        printf("\n**manipal-sikkim won the election**\n\n");
        printf("Total vote of manipal sikkim : %d\n",sikkim);
        wonByVote=sikkim-karnataka;
        printf("manipal-sikkim won by %d votes to manipal-karnataka\n",wonByVote);
        wonByVote=sikkim-jaipur;
        printf("manipal-sikkim won by %d votes to manipal-jaipur\n",wonByVote);
        wonByVote=sikkim-bengaluru;
        printf("manipal-sikkim won by %d votes to manipal-bengaluru\n",wonByVote);
    }
    else if (jaipur > bengaluru)
    {
        printf("\n**manipal jaipur won the election**\n\n");
        printf("Total vote of manipal-jaipur : %d\n",jaipur);
        wonByVote=jaipur-sikkim;
        printf("manipal-jaipur won by %d votes to manipal-sikkim\n",wonByVote);
        wonByVote=jaipur-karnataka;
        printf("manipal-jaipur won by %d votes to manipal-karnataka\n",wonByVote);
        wonByVote=jaipur-bengaluru;
        printf("manipal-jaipur won by %d votes to manipal bengular\n",wonByVote);
    }
    else if(karnataka == sikkim && karnataka == jaipur && karnataka == bengaluru)
    {
        printf("\nNo one won the election\n\n");
        printf("            manipal karnataka---manipal-sikkim---manipal-jaipur---manipal-bengaluru\n");
        printf("Total Vote   %d       %d        %d     %d\n",karnataka,sikkim,jaipur,bengaluru);
    }
    else
    {
        printf("\n**manipal bengular won the election**\n\n");
        printf("Total vote of manipal bengular : %d\n",bengaluru);
        wonByVote=bengaluru-sikkim;
        printf("manipal-bengaluru won by %d votes to manipal-sikkim\n",wonByVote);
        wonByVote=bengaluru-jaipur;
        printf("manipal-bengaluru won by %d votes to manipal-jaipur\n",wonByVote);
        wonByVote=bengaluru-karnataka;
        printf("manipal-bengaluru won by %d votes to manipal-karnataka\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        karnataka+=1;
        break;
    case 2:
        sikkim+=1;
        break;
    case 3:
        jaipur+=1;
        break;
    case 4:
        bengaluru+=1;
        break;
    }
}
void main()
{
    int choose;
    
    
        printf("\n****Welcome to the simple voting system project****\n\n");
        printf("                          collegee voting                       \n\n");
        printf("*********************\n");
        printf("|           1.manipal-karnataka             |          2.manipal-sikkim        |\n");
        printf("*********************\n");
        printf("|           3.manipal-jaipur             |          4.manipal-bengaluru             |\n");
        printf("*********************\n\n");
    do
    {    
        printf("Press 1 to vote manipal-karnataka\n");
        printf("Press 2 to vote manipal-sikkim\n");
        printf("Press 3 to vote manipal-jaipur\n");
        printf("Press 4 to vote manipal-bengaluru\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}