#include<stdio.h>

void main()
{
    int tot=21,usr,com,i;
    while(tot>1)
    {
    printf("\nUser turn:");
    scanf("%d",&usr);
    tot=tot-usr;
    printf("\navailable match stickes %d",tot);
    if(tot==1)
    {
        printf("\ncomputer loss......!");
        //flag=1;
        break;
    }
    else if(tot>19)
    {
        com=tot-19;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
    }
    else if(tot>15)
    {
        com=tot-15;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
    }
    else if(tot>11)
    {
        com=tot-11;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
    }
    else if(tot>7)
    {
        if((tot-6)<=4) {
          com=tot-6;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
        }
        else{
          com=tot-7;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
        }
    }
    else if(tot==7)
    {
        com=1;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\navailable match stickes %d",tot);
    }
    else if(tot==5 || tot == 6)
    {
        com=4;
        tot=tot-com;
        printf("\ncomp turn: %d",com);
        printf("\n available match stickes %d",tot);
    }
     else if(tot<=4)
    {
        com=tot-1;
        tot=tot-com;
        printf("\n comp turn: %d",com);
        printf("\n available match stickes %d",tot);
    }
    }
    printf("\ncomputer wins.....!");
}
