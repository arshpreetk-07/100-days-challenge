//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

enum months{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
    
};

int main()
{
    int i;
    char month[20];
    enum months m;

    printf("enter month :");
    scanf("%s",month);

    for(i=0;month[i]!='/0';i++){
        month[i] = toupper(month[i]);
    }
    if(strcmp(month, "JAN") == 0)
        m = JAN;
    else if(strcmp(month, "FEB") == 0)
        m = FEB;
    else if(strcmp(month, "MAR") == 0)
        m = MAR;
    else if(strcmp(month, "APR") == 0)
        m = APR;
    else if(strcmp(month, "MAY") == 0)
        m = MAY;
    else if(strcmp(month, "JUN") == 0)
        m = JUN;
    else if(strcmp(month, "JUL") == 0)
        m = JUL;
    else if(strcmp(month, "AUG") == 0)
        m = AUG;
    else if(strcmp(month, "SEP") == 0)
        m = SEP;
    else if(strcmp(month, "OCT") == 0)
        m = OCT;
    else if(strcmp(month, "NOV") == 0)
        m = NOV;
    else if(strcmp(month, "DEC") == 0)
        m = DEC;
    else
    {
        printf("Invalid month");
        return 0;
    }

    // Check enum value
    if(m == FEB)
    {
        printf("28 or 29 days");
    }
    else if(m == APR || m == JUN || m == SEP || m == NOV)
    {
        printf("30 days");
    }
    else
    {
        printf("31 days");
    }

    return 0;


        
}
