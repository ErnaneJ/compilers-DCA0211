# Questão 2

*Questão 3 do capítulo 1 do livro [Keith Cooper & Linda Torczon - Engineering a Compiler - Morgan Kaufmann](../../docs/Keith%20Cooper_%20Linda%20Torczon%20-%20Engineering%20a%20compiler-Morgan%20Kaufmann%20(2012).pdf)*

<details>
  <summary>English 🇺🇸 (original)</summary>
  <b>Compilers are used in many different circumstances. What differences might you expect in compilers designed for the following applications?</b>
  <ul>
    <li>A. A just-in-time compiler used to translate user interface code downloaded over a network.</li>
    <li>B. A compiler that targets the embedded processor used in a cellular telephone</li>
    <li>C. A compiler used in an introductory programming course at a high school</li>
    <li>D. A compiler used to build wind-tunnel simulations that run on a massively parallel processor (where all processors are identical)</li>
    <li>E. A compiler that targets numerically intensive programs to a large number of diverse machines</li>
  </ul>
</details>

<details>
  <summary>Portuguese 🇧🇷</summary>
  <b>Compiladores são usados ​​em muitas circunstâncias diferentes. Que diferenças você pode esperar em compiladores projetados para os seguintes aplicativos?</b>
  <ul>
    <li>A. Um compilador just-in-time usado para traduzir o código da interface do usuário baixado em uma rede.</li>
    <li>B. Um compilador direcionado ao processador embarcado usado em um telefone celular</li>
    <li>C. Um compilador usado em um curso introdutório de programação em uma escola secundária</li>
    <li>D. Um compilador usado para construir simulações de túnel de vento que rodam em um processador massivamente paralelo (onde todos os processadores são idênticos)</li>
    <li>E. Um compilador que direciona programas numericamente intensivos para um grande número de máquinas diversas</li>
  </ul>
</details>

## Resposta

Cada tipo de aplicação pode exigir um compilador com características específicas. É por isso que temos diversos mundo a fora. As suas características se devem diretamente ao seu proposito de criação. No fim a estrutura poderá não mudar muito da convencional mas algumas coisas podem aprimorar pontos essenciais para o cenário a ser aplicado. Para os exemplos mencionados, podemos dizer que:

Um (A) compilador Just-In-Time para Interface do Usuário em Rede deveria possuir uma rápida tradução do código baixado em tempo de execução. E para poder fazer isso seria necessário uma maior otimização para alcançar um tempo de execução eficiente e resposta rápida. Sendo assim, no processo de compilação podaríamos priorizar a compactação do código para minimizar o tempo de download e a utilização eficiente da largura de banda da rede.

Um (B) Compilador para Processador Embarcado em Celular focaria em eficiência para processadores com recursos limitados. Sendo assim, seria necessário darmos enfase em otimização de espaço, considerando restrições de memória e consumo de energia, principalmente.

Um (C) Compilador para Curso Introdutório em Escola Secundária focariam na simplicidade e facilidade de uso. Não há motivo para construir algo tão otimizado ou com diversas funções que frequentemente aumentaria a complexidade de desenvolvimento. Para esse cenário, buscaríamos uma simples construção de forma amigável para iniciantes, dando enfase principalmente nos processos.

Um (D) Compilador para Simulações de Túnel de Vento em Processador Massivamente Paralelo deveria ter uma abordagem focada principalmente em paralelismo massivo e otimização para alta performance. A ideia aqui seria explorar de maneira eficiente a divisão do trabalho entre o hardware disponível.

Um (E) Compilador para Programas Numericamente Intensivos em Máquinas Diversas deveria focar em um suporte a programação distribuída e diversidade de arquiteturas dando enfase principalmente à otimização para comunicação eficiente entre máquinas e gerenciamento de recursos distribuídos.

Sem sair do superficial é desafiador dizer as diferenças entre cada cenário. Mas, como comentado, é inevitável que a estrutura clássica seja utilizada. O que mudará efetivamente na construção de cada compilador serão os seus passos intermediários que visarão focar em um ou vários pontos essenciais originados do seu propósito de criação.
