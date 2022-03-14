#include<stdio.h>
int main()
	{
    char employee_name[10]; 
    char employee_number[10];
    int Kra_pin[100];
    int hours_worked[100];
    printf("enter employee name\n");
    scanf("%s", &employee_name);
    printf("enter the employee number\n");
    scanf("%s", &employee_number);
    printf("enter the KRA pin\n");
    scanf("%s", &Kra_pin);
    printf("enter the hours worked\n");
    scanf("%s", &hours_worked);
    printf("employee details are %s %s %s %s", employee_name, employee_number, Kra_pin, hours_worked);
    {
    int x, y, normal_pay, overtime_pay, tax_paid, net_income, result;
    x=1000;
    y=40;
    printf("enter the two numbers\n", x, y);
    scanf("%d%d", &x, &y);
    result = result;
    normal_pay = x*y;
    overtime_pay = x*y+x*y*0.5;
    tax_paid = x*y*30/100;
    net_income = x*y-x*y*30/100;
    printf("normal pay=%d\n", normal_pay);
    printf("overtime pay=%d\n", overtime_pay);
    printf("tax paid=%d\n", tax_paid);
    printf("net income=%d\n", net_income);
    return 0;
}
}
