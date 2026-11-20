# TrigonoMath-C

Calculadora desenvolvida em C para explorar operações matemáticas e funções trigonométricas sem usar a biblioteca `math.h`.

O projeto está em desenvolvimento. No momento, contém operações aritméticas, potência, raiz quadrada e um cálculo de hipotenusa pelo teorema de Pitágoras.

## Requisitos

- GCC ou outro compilador compatível com C11
- Terminal

## Compilação

Na pasta raiz do projeto, compile o programa principal junto com os módulos:

```sh
gcc -Wall -Wextra -Wpedantic -std=c11 \
    main.c src/oprbasics.c src/pitagoras.c \
    -o trigonometry
```

## Execução

```sh
./trigonometry
```

O exemplo atual calcula a hipotenusa de um triângulo com catetos 3 e 4:

```text
O resultado é: 5.00
```

## Estrutura do projeto

```text
.
├── main.c
└── src/
    ├── oprbasics.c
    ├── oprbasics.h
    ├── pitagoras.c
    └── pitagoras.h
```

- `main.c`: ponto de entrada e exemplo de uso.
- `src/oprbasics.c` e `src/oprbasics.h`: operações aritméticas, potência e raiz quadrada.
- `src/pitagoras.c` e `src/pitagoras.h`: cálculo da hipotenusa.
