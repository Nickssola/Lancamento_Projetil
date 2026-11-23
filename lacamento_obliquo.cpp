#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>
#include <limits>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	const double PI = acos(-1.0);   // evita depender do M_PI, que nao e padrao do C++
	double radianos, sen, cosen, angulo, v0, g, ymax, t, xf;
	int escolha;

	cout << "Nome: Nickson Espíndola.\nCurso: Linguagens de Programação.\n\n\n";
	cout << "----Lançamento de Projétil----\n\n";

	cout << "Forneça a velocidade inicial (m/s):\n";
	cin >> v0;
	if (!cin || v0 <= 0){
		cout << "Forneça um valor positivo para a velocidade.\n";
		return 1;
	}

	cout << "Agora, a aceleração (m/s²):\n";
	cin >> g;
	if (!cin || g <= 0){
		cout << "\nA gravidade não pode ser nula ou negativa.\n";
		return 1;
	}

	cout << "E finalmente, forneça um ângulo em graus (entre 0 e 90):\n";
	cin >> angulo;
	if (!cin || angulo < 0 || angulo > 90){
		cout << "\nForneça um ângulo entre 0 e 90 graus.\n";
		return 1;
	}

	radianos = (angulo * PI) / 180;
	sen = sin(radianos);
	cosen = cos(radianos);

	cout << "\n----  Dados  ----\n";
	cout << "\nVelocidade (m/s): " << v0;
	cout << "\nAceleração (m/s²): " << g;
	cout << "\nÂngulo (°): " << angulo;
	cout << "\n\n----  Dados  ----\n\n";

	do {
		cout << "Escolha uma das opções:\n1) Calcular a Altura Máxima\n2) Calcular o Tempo de Voo\n3) Calcular o Alcance Horizontal\n4) Sair\n";

		if (!(cin >> escolha)){            // usuario digitou letra/simbolo
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			escolha = 0;
		}

		if (escolha == 1){
			ymax = (pow(v0, 2) * pow(sen, 2)) / (2 * g);
			cout << "\aAltura máxima (m) = " << ymax << "\n\n";
		}
		else if (escolha == 2){
			t = (2 * v0 * sen) / g;
			cout << "\aTempo de voo (s) = " << t << "\n\n";
		}
		else if (escolha == 3){
			xf = (2 * pow(v0, 2) * cosen * sen) / g;
			cout << "\aAlcance horizontal (m) = " << xf << "\n\n";
		}
		else if (escolha != 4){
			cout << "Opção inválida. Tente novamente.\n\n";
		}
	} while (escolha != 4);

	return 0;
}
