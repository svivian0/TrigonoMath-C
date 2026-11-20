# TrygonoMath-C

Calculadora de funções trigonométricas desenvolvida em C, sem utilizar a biblioteca `math.h`.
As operações básicas ficam separadas em `src/oprbasics.c`, com declarações em `src/oprbasics.h`.

## Compilar

```sh
gcc -Wall -Wextra -Wpedantic -std=c11 main.c src/oprbasics.c -o trigonometry
```

## Executar

```sh
./trigonometry
```


