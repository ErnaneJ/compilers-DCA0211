# Questão 8

**Apresente o algoritmo de scanner controlado por tabela e codificado diretamente para o reconhecimento de um fluxo de palavras e explique seu funcionamento com um exemplo.**

### Exemplo utilizado:

#### Tabela de transição

|   |Letra|Digito|
|----|--|--|
|S0|S1|Se|
|S1|S1|S1|
|Se|Se|Se|

#### Tabela de Categoria

|        | [a...Z] | [0...9] |
|--------|---------|---------|
| Letra  |   ❌    |         |
| Dígito |         |    ❌   |

### Algoritmo implementado baseado em tabela

```c
entrada = S0
léxico = vazio

// * SA -> Estados de Aceitação
// * CatTB -> Tabela de Categoria
// * TnTB -> Tabela de Transição

Pilha.push($)

while(entrada != Se){
  char = PróximoSimbolo();
  Léxico = Léxico + char;

  se(entrada in SA){
    limpar_pilha() // Não tinha o sentinela
  }

  pilha.push(Entrada)
  cat = catTB[char]
  entrada = TnTB[entrada][Cat]
}

while(entrada not in SA && entrada != $){
  entrada = Pilha.pop()
  // Truncar o léxico  // remove o ultimo caracter
  // Rollback // voltar o ponteiro de entrada
}

se(entrada in SA){
  return Type[estado] // ex: identificador x123
}else{
  return "error"
}
```

### Algoritmo implementado codificado diretamente

```c
function start(){
  Estado = S0
  Léxico = vazio
  pilha.push($)
  
  S0(); // GoTo S0
}

function S0(){
  chat = PróximoSimbolo();
  Léxico = Léxico + char;

  se(estado in SA){
    Limpar_pilha()
  }

  se(char == [a...z]){
    S1();
  }else{
    End();
  }
}

function S1(){
  char = PróximoSimbolo();
  Léxico = Léxico + char;
  se(estado in SA){
    Limpar_pilha()
  }

  se(char == [a...z] || [0...9]){
    S1();
  }else{
    End()
  }
}

function End(){
  while(estado in SA && estado != $){
    estado = pilha.pop();
    // Truncar léxico
    // Rollback
  }

  se(estado in SA){
    return Type[estado]
  }else{
    return Error
  }
}
```

*sorry for the bad codes*