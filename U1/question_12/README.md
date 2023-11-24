# Questão 12

**Dada a gramática da expressão clássica na sua forma recursiva à esquerda abaixo, apresente um parse top-down para a expressão x * 5 + y para uma derivação à direita.**

|0 | Goal   |`->`| Expr          |
|--|--------| ---| --------------|
|1 | Exp    |`->`| Expr + Term   |
|2 |        |`OR`| Expr - Term   |
|3 |        |`OR`| Term          |
|4 | Term   |`->`| Term          |
|5 |        |`OR`| Term * Factor |
|6 |        |`OR`| Factor        |
|7 | Factor |`->`| number        |
|8 |        |`OR`| ident         |
|9 |        |`OR`| (Expr)        |

