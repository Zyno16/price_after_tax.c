#include <stdio.h>
#include <stdlib.h>

int main()
{char x,a,b,c;
float price,z;
    printf("what is the category of iteams choose a or b ou c ?: ");
    scanf("%c",&x);
    printf("what is the price of iteams");
    scanf("%f",&price);

    if (x=='a'){
    z=price+(price*0.07);
    printf("the price is %f\n",z);
    }
    else if (x=='b'){
        z=price+(price*0.2);
        printf("the price is %f\n",z);
}
    else if (x=='c'){
        z=price+(price*0.25);
    printf("the prix is %f\n",z);
    }
    else { printf("you need to write the right character a or b or c");
    }
    return 0;
}
