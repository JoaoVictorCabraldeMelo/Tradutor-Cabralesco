
1) Tipagem e, se necessário, conversão deve ser anotada na árvore. Ver na Fig. 1.7 do livro-texto que a árvore anotada contém nós para a conversão implícita. Quando não é possível fazer a conversão implícita, há erro semântico. Observe que para garantir que a tipagem está correta, em C-IPL:

1.1) Todo identificador tem um tipo associado e só pode ser usado após sua declaração no escopo em que aparece ou escopos que o englobam; isto inclui variáveis e funções. Parâmetros estão no escopo da função que os declara.

1.2) Pelo item acima, para garantir tipagem correta, o escopo também deve estar devidamente anotado na tabela de símbolos; a árvore deve apontar para a entrada da tabela de símbolos do identificador no escopo correto e correspondente.

1.3) Todas as constantes numéricas têm tipos associados e estes devem estar devidamente anotados. Note que a constante NIL tem o tipo LIST(α), onde α é uma variável de tipo. Este é o único caso em C-IPL que é necessário fazer unificação e esta se dá a partir do cálculo do tipo da expressão que antecede a lista. Na expressão para a construção de listas:

exp : NIL

onde exp tem tipo α, a NIL é atribuído LIST(α). No caso da atribuição:

id = NIL

NIL terá o mesmo tipo de id.

Note que os operadores unários para listas não têm comportamento definido quando aplicados a listas vazias. Portanto, algo como:

? NIL

deve gerar erro semântico.

1.4) Toda expressão semanticamente correta tem um tipo associado, que é calculado a partir da hierarquia dada pelo seguinte diagrama de Hasse:

float
 |
 |
int

ou seja, float é o tipo máximo, int é o tipo mínimo. Note que LIST(α
) só unifica como LIST(β), na nossa linguagem, se α=β. Qualquer outra tentativa de operação e/ou conversão, tanto na expansão como na redução de tipo, deve ser anotada como "indefinida" e retornar erro.

1.5) Na chamada de função, o número de parâmetros deve corresponder ao da definição. Expressões devem ser convertidas para o tipo do respectivo parâmetro formal; se não for possível, erro deve ser emitido.

1.6) Todos os operadores unários para listas são aplicados a expressões que têm tipo LIST(α), onde α é uma variável ou uma constante de tipo. Todos os operadores binários para listas devem ter como segundo argumento expressões que têm tipo LIST(α), onde α é uma variável ou uma constante de tipo. Nas funções map e filter, o primeiro argumento é uma função unária e isso deve ser verificado; se a função não for unária, erro deve ser emitido. Map retorna uma expressão com tipo do LIST(α), onde α é o tipo do primeiro argumento; filter retorna uma expressão com tipo do segundo argumento.

1.6.1) Construtores. Em exp1 : exp2, exp1 deve ser implicitamente convertida para o tipo da lista, se necessário; o caso do NIL foi explicado acima.

1.6.2) Operadores. Em ! exp1 e em % exp1, o retorno é uma lista. Se exp1 é do tipo LIST(α), então o retorno tem tipo LIST(α). Em ? exp1, o retorno é um elemento. Portanto, se exp1 é do tipo LIST(α), então a expressão tem tipo α.

1.7) Os comandos write, writeln e read têm um único parâmetro (isso é verificado no sintático, se você os definiu como comandos na gramática). Os tipos dos parâmetros devem ser verificados no semântico: para write e writeln, o parâmetro é uma expressão de tipo simples (int ou float) ou uma string; para read, o parâmetro é uma variável de tipo simples (int ou float).  

2) Informações essenciais para o controle do fluxo de execução:

2.1) A main deve estar presente. Este é um requisito obrigatório da linguagem e corresponde ao ponto de início da execução do programa.

2.2) Toda função deve ter um retorno do tipo da função. Como já explicado, isso não quer dizer que todo corpo de função tenha que ter um return, mesmo porque a a presença de um return neste corpo não garante que ele será executado (este é um problema indecidível). Você deve anotar sua árvore com um retorno padrão e esta anotação será convertida em código posteriormente.
