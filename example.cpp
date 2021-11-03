#include <iostream>
#define TAMANHO_VETOR 5

void funcaoPorReferencia(float *vetor) {
	for (int i = 0; i < TAMANHO_VETOR; i++) {
		vetor[i] = vetor[i]	* 2;	
	}
}


void funcaoPorReferencia2(float vetor[]) {
	for (int i = 0; i < TAMANHO_VETOR; i++) {
		vetor[i] = vetor[i]	* 2;	
	}
}

void funcaoPorReferencia3(float &numero) {
	numero = numero + 10;
}

void funcaoPorReferencia4(float vetor[]) {
		for (int i = 0; i < TAMANHO_VETOR; i++) {
		vetor[i] = vetor[i]	* 2;	
	}
}

int main () {
	
	float vetor[TAMANHO_VETOR] = {1,2,3,4,5};

	funcaoPorReferencia(vetor);
	
	for (int i = 0; i < TAMANHO_VETOR; i++) {
		std::cout << "Valor: " << vetor[i] << "\n";	
	}
	
	funcaoPorReferencia2(vetor);
	
	for (int i = 0; i < TAMANHO_VETOR; i++) {
		std::cout << "Valor: " << vetor[i] << "\n";	
	}
	
	funcaoPorReferencia4(vetor);
	
		for (int i = 0; i < TAMANHO_VETOR; i++) {
		std::cout << "Valor: " << vetor[i] << "\n";	
	}
	
	float numero = 10;
	funcaoPorReferencia3(numero);
	std::cout << numero;
}
    
