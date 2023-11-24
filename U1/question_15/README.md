# Questão 15

**Dada a seguinte gramática:**

|0 | Goal   |`->`| List          |
|--|--------| ---| --------------|
|1 | List   |`->`| List Pair     |
|2 |        |`OR`| Pair          |
|3 | Pair   |`->`| (Pair)        |
|5 |        |`OR`| ()            |

**Apresente um parse bottom-up para:**

- A) “()(())”

......

- B) “)(“