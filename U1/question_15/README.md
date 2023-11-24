# Questão 15

**Dada a seguinte gramática:**

|0 | Goal   |`->`| List          |
|--|--------| ---| --------------|
|1 | List   |`->`| List Pair     |
|2 |        |`OR`| Pair          |
|3 | Pair   |`->`| (Pair)        |
|5 |        |`OR`| ()            |

#### First, Follow & First+

|        | FIRST              | FOLLOW            | FIRST+              |
|--------|--------------------|-------------------|---------------------|
| List   | {(}                |{$, (}             | {(}                 |
| Pair   | {(}                |{$, (, )}          | {(}                 |

#### 'Estados' -> Redução / Deslocamento

```sh
#S0
Goal -> •List, $

List -> •ListPair, $
List -> •Pair, $

List -> •ListPair, (
List -> •Pair, (

Pair -> •(Pair), $
Pair -> •(), $

Pair -> •(Pair), (
Pair -> •(), (

Pair -> •(Pair), )
Pair -> •(), )
```

```sh
#S0 => S1 (List)
Goal -> List•, $ # <- R0

List -> List•Pair, $
List -> List•Pair, (

Pair -> •(Pair), $
Pair -> •(), $

Pair -> •(Pair), (
Pair -> •(), (

Pair -> •(Pair), )
Pair -> •(), )
```

```sh
#S0 -> S1 => S2 (Pair)
List -> ListPair•, $
List -> ListPair•, (
```

```sh
#S0 => S3 (Pair)

List -> Pair•, $
List -> Pair•, (
```

```sh
#S0 => S4 (()

Pair -> (•Pair), $
Pair -> (•), $

Pair -> (•Pair), (
Pair -> (•), (

Pair -> (•Pair), )
Pair -> (•), )

Pair -> •(Pair), $
Pair -> •(), $

Pair -> •(Pair), (
Pair -> •(), (

Pair -> •(Pair), )
Pair -> •(), )
```

```sh
#S0 -> S5 => S6 (Pair)

Pair -> (Pair•), $
Pair -> (Pair•), (
Pair -> (Pair•), )
```

```sh
#S0 -> S5 -> S6 => S7 ())

Pair -> (Pair)•, $
Pair -> (Pair)•, (
Pair -> (Pair)•, )
```

```sh
#S0 -> S4 => S8 ())

Pair -> ()•, $
Pair -> ()•, (
Pair -> ()•, )
```

#### GoTo

|    | List | Pair |
| S0 | S1   | S3   |
| S1 |  ☠️   | S2   |
| S2 |  ☠️   |  ☠️   |
| S3 |  ☠️   |  ☠️   |
| S4 |  ☠️   |  ☠️   |
| S5 |  ☠️   |  ☠️   |
| S6 |  ☠️   |  ☠️   |
| S7 |  ☠️   |  ☠️   |
| S8 |  ☠️   |  ☠️   |

#### Ação

|    | (    |   (  |  $  |
| S0 |      |      |     |
| S1 |      |      |     |
| S2 |      |      |     |
| S3 |      |      |     |
| S4 |      |      |     |
| S5 |      |      |     |
| S6 |      |      |     |
| S7 |      |      |     |
| S8 |      |      |     |

**Apresente um parse bottom-up para:**

- A) “()(())”

- B) “)(“
  - Possivelmente essa cadeira dará errado visto que a gramática dada, não apresenta possibilidade de utilização *somente* de parêntesis abrindo logo após um parêntesis fechando. Logo, essa cadeia é inválida e geraria erro no parse.