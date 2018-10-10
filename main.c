#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float calculatorOfSalaryAfterLearningAptechInMonth13(float yearsOfExperience, float yearsOfWorking) {
    float salary;
    float heSo;
    if (yearsOfExperience == 0) {
        salary = 0;
    } else if (yearsOfExperience < 2) {
        salary = 10000000;
    } else if (yearsOfExperience >= 2 && yearsOfExperience <= 5) {
        salary = 20000000;
    } else if (yearsOfExperience > 5) {
        salary = 30000000;
    }
    if (yearsOfWorking < 1) {
        heSo = 0.3;
    } else if (yearsOfWorking >= 1 && yearsOfWorking < 2 ) {
        heSo = 0.5;
    } else if (yearsOfWorking >= 2 && yearsOfWorking < 5 ) {
        heSo = 1;
    } else if (yearsOfWorking >= 5) {
        heSo = 2;
    }
    return salary * heSo;
}

int main() {
    float yearsOfExperience;
    float yearsOfWorking;
    char choice;
    while (true) {
        printf("Nhập số năm kinh nghiệm của bạn: \n");
        scanf("%f", &yearsOfExperience);
        printf("Nhập số năm làm việc cho công ty của bạn: \n");
        scanf("%f", &yearsOfWorking);
        printf("%.2f", calculatorOfSalaryAfterLearningAptechInMonth13(yearsOfExperience, yearsOfWorking));
        printf("Bạn Muốn Tiếp Tục Chứ ? (y/n)");
        scanf("%s", &choice);
        if (choice == 'n' || choice == 'N') {
            printf("Bye");
            break;
        }
    }
    return 0;
}
