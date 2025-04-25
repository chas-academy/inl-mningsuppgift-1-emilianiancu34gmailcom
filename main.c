#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int diceroll[100],one=0,two=0,three=0,four=0,five=0,six=0,i,s=0; 
    srand(1);
    for(i=0;i<100;i++)
    {
        diceroll[i]=(rand()%6)+1;
        s+=diceroll[i];
    }
    for(i=0;i<100;i++)
    {
        if(diceroll[i]==1)
        one++;
        if(diceroll[i]==2)
        two++;
        if(diceroll[i]==3)
        three++;
        if(diceroll[i]==4)
        four++;
        if(diceroll[i]==5)
        five++;
        if(diceroll[i]==6)
        six++;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",one,two,three,four,five,six,s);
    printf("%.1f",s/100.0);

    // Your code goes here

    return 0;
}
