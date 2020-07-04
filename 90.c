#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void ex_program (int sig);

int main (void) {
	(void) signal (SIGINT, ex_program);

	while(1)
		printf ("Мы спим .. ZZZzzzz ....\n"),sleep(1);

	return 0;
}

void ex_program (int sig) {
	printf("Просыпайся ... !!! - Поступил сигнал: %d ... !!\n", sig);
	(void) signal (SIGINT, SIG_DFL);
}
