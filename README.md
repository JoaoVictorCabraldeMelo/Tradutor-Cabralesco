# Repositório da disciplina de tradutores

### A linguagem C-IPL foi projetada para incluir facilidade no tratamento de listas em programas escritos em C. Para tal, foi escolhido um subconjunto da linguagem C e feita a introdução de uma nova primitiva de dados para listas e de operações sobre esta nova primitiva. As demais primitivas e comandos de C têm semântica padrão.

- Os tipos de dados da linguagem são int, float e list. Os tipos int e float são simples. A declaração de uma variável do tipo list se dá pela definição do tipo básico da lista (ver exemplos abaixo). Como restrição em relação à sintaxe usual de C, a declaração de variáveis não poderá ser seguida de atribuição.

- A linguagem contém constantes numéricas (para inteiros e reais (sim, isso inclui números negativos)) e a constante NIL (para listas); constantes do tipo string são usadas tão somente para impressão.

- As operações binárias aritméticas são adição, subtração, multiplicação e divisão, com regras de precedência e semântica usuais.

- As operações lógicas são negação, disjunção e conjunção, com  aridade, regras de precedência e semântica usuais. Não há tipo booleano na linguagem: exatamente como em C, valores diferentes de zero e  NIL são tratados como verdadeiro.

- As operações binárias relacionais são as usuais da aritmética: menor, menor ou igual, maior, maior ou igual, igual e diferente, com regras de precedência e semântica usuais. A única exceção é para os comparadores de igual e diferente para comparar uma lista com a constante NIL.

- Conversões implícitas entre expressões aritméticas devem ser tratadas de forma usual, permitindo tanto a ampliação (no caso de cálculo e comparação aritméticos, passagem de parâmetro por cópia e retorno de função) quanto redução de tipo (no caso de atribuição, passagem de parâmetros por cópia e retorno de função). Não há conversão de tipo entre listas e os demais tipos (ou vice-versa). Se for possível identificar a tentativa de realização de operações entre operandos que não admitem conversão entre si, o tradutor deve emitir aviso de que a operação é indefinida. A conversão de float para int se dá pelo descarte da parte decimal (não pelo arrendondamento; overflow, como usual, corresponde a comportamento indefinido).

- Um programa consiste de uma sequência de declarações de variáveis e funções, onde cada função declarada é seguida de sua definição (ou seja, um bloco de comandos, contendo declarações de variáveis e blocos de comandos). Toda função tem um tipo de retorno declarado que pode ser quaisquer um dos tipos primitivos da nova linguagem (int, float, list). Diferentemente de C, qualquer função pode ter zero argumentos (note que não há o tipo VOID na linguagem; mas isso deve ser especificado como uma lista vazia de parâmetros).

- Necessariamente, o programa deve conter uma função "main".

- As regras de escopo são as mesmas de C. Uma variável ou função só podem ser usadas depois de declaradas e em seus respectivos escopos.

- O comando de atribuição tem a sintaxe usual. No caso da variável ser inteira ou real, a semântica é a usual. Para listas, ver abaixo.

- Os comandos da linguagem para controle de fluxo são restritos aos seguintes: condicionais (if, if-else), iteração (for), chamada de função e retorno. Todos os comandos têm a semântica usual para o fragmento da linguagem C.

- Os comandos da linguagem para entrada e saída são: read, write, writeln. O parâmetro do comando de leitura (read) é uma variável de tipo simples; o parâmetro do comando de escrita (write, writeln) é uma expressão de tipo simples ou uma constante. O comando writeln é equivalente ao comando write seguido da escrita de quebra de linha.

- Na chamada de funções, tipos inteiros e reais são passados por cópia; o tipo lista é passado por referência.

- Toda função retorna uma expressão do tipo de retorno declarado.

# As operações sobre listas são descritas a seguir:

## declaração: int list, float list.

- atribuição: a atribuição é feita por referência.
- construtores (associativos à direita): a constante NIL já foi mencionada; o operador : é o construtor binário infixo de listas: o operando esquerdo é uma expressão (rvalue) e o o operando à esquerda é uma lista (lvalue). O elemento é sempre acrescentado ao início da lista.

## operadores (associativos à direita)

- header: ? é o operador unário que retorna o valor do primeiro elemento de uma lista; a lista permanece inalterada; uso do operador em uma lista vazia tem comportamento indefinido.

- tail: ! é operador unário que retorna a cauda de uma lista; a lista permanece inalterada; o uso do operador em uma lista vazia tem comportamento indefinido.

- destrutor (associativo à direita)

- tail: % é operador unário que retorna a cauda da lista; a lista tem seu primeiro elemento removido; o uso do operador em uma lista vazia tem comportamento indefinido.

## funções (associativas à direita):

- map: >> é o operador binário infixo que tem como primeiro argumento uma função unária e como segundo argumento uma lista; retorna uma lista com a função aplicada aos elementos do segundo elemento; não altera a lista passada como argumento.

- filter: << é o operador binário infixo que tem como primeiro argumento uma função unária e como segundo argumento uma lista; retorna a lista dos elementos do segundo argumento para os quais a função dada como primeiro argumento retorna valor diferente de zero; não altera a lista passada como argumento.

## Exemplo:

```
int list IL;
float list FL;

int list read_list(int n) {
	int i;
	i =  -435.7;
	int list new;
	new = NIL;
	for (i = 0; i < n ; i = i + 1) {
		int elem;
		writeln("Digite o elemento da lista: ");
		read(elem);
		new = elem : new;
	}
	return new;
}

float succ(int i) {
	return i+1;
}


int leq_10(float x) {
	return x <= 10;
}
```


```
int main() {

	writeln("Digite os número de elementos da lista: ");

	int n;
	float list FL10;
	read(n);
	
	IL  = read_list(n);
	FL = succ >> IL;

	FL10 = leq_10 <<  FL;
	if (FL10 != NIL) {
		float list AUXL;
		int n; n = 0;
		for (AUXL=FL10; AUXL != NIL; AUXL = !AUXL) {
			n = n + 1;
			write(?AUXL); write(" ");
		}
		writeln(" ");
		write("A nova lista tem "); write(n); writeln(" elementos.");
	}
	else writeln("A nova lista não possui elementos.");

	return 0;
}
```
