#include <stdio.h>

int main() {
    char correctPassword[] = "12345"; 
    char ch; 
    int i = 0, isCorrect = 1; 

    printf("Nhap mat khau: ");

    while (correctPassword[i] != '\0') { 
        scanf(" %c", &ch);
        if (ch != correctPassword[i]) { 
            isCorrect = 0; 
            break; 
        }
        i++;
    }

    if (isCorrect && i == 5) { 
            printf("Mat khau chinh xac. Dang nhap thanh cong!\n");
    } else {
        printf("Mat khau sai. Vui long thu lai!\n");
    }

    return 0;
}
