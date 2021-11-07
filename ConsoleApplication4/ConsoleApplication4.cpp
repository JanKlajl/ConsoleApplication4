#include <stdio.h>

int main(void) {
	int vstup, a, b, c, s;
	printf("vyber si:\n");
	printf("1) trojuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);
	if (vstup == 1) {
		// Řešíme trojúhelník
		printf("zadej delku strany: ");
		scanf("%d", &a);
		printf("zadej druhou delku strany: ");
		scanf("%d", &b);
		printf("zadej treti delku strany: ");
		scanf("%d", &c);
		// existence
		if (a + b > c && a + c > b && b + c > a) {
			printf("trojuhelnik existuje \n");
		}
		else {
			printf("trojuhelnik neexistuje \n");
		}
		// je pravouhlý?
		if (c * c == a * a + b * b || b * b == a * a + c * c || c * c == a * a + b * b) {
			printf("trojuhelnik je pravouhly \n");
		}
		else {
			printf("trojuhelnik neni pravouhly \n");
		}
		// obvod a obsah
		printf("obvod: %d\n", a + b + c);
		s = (a + b + c) / 2;
		printf("obsah: %d\n", sqrt(s * (s - a) * (s - b) * (s - c)));
	}
	else if (vstup == 2) {
		// Řešíme obdelník
		printf("zadej delku strany: ");
		scanf("%d", &a);
		printf("zadej druhou delku strany: ");
		scanf("%d", &b);
		// obdelník nebo čterec?
		if (a != b) {
			printf("je to obdelnik \n");
		}
		if (a == b){
			printf("je to cterec \n");
		}
		printf("obvod: %d\n", 2 * (a + b));
		printf("obsah: %d\n", a * b);
	}
	else {
		// Řešíme kruznici
		printf("zadej polomer: ");
		scanf("%d", &a);
		printf("obvod: %f\n", 3.14 * 2 * a);
		printf("obsah: %f\n", 3.14 * a * a);
	}
}
