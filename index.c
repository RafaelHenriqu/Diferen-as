#include <locale.h>

int Area_Retangulo(base,altura){
    //  Rectangle: �rea = base � altura
    return (base * altura);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("�rea do Rent�ngulo: %i",Area_Retangulo(20,20));
}
