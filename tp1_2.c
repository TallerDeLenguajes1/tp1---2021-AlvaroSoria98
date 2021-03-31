#include <stdio.h>
int cuadradoUno(int *n);
void cuadradoDos(int *n);
void invertir(int *prim,int *seg);
int main (){
    int n,a,b;
    printf("ingrese un numero: ");
    scanf("%d", &n);
    printf("%d al cuadrado= %d\ndireccion de memoria: %p\n", n, cuadradoUno(&n), n);//funcion cuadrado int
    printf("%d al cuadrado= ",n);
    cuadradoDos(&n);//funcion cuadrado void
    printf("%d",n);
    printf("\n----------------------------------------------------------\n");
    printf("ingrese 2 valores para invertir: \nvalor de a: ");
    scanf("%d",&a);
    printf("\nvalor de b:");
    scanf("%d",&b);
    invertir(&a,&b);//funcion invertir
    printf("\nvalor de a= %d\nvalor de b: %d", a,b);
    return 0;
}
int cuadradoUno(int *n){
    return *n * *n;
}
void cuadradoDos(int *n){
    *n*=*n;
}
void invertir(int *prim,int *seg){
    int aux, aux2;
    aux=*prim;
    aux2=*seg;
    *prim=aux2;
    *seg=aux;
}