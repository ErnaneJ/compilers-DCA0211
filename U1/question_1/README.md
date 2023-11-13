# Questão 01

Escreva códigos na linguagem C que inicializam uma matriz A quadrada de 100000 linhas em um espaço de endereços contíguo utilizando os 4 tipos de código abaixo. Compile os códigos com  seu  compilador  favorito  e  temporize  a  execução  dos  programas  resultantes  com  o comando time do Linux. Observe se há diferenças de desempenho e explique a importância das suas observações no projeto de compiladores.

[Programa](./main.c)

## Saída

Não foi possível executar a demanda utilizando `MAX_SIZE = 100000`. Isso causa erro de segmentação para qualquer uma das tentativas:

```bash
[1]    12352 segmentation fault  ./q1/main.out --attempt n
```

Entretanto, reduzindo o valor de `MAX_SIZE` para apenas `1000` conseguimos ter a saída abaixo.

```bash
-------------------

Running attempt 1

real    0m0.131s
user    0m0.002s
sys     0m0.002s

-------------------

Running attempt 2

real    0m0.005s
user    0m0.002s
sys     0m0.002s

-------------------

Running attempt 3

real    0m0.006s
user    0m0.004s
sys     0m0.001s

-------------------

Running attempt 4

real    0m0.002s
user    0m0.000s
sys     0m0.001s

-------------------
```

## Conclusão

Os experimentos realizados para inicializar uma matriz quadrada de `100000` linhas contíguas em C revelaram limitações práticas quando se trata de alocação de memória na pilha. A execução do programa com uma dimensão tão grande resultou em erros de segmentação como foi demonstrado, indicando que o tamanho excede os limites de alocação da pilha.

Reduzindo a dimensão para 1000, foi possível avaliar o desempenho relativo das diferentes abordagens. A medição de tempo mostrou variações significativas entre os métodos testados:

- `Attempt 1`: Atribuição direta de valores - a mais lenta, com tempo real de `0m0.131s`.
- `Attempt 2`: Atribuição em formato transposto - mais rápida que a anterior, com tempo real de `0m0.005s`.
- `Attempt 3`: Utilização de ponteiro para percorrer a matriz - mais rápida que a primeira, com tempo real de `0m0.006s`.
- `Attempt 4`: Uso da função `bzero` - a mais rápida entre as tentativas, com tempo real de `0m0.002s`.

Sendo assim, podemos enxergar que o uso de funções de biblioteca como `bzero` pode oferecer vantagens de desempenho em relação a abordagens tradicionais de inicialização. Isso possui implicações significativas no projeto de compiladores, especialmente no que diz respeito à otimização de código.
