// Дефинирайте тип Person с име и възраст.
// ● Дефинирайте масив от Person и го инициализирайте.
// ● Дефинирайте тип PersonNode с 2 member-а: Person и PersonNode* - информация за Person и указател към PersonNode, който
// може да сочи към друг обект от тип PersonNode.
// ● Дефинирайте масив от тип PersonNode. Обходете масива и копирайте информацията за всеки елемент от съответстващия му по
// индекс елемент от първия масив (от тип Person). В същия цикъл пренасочете всеки member указател към PersonNode към
// следващия елемент от масива, който обхождаме (към 0 за последния елемент)
// ● Принтирайте съдържанието на създадения от нас свързан списък, използвайки само PersonNode обекти и техните members (без
// да използвате името на масивите). Дефинирайте отделна функция за тази цел.
// ● Обходете масива отново и пренасочете member указателите на всеки PersonNode, чиито Person обект е с възраст над 18 год,
// така че да сочат към следващия обект от масива от тип PersonNode, чиито Person member е с възраст над 18 год. (ако обектите с
// индекс 0 и 1 и 4 са над 18, обектите с индекс 2 и 3 са под 18, member указателят на обект с индекс 1 трябва да почне да сочи не
// към обект с индекс 2, ами да “пропусне всички следващи елементи под 18” и да се пренасочи към обект с индекс 4)
// ● Принтирайте съдържанието на масива (всички хора) и на списъка (само над 18).

#include <stdio.h>
typedef struct person
{
    char name[20];
    int age;
} persoN, personNode;
int main()
{
    persoN p1;
    printf("Enter the details of person s1: ");
    printf("\nEnter the name of the person:");
    scanf("%s", &p1.name);
    printf("\nEnter the age of person:");
    scanf("%d", &p1.age);
    printf("\n Name of the student is : %s", p1.name);
    printf("\n Age of the student is : %d", p1.age);
    return 0;
}