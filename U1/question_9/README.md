# Questão 9

**Explique as duas principais causas de ambiguidade em gramáticas livre de contexto. Por que é importante para um parser que a gramática livre de contexto empregada não seja ambígua? Quais as formas de resolver esse problema?**

As duas principais causas de ambiguidade em uma gramática livre do contexto é a ambiguidade estrutural e gramáticas com recursão à esquerda. Ambiguidade estrutural é quando a própria gramática permite mais de uma arvore de derivação para uma determinada sentença. Já recursão a esquerda o próprio nome já diz, a recursividade a esquerda ocorre quando uma variável pode derivar a si mesma direta ou indiretamente antes de derivar outros símbolos.

É importante para o parser que a gramática não seja ambígua pois ele precisa, frequentemente, tomar uma decisão de `deslocar` ou `reduzir`. Uma gramática ambígua pode levar à possibilidade de poder deslocar e reduzir ao mesmo tempo causando problema na interpretação e execução do algoritmo do parser.

Para mitigar ambiguidade estrutural, podemos ser mais específicos no desenvolvimento da nossa gramática evitando produções diferentes para uma mesma sentença. Já para ambiguidade por derivação a esquerda podemos evitar reescrevendo nossa gramatica antes de iniciarmos o algoritmo (LL1, por exemplo) do parser removendo essas produções.
