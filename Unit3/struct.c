#include<stdio.h>
struct student{
    int alg;
    int fis;
    float promedio;
    char* name;
    char* group;
};
struct transporte{
    int llantas;
    char* color;
    char* name;
};



int main(){
struct student sonia = {10,10,10,"sonia","A"};
struct student diego = {5,7, 6.5, "Diego", "A"};

struct transporte coche= {4,"negro","Honda Civic"};
struct transporte autobus = {8, "morado", "Ruta 17"};
struct transporte moto={2, "blanca", "Honda"};

//show info
printf("%s:   %f\n",sonia.name, sonia.promedio);

return 0;
}


