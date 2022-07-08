# PAA - Trabalho 1
### Aluno: Hyago Gabriel Oliveira Figueiredo
### Matrícula: 170105067
### Clonar repo:
```
git clone https://github.com/hyagohoudini/PAA-TRAB1.git
```

## Alterar Implementação:
### Como alterar a implementação:
  #### Basta alterar a var FILE passada para o Makefile
 - make FILE=MERGE
 - make FILE=INSERTION
 - make FILE=BSEARCH1
			
**OBS: NÃO HÁ IMPLEMENTAÇÃO PADRÃO, O MAKEFILE ESPERA PELA DEFINIÇÃO DE 'FILE'**

## COMO RODAR:
### RECOMENDAÇÃO: 
  #### Utilizar os próximos comandos no root da pasta do trabalho
 - Para compilar o programa
    ```
    make compile FILE=***implementação***
    ```
 - Para compilar e rodar o trabalho de uma vez só, sem as entradas já definidas
    ```
    make exec FILE=***implementação***
    ```
 - Para compilar, rodar o trabalho e utilizar as entradas definidas pelo [SPOJ](https://www.spoj.com/) presentes nos arquivos `entrada.txt` 
    ```
    make entry FILE=***implementação***
    ```
**IMPORTANTE QUE NÃO HAJA MUDANÇA NOS DIRETÓRIOS PARA UM BOM FUNCIONAMENTO DO TRABALHO**

## Saída do Programa:
  Saídas esperadas, de cada implementação, para as entradas descritas na plataforma [SPOJ](https://www.spoj.com/).

## Perfil na plataforma:
  [Clique aqui](https://www.spoj.com/users/hyagogabriel/) para acessar a página de usuário
 - [Neste arquivo](./plaintext_version.txt) é possível encontrar uma pré-visualização local dos logs  

## Indicações da plataforma utilizada:
  - Compilador: g++
  - Sistema Operacional: Pop!_OS 22.04 LTS
  - Ambiente utilizado para programar:  Visual Studio Code