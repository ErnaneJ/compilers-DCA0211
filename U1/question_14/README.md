# Questão 14

**Dada a gramática da expressão clássica na sua forma recursiva à esquerda abaixo, apresente um parse bottom-up para a expressão x * 5 + y com os seus respectivos handles para uma derivação à direita.**

|0 | Goal   |`->`| Expr          |
|--|--------| ---| --------------|
|1 | Exp    |`->`| Expr + Term   |
|2 |        |`OR`| Expr - Term   |
|3 |        |`OR`| Term          |
|4 | Term   |`->`| Term / Factor |
|5 |        |`OR`| Term * Factor |
|6 |        |`OR`| Factor        |
|7 | Factor |`->`| number        |
|8 |        |`OR`| ident         |
|9 |        |`OR`| (Expr)        |

#### First, Follow & First+

|        | FIRST              | FOLLOW            | FIRST+              |
|--------|--------------------|-------------------|---------------------|
| Exp    |{number, ident, (}  |{$, ), +, -}       | {number, ident, (}  |
| Term   |{number, ident, (}  |{*, /, +, -, $, )} | {number, ident, (}  |
| Factor |{number, ident, (}  |{*, /, +, -, $, )} | {number, ident, (}  |

#### 'Estados' -> Redução / Deslocamento

Goal -> •

#### GoTo

|    | +    | -    | /  |  * | (  |  )  |
|----|------|------|----|----|----|-----|
| S0 |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |
|    |      |      |    |    |    |     |

#### Ação

|    | (    |   (  |  $  |
|----|------|------|-----|
| S0 |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |
|    |      |      |     |