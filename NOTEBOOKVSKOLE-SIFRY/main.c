#include <stdio.h>
#include <stdlib.h>

void encrypt(FILE *fr, FILE *fw, int shift);
void decrypt(FILE *fr, FILE *fw, int shift);

int main(int argc, char *argv[]) {
    FILE *fr;
    FILE *fw;

    fr = fopen("encrypt.txt", "r");
    fw = fopen("decrypt.txt", "w");

    if (fr == NULL || fw == NULL) {
        printf("error pri otvarani.\n");
        return 1;
    }

    int shift = 3; 
    encrypt(fr, fw, shift);
    
    fclose(fr);
    fclose(fw);
    
 //decryption
    fr = fopen("decrypt.txt", "r");
    fw = fopen("output.txt", "w");

    if (fr == NULL || fw == NULL) {
        printf("error pri otvarani.\n");
        return 1;
    }

    decrypt(fr, fw, shift);

    fclose(fr);
    fclose(fw);

    printf("hotovo.\n");

    return 0;
}

void encrypt(FILE *fr, FILE *fw, int shift) {
    char ch;
    while ((ch = fgetc(fr)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
        }
        fputc(ch, fw);
    }
}

void decrypt(FILE *fr, FILE *fw, int shift) {
    char ch;
    while ((ch = fgetc(fr)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - shift + 26) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - shift + 26) % 26 + 'a';
        }
        fputc(ch, fw);
    }
}

