# Questão 10

**Explique o que pode acontecer com um parser top-down se a gramática utilizada tiver recursão à esquerda. Como isso pode ser resolvido?**

Quando uma gramática possui recursão à esquerda e um parser top-down é utilizado podemos ter problemas de parsing. Isso ocorre pois um parser top-down realiza a execução de uma correspondência com as regras da gramática e quando encontra uma produção à esquerda, pode ficar preso em um loop 'infinito' tentando escolher entre as opções possíveis. Por exemplo:

A Gramática abaixo possui recursão à esquerda:

```sh
0. M -> Ms 
1.     | s
```

Aqui `s` representa um símbolo terminal. O problema surge quando o parser encontra a produção 0 (`M -> Ms`).

Para resolver isso, podemos realizar uma simples fatoração à esquerda. Basicamente iremos reformular a gramática para eliminar a recursão a esquerda. Para o exemplo acima, podemos fazer a seguinte modificação:

```sh
0. M  -> sM`
1. M` -> sM` 
2.      | ε
```

Dessa forma empregamos a nova variável `M'` como uma expansão opcional de `M` que nos permite termos uma recursão à direita, eliminando à esquerda.
