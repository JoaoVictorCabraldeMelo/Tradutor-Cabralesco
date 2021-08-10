# Instalação do Léxico

## Instale a biblioteca do flex (caso você não tenha!!!)

### Ubuntu

```bash
sudo apt-get update
sudo apt-get install flex
```
### Arch

```bash
sudo pacman -S flex
```

## Compilação

Caso você seja do tipo não quero ver nada tem o make

```bash
make
```

Caso você seja do tipo gosto do manual segue os comandos abaixo

### Agora para criar o lex.yy.c rode dentro do src/

```bash
lex lexico.l
```

### Compilação do arquivo gerado pelo flex

```bash
cc -Wall lex.yy.c -lfl -o tradutor
```
#### Caso encontre um error assim 

```bash
/usr/bin/ld: /tmp/ccTvAXPd.o: na função "yylex":
lex.yy.c:(.text+0xb8e): referência não definida para "yywrap"
collect2: error: ld returned 1 exit status
```
#### descomente esse código no src/lexico.l e tente compilar novamente

```c
/*%option noyywrap*/
```

## Testes

```bash
./tradutor ./test/error.c
./tradutor ./test/error1.c
./tradutor ./test/success.c
./tradutor ./test/success1.c
```
