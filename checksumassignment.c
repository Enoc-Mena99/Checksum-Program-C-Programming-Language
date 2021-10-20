#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int sumCheck = 0;
    int checkSumRight = 0;
    int checkSumLeft = 0;

    int b;
    char *buf = fileAsStringFunc(argv[1]);

    for(b = 0; b < sizeof(buf); b++) {
        sumCheck = (int)(buf[b]) + sumCheck;
        printf("\n Check sum %d\n", sumCheck);
    }
    printf("The initial sum is: %d", sumCheck);

    if(sumCheck > 255) {
        checkSumLeft = sumCheck;
        checkSumLeft = checkSumLeft >> 8;
        checkSumRight = sumCheck;
        sumCheck = checkSumLeft + checkSumRight;
    }

    sumCheck = sumCheck;

    printf("The check sum: %d", sumCheck;

}

char * fileAsStringFunc(char *file)
{
    char *inData = malloc(sizeof(char) * 256);
    useFile * input;
    input = fopen(file, "r");
    printf("%d\n", sizeof(inData));
    int a = 0;
    while(!feof(input) {
        inData[i] = fgetc(input);
        a++;
    }
    inData[i] = '\0';
    fclose(input);
    return inData;
}
