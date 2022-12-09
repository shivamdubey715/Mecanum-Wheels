#include <stdio.h>

void directionOfMotion(char w1, char w2, char w3, char w4)
{
    if (w1 == '+' && w2 == '+' && w3 == '+' && w4 == '+' || w1 == '0' && w2 == '+' && w3 == '+' && w4 == '0' || w1 == '+' && w2 == '0' && w3 == '0' && w4 == '+'){
        printf("Direction of the motion is in North direction\n");
    }
    else if (w1 == '-' && w2 == '-' && w3 == '-' && w4 == '-' || w1 == '0' && w2 == '-' && w3 == '-' && w4 == '0' || w1 == '-' && w2 == '0' && w3 == '0' && w4 == '-'){
        printf("Direction of the motion is in South direction\n");
    }
    else if (w1 == '+' && w2 == '-' && w3 == '+' && w4 == '-' || w1 == '+' && w2 == '-' && w3 == '0' && w4 == '0' || w1 == '0' && w2 == '0' && w3 == '+' && w4 == '-'){
        printf("Direction of the motion is in West direction\n");
    }
    else if (w1 == '-' && w2 == '+' && w3 == '-' && w4 == '+' || w1 == '-' && w2 == '+' && w3 == '0' && w4 == '0' || w1 == '0' && w2 == '0' && w3 == '-' && w4 == '+'){
        printf("Direction of the motion is in East direction\n");
    }
    else if (w1 == '+' && w2 == '0' && w3 == '+' && w4 == '0'){
        printf("Direction of the motion is in North-West direction\n");
    }
    else if(w1 == '-' && w2 == '0' && w3 == '-' && w4 == '0'){
        printf("Direction of the motion is in South-East direction\n");
    }
    else if(w1 == '0' && w2 == '+' && w3 == '0' && w4 == '+'){
        printf("Direction of the motion is in North-East direction\n");
    }
    else if(w1 == '0' && w2 == '-' && w3 == '0' && w4 == '-'){
        printf("Direction of the motion is in South-West direction\n");
    }
}

int main()
{
    // Please refer the following conditions to do inputs
    // '+' ----> clockwise direction
    // '-' ----> anti-clockwise direction
    // '0' ----> not in motion(rest)
    char w1, w2, w3, w4;
    scanf("%c %c %c %c", &w1, &w2, &w3, &w4);
    directionOfMotion(w1, w2, w3, w4);
    return 0;
}