#include<stdlib.h>
#include <time.h>
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

string direccionAtaque;

//Atributos del enemigo 1
string enemy1Name = "Paco";
int enemy1Health = 750;
bool enemy1IsAlive = true;

//Atributos del enemigo 2
string enemy2Name = "Jose Manuel";
int enemy2Health = 750;
bool enemy2IsAlive = true;

//Atributos del héroe
string heroName;
int heroDamage1;
int heroHealth = 1000;
int	numero1Ataque = 5;
int numero2Ataque = 5;
bool heroIsAlive = true;
string tipoAtaque;

void delay(int secs) {
	for (int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

void cancion() {
	Beep(330, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(392, 100); Sleep(700);
	Beep(196, 100); Sleep(700);
	Beep(262, 300); Sleep(300);
	Beep(196, 300); Sleep(300);
	Beep(164, 300); Sleep(300);
	Beep(220, 300); Sleep(100);
	Beep(246, 100); Sleep(300);
	Beep(233, 200);
	Beep(220, 100); Sleep(300);
	Beep(196, 100); Sleep(150);
	Beep(330, 100); Sleep(150);
	Beep(392, 100); Sleep(150);
	Beep(440, 100); Sleep(300);
	Beep(349, 100); Sleep(100);
	Beep(392, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(247, 100); Sleep(500);
	Beep(262, 300); Sleep(300);
	Beep(196, 300); Sleep(300);
	Beep(164, 300); Sleep(300);
	Beep(220, 300); Sleep(100);
	Beep(246, 100); Sleep(300);
	Beep(233, 200);
	Beep(220, 100); Sleep(300);
	Beep(196, 100); Sleep(150);
	Beep(330, 100); Sleep(150);
	Beep(392, 100); Sleep(150);
	Beep(440, 100); Sleep(300);
	Beep(349, 100); Sleep(100);
	Beep(392, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(247, 100); Sleep(900);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(207, 100); Sleep(100);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(500);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(523, 100); Sleep(300);
	Beep(523, 100); Sleep(100);
	Beep(523, 100); Sleep(1100);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(207, 100); Sleep(100);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(500);
	Beep(311, 300); Sleep(300);
	Beep(296, 300); Sleep(300);
	Beep(262, 300); Sleep(1300);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(300);
	Beep(330, 200); Sleep(50);
	Beep(262, 200); Sleep(50);
	Beep(220, 200); Sleep(50);
	Beep(196, 100); Sleep(700);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(330, 100); Sleep(700);
	Beep(440, 100); Sleep(300);
	Beep(392, 100); Sleep(500);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(300);
	Beep(330, 200); Sleep(50);
	Beep(262, 200); Sleep(50);
	Beep(220, 200); Sleep(50);
	Beep(196, 100); Sleep(700);
	/*Intro*/
	Beep(330, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(392, 100); Sleep(700);
	Beep(196, 100); Sleep(700);
	Beep(196, 100); Sleep(125);
	Beep(262, 100); Sleep(125);
	Beep(330, 100); Sleep(125);
	Beep(392, 100); Sleep(125);
	Beep(523, 100); Sleep(125);
	Beep(660, 100); Sleep(125);
	Beep(784, 100); Sleep(575);
	Beep(660, 100); Sleep(575);
	Beep(207, 100); Sleep(125);
	Beep(262, 100); Sleep(125);
	Beep(311, 100); Sleep(125);
	Beep(415, 100); Sleep(125);
	Beep(523, 100); Sleep(125);
	Beep(622, 100); Sleep(125);
	Beep(830, 100); Sleep(575);
	Beep(622, 100); Sleep(575);
	Beep(233, 100); Sleep(125);
	Beep(294, 100); Sleep(125);
	Beep(349, 100); Sleep(125);
	Beep(466, 100); Sleep(125);
	Beep(587, 100); Sleep(125);
	Beep(698, 100); Sleep(125);
	Beep(932, 100); Sleep(575);
	Beep(932, 100); Sleep(125);
	Beep(932, 100); Sleep(125);
	Beep(932, 100); Sleep(125);
	Beep(1046, 675);
}

void inicioJuego() {
	std::cout << "Los enemigos " << enemy1Name << " y " << enemy2Name << " acaban de aparecer\n";
	cout << "\nEl enemigo " << enemy1Name << " tiene " << enemy1Health << " de vida y sus puntos de ataque son aleatorios.\n";
	cout << "\nEl enemigo " << enemy2Name << " tiene " << enemy2Health << " de vida y sus puntos de ataque son aleatorios.\n";
	cout << "\nInserta el nombre del heroe que los va a derrotar.\n";
	cin >> heroName;
	cout << "\nEl nombre del heroe es: " << heroName << "\n";
	delay(2);
	system("cls");
}

void eleccionAtaque() {
	cout << "\nEl ataque ira dirigido a JOSE, que ataque quieres realizar?\n";
	cout << "\n[a] Espada\n";
	cout << "\n[b] Magia\n";
	cout << "\n[c] Puñetazo\n";
	cin >> tipoAtaque;
}

void finalJuego() {
	if (!enemy1IsAlive && !enemy2IsAlive) {
		cout << "\nLOS DOS ENEMIGOS HAN SIDO ELIMINADOS\n";
		cout << "\nFIN DEL JUEGO\n";
	}
}

bool checkIfHeroIsAlive() {
	if (heroHealth <= 0) {
		heroHealth = 0;
		heroHealth = false;
		cout << "\nEl heroe ha sido derrotado\n";
		cout << "\nFIN DEL JUEGO\n";
	}
	else if (heroIsAlive) {
		cout << "\nLa vida del heroe tras el ataque es de " << heroHealth << "\n";
	}
	return 0;
}

bool checkIfEnemy2IsAlive() {
	if (enemy2Health <= 0) {
		enemy2IsAlive = false;
		enemy2Health = 0;
		cout << "\nEl enemigo " << enemy2Name << " ha sido derrotado\n";
		
	}
	return 0;
}

bool checkIfEnemy1IsAlive() {
	if (enemy1Health <= 0) {
		enemy1IsAlive = false;
		enemy1Health = 0;
		cout << "\nEl enemigo " << enemy1Name << " ha sido derrotado\n";

	}
	return 0;
}



int main() {

	
	inicioJuego();
	
	


	while (heroIsAlive == true && (enemy1IsAlive == true || enemy2IsAlive == true)) {

		if (heroHealth <= 0) {
			heroHealth = 0;
			heroIsAlive = false;
			cout << "\nEl heroe ha sido derrotado\n";
			cout << "\nFIN DEL JUEGO\n";
		}


		srand((unsigned)time(NULL));
		cout << "\nEl heroe va a realizar su ataque.\n";
		cout << "\nEl heroe elegira a cual de los dos enemigos dirigira su ataque [JOSE (j)/PACO (p)]\n";
		cin >> direccionAtaque;

		if (direccionAtaque == "j") {
			if (enemy2Health <= 0) {
				enemy2IsAlive = false;
				enemy2Health = 0;
				cout << "\nEl enemigo " << enemy2Name << " ya ha sido derrotado. Es el momento de atacar a " << enemy1Name << ".\n";
			}
			else if (enemy2IsAlive) {
				eleccionAtaque();
			}
			if (tipoAtaque == "a") {
				numero1Ataque = numero1Ataque - 1;
				if (numero1Ataque > 0) {
					int heroDamage1 = 1 + rand() % (201 - 1);
					enemy2Health = enemy2Health - heroDamage1;
					checkIfEnemy2IsAlive();
					 if (enemy2IsAlive) {
						int enemy2Damage = 1 + rand() % (50 - 1);
						cout << "\nTras el ataque, la vida del enemigo es de " << enemy2Health << " puntos de vida\n";
						cout << "\nEl enemigo te va atacar de vuelta\n";
						heroHealth = heroHealth - enemy2Damage;
						checkIfHeroIsAlive();

					}
				}
				else if (numero1Ataque <= 0) {
					cout << "\nHas usado el ataque espada el numero maximo de veces. Prueba con otro.\n";
				}
			}
			if (tipoAtaque == "b") {
				int heroDamage1 = 1 + rand() % (151 - 1);
				enemy2Health = enemy2Health - heroDamage1;
				checkIfEnemy2IsAlive();
				if (enemy2IsAlive) {
					int enemy2Damage = 1 + rand() % (50 - 1);
					cout << "\nTras el ataque, la vida del enemigo es de " << enemy2Health << " puntos de vida\n";
					cout << "\nEl enemigo te va atacar de vuelta\n";
					heroHealth = heroHealth - enemy2Damage;
					checkIfHeroIsAlive();
				}
			}
			if (tipoAtaque == "c") {
				int heroDamage1 = 1 + rand() % (51 - 1);
				enemy2Health = enemy2Health - heroDamage1;
				checkIfEnemy2IsAlive();
				if (enemy2IsAlive) {
					int enemy2Damage = 1 + rand() % (50 - 1);
					cout << "\nTras el ataque, la vida del enemigo es de " << enemy2Health << " puntos de vida\n";
					cout << "\nEl enemigo te va atacar de vuelta\n";
					heroHealth = heroHealth - enemy2Damage;
					checkIfHeroIsAlive();
				}
			}
		}



		if (direccionAtaque == "p") {
			int enemy1Damage = 1 + rand() % (50 - 1);
			if (enemy1Health <= 0) {
				enemy1IsAlive = false;
				enemy1Health = 0;
				cout << "\nEl enemigo " << enemy1Name << " ya ha sido derrotado. Es el momento de atacar a " << enemy2Name << ".\n";
			}
			else if (enemy1IsAlive) {
				eleccionAtaque();

				if (tipoAtaque == "a") {
					numero2Ataque = numero2Ataque - 1;
					if (numero2Ataque > 0) {
						int heroDamage1 = 1 + rand() % (201 - 1);
						enemy1Health = enemy1Health - heroDamage1;
						checkIfEnemy1IsAlive();
						if (enemy1IsAlive) {
							cout << "\nTras el ataque, la vida del enemigo es de " << enemy1Health << " puntos de vida\n";
							cout << "\nEl enemigo te va atacar de vuelta\n";
							heroHealth = heroHealth - enemy1Damage;
							checkIfHeroIsAlive();
						}
					}
					else if (numero2Ataque <= 0) {
						cout << "\nHas usado el ataque espada el numero maximo de veces. Prueba con otro\n";
					}
				}
				if (tipoAtaque == "b") {
					int heroDamage1 = 1 + rand() % (151 - 1);
					enemy1Health = enemy1Health - heroDamage1;
					checkIfEnemy1IsAlive();
					if (enemy1IsAlive) {
						cout << "\nTras el ataque, la vida del enemigo es de " << enemy1Health << " puntos de vida\n";
						cout << "\nEl enemigo te va atacar de vuelta\n";
						heroHealth = heroHealth - enemy1Damage;
						checkIfHeroIsAlive();
					}
				}
				if (tipoAtaque == "c") {
					int heroDamage1 = 1 + rand() % (51 - 1);
					enemy1Health = enemy1Health - heroDamage1;
					checkIfEnemy1IsAlive();
					if (enemy1IsAlive) {
						cout << "\nTras el ataque, la vida del enemigo es de " << enemy1Health << " puntos de vida\n";
						cout << "\nEl enemigo te va atacar de vuelta\n";
						heroHealth = heroHealth - enemy1Damage;
						checkIfHeroIsAlive();
					}
				}
			}
		}
	}
	finalJuego();
}