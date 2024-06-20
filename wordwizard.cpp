#include <iostream>
#include <list>
#include <stdexcept>
#include <bits/stdc++.h>

using namespace std;

/*void banner() {
	cout << "   ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ███▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████████【W】【O】【R】【D】【W】【I】【Z】【A】【R】【D】██████████" << endl;
	cout << "\t █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ██████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████████████████████████████████████████████████████████████████████" << endl;
	cout << "\t ███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████by Pickles & lusec  ████████████████████████████████████████████" << endl;
}*/

/*char acessIndex(const list<char>& lista, size_t index) {
    if (index >= lista.size()) {
        throw out_of_range("Index Out Of Range");
    }
    
    auto it = lista.begin();
    advance(it, index);
    return *it;
}

void moveElement(list<char>& characterList, size_t originPos, size_t destinyPos) {
    if (originPos >= characterList.size() || destinyPos >= characterList.size()) {
        throw out_of_range("Position Out Of Range");
    }

    auto itOrigin = characterList.begin();
    advance(itOrigin, originPos);

    auto itDestiny = characterList.begin();
    advance(itDestiny, destinyPos);

    characterList.splice(itDestiny, characterList, itOrigin);
}

int main(void) {
	banner();
	
	return 0;
}*/

int wordinput(char input1, char input2, string input3){
    
	int max_length, min_length;

    printf("Type the maximum password length: ");
	scanf("%d",&max_length);

	printf("Type the minimum password length: ");
	scanf("%d",&min_length);

	if (min_length > max_length){
		printf("! 'min_length' must be small or the same as 'max_length' !");
		printf("operation cancel!");
		
	 return 0;
	};
};


/*int main() {
    printf("╔══════════════════════════════╗\n");
    printf("║       Choose one option      ║\n");
    printf("╠══════════════════════════════╣\n");
    printf("║  1. Inserir mais caracter    ║\n");
    printf("║  2. Gerar arquivo .txt       ║\n");
    printf("║  3. Sair                     ║\n");
    printf("╚══════════════════════════════╝\n");

    return 0;

}*/
