int list IL;
float list FL;

int show_variable(int x){
	writeln(x);
	return x;
}

int list read_list(int n) {
	float i;
	new = NIL;
	int list new;
	i = -435.7;
	for (i = 0; i < n ; i = i + 1) {
		int elem;
		writeln("Digite o elemento da lista: ");
		read(elem);
		new = elem : new;
	}
	show_variable(i);
	return new;
}

float succ(int i) {
	return i+1;
}


int leq_10(float x) {
	return x <= 10;
}

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