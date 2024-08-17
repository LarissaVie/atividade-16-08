#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
    int idade;
    char nome[50], endereco[50];
};
int main(){
    struct Pessoa p1;

    printf("Digite o nome: ");

    fgets(p1.nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    setbuf(stdin, NULL);
    printf("Digite o endereco: ");
    fgets(p1.endereco, 50, stdin);

    printf("Nome: %sIdade: %d\nEndereco: %s\n", p1.nome, p1.idade, p1.endereco);
    return 0;
}