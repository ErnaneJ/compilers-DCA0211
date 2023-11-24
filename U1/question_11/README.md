# Questão 11

**Para que servem os conjuntos FIRST(β), FOLLOW(A), e FIRST+ (A->β) no contexto de parsers top-down?**

Quando estamos realizando uma análise sintática esses conjuntos são extremamente importantes para tomarmos decisões à respeito de qual regra de produção, pertencente à uma determinada Gramática Livre do Contexto, aplicar. Sendo assim, é importante conhecermos e sabermos o que cada um faz e representa nesse contexto.

- FIRST(β): é o conjunto de elementos terminais que começam em cadeias derivadas de β. Ele é importante para determinar qual regra de produção aplicar em determinado momento. Quando o analisador está na posição A -> αβ, onde α e β são sequências de símbolos (terminais e/ou não-terminais), ele precisa decidir qual produção aplicar com base no primeiro símbolo de β. Isso ajuda a evitar ambiguidades e escolher a produção correta para expandir.
- FOLLOW(A): é o conjunto de elementos terminais que podem aparecer imediatamente à direita de A em alguma derivação. É importante para lidarmos com situações em que o analisador está tentando decidir qual produção aplicar quando um não-terminal A aparece à direita de alguma outra regra. Ou seja, ele auxilia na decisão sobre quando parar de expandir A.
- FIRST+ (A->β): é o conjunto de elementos terminais que podem começar uma cadeia derivada de β, bem como o conjunto FOLLOW(A) se β puder derivar com o vazio. É útil para determinar quais regras de produção aplicar em uma posição específica durante a análise, principalmente em casos onde devemos considerar o elemento vazio.

Além disso, esses elementos podem ser utilizados para validar a possibilidade de aplicação de determinadas regras. Como, por exemplo, validar se uma gramática está na estrutura aceitável LL1.