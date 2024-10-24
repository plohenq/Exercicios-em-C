#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct Usuario {
    int id;
    char nome[50];
    int idade;
};

// Funções CRUD
void criarUsuario(struct Usuario *usuarios, int *contador) {
    printf("Digite o ID: ");
    scanf("%d", &usuarios[*contador].id);
    
    printf("Digite o nome: ");
    scanf("%s", usuarios[*contador].nome);

    printf("Digite a idade: ");
    scanf("%d", &usuarios[*contador].idade);

    (*contador)++; // Incrementa o contador de usuários
}

void lerUsuarios(struct Usuario *usuarios, int contador) {
    for (int i = 0; i < contador; i++) {
        printf("ID: %d, Nome: %s, Idade: %d\n", usuarios[i].id, usuarios[i].nome, usuarios[i].idade);
    }
}

void atualizarUsuario(struct Usuario *usuarios, int contador, int id) {
    for (int i = 0; i < contador; i++) {
        if (usuarios[i].id == id) {
            printf("Digite o novo nome: ");
            scanf("%s", usuarios[i].nome);
            
            printf("Digite a nova idade: ");
            scanf("%d", &usuarios[i].idade);
        }
    }
}

void deletarUsuario(struct Usuario *usuarios, int *contador, int id) {
    for (int i = 0; i < *contador; i++) {
        if (usuarios[i].id == id) {
            for (int j = i; j < *contador - 1; j++) {
                usuarios[j] = usuarios[j + 1]; // Move os elementos
            }
            (*contador)--; // Diminui o contador de usuários
            break;
        }
    }
}

// Programa principal
int main() {
    struct Usuario usuarios[100]; // Armazena até 100 usuários
    int contador = 0;
    int opcao, id;

    do {
        printf("1. Criar Usuario\n");
        printf("2. Ler Usuarios\n");
        printf("3. Atualizar Usuario\n");
        printf("4. Deletar Usuario\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criarUsuario(usuarios, &contador);
                break;
            case 2:
                lerUsuarios(usuarios, contador);
                break;
            case 3:
                printf("Digite o ID do usuario a ser atualizado: ");
                scanf("%d", &id);
                atualizarUsuario(usuarios, contador, id);
                break;
            case 4:
                printf("Digite o ID do usuario a ser deletado: ");
                scanf("%d", &id);
                deletarUsuario(usuarios, &contador, id);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
