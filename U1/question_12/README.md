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

Para resolver essa questão primeiramente precisamos ajustar nossa gramática. Isso precisa ser feito pois para o parse top-down iremos utilizar o algoritmo LL(1), e ele exige que a gramática esteja na forma LL(1).

Removendo as recursões à esquerda utilizando o método de fatoração das produções dessa gramática clássica como demonstrado em questões anteriores chegamos na gramática equivalente abaixo.

|0 | Goal   |`->`| Expr          |
|--|--------| ---| --------------|
|1 | Exp    |`->`| TermExpr'     |
|2 | Expr'  |`->`| +TermExpr'    |
|2 |        |`OR`| -TermExpr'    |
|2 |        |`OR`| ε             |
|4 | Term   |`->`| FactorTerm'   |
|4 | Term'  |`->`| *FactorTerm'  |
|5 |        |`OR`| /FactorTerm'  |
|6 |        |`OR`| ε             |
|7 | Factor |`->`| number        |
|8 |        |`OR`| ident         |
|9 |        |`OR`| (Expr)        |

Para podermos verificar se estamos no formato LL(1) precisamos fazer o FIRST+. Portanto:

|        | FIRST              | FOLLOW           | FIRST+             |
|--------|--------------------|------------------|--------------------|
| Exp    |{number, ident}     |{$, )}            |{number, ident}     |
| Expr'  |{+, -, ε}           |{$, )}            |{+, -, $, )}        |
| Term   |{number, ident, (}  |{+, -, $, )}      |{number, ident, (}  |
| Term'  |{*, /, ε}           |{+, -, $, )}      |{*, /, +, -, $, )}  |
| Factor |{number, ident, (}  |{*, /, +, -, $, )}|{number, ident, (}  |

Agora que a gramática está sem recursão à esquerda e conseguimos comprovar que ela é LL(1) podemos realizar uma derivação para a cadeia "x * 5 + y".

ident * number + ident

![q13](./assets/12.png)