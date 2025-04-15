//shorttieee array position wise!
#include <stdio.h>

int main() {
    char str[1000];
    int digitCount[10] = {0}; 
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digitCount[str[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", digitCount[i]);
    }
    return 0;
}


//long mine
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char sentence[100];
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    fgets(sentence,sizeof(sentence),stdin);
    for(int i=0;sentence[i] != '\0';i++)
    {
        if(sentence[i]=='0')
        {
            zero++;
        }
        else if(sentence[i]=='1')
        {
            one=one+1;
        }
        else if(sentence[i]=='2')
        {
            two++;
        }
        else if(sentence[i]=='3')
        {
            three++;
        }
        else if(sentence[i]=='4')
        {
            four++;
        }
        else if(sentence[i]=='5')
        {
            five++;
        }
        else if(sentence[i]=='6')
        {
            six++;
        }
        else if(sentence[i]=='7')
        {
            seven++;
        }
        else if(sentence[i]=='8')
        {
            eight++;
        }
        else if(sentence[i]=='9')
        {
            nine++;
        }
    
}
printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
}
