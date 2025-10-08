#include <stdio.h>

void happyBirthday(char name[], int age) {
    printf("Happy Birthday to You!\n");
    printf("Happy Birthday to You!\n");
    printf("Happy Birthday Dear %s!\n", name);
    if(age >= 30) {
    printf("Happy Birthday to You elder!\n");
    }else{
    printf("Happy Birthday to You %d years old person!\n", age);
    }
}

int main() {

    char name[] = "";
    int age = 0;

    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    

    happyBirthday(name, age);
    return 0;
}