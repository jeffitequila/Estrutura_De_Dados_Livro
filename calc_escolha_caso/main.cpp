#include <iostream>

int main() {
    float num1, num2;
    char op;

    printf("Digite: numero op numero\n");
    scanf("%f %c %f", &num1, &op, & num2);

    switch (op){
        case '+': printf("= %2.2f", num1 + num2);
            break;
        case '-': printf(" = %2.2f", num1 - num2);
            break;
        case '*': printf(" = %2.2f", num1 * num2);
            break;
        case '/': printf(" = %2.2f", num1 / num2);
            break;
    }
    return 0;
}