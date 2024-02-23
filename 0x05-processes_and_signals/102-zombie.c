#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int infinite_while(void);

/**
 * main - this is the main function
 * void - nothing
 * Return: 1 eachtime success
 */
int main(void)
{
	pid_t child_pid;
	int i;

	/* Create 5 zombie processes */
	for (i = 0; i < 5; i++)
	{
		child_pid = fork(); /* Create child process */

		if (child_pid > 0)
		{
			/* Parent process */
			printf("Zombie process created, PID: %d\n", child_pid);
			sleep(1); /* Sleep to allow child to become zombie */
		}
		else if (child_pid == 0)
		{
			/* Child process */
			exit(0); /* Child exits immediately, becoming a zombie */
		}
		else
		{
			/* Fork failed */
			perror("fork");
			return (1);
		}
	}

	/* Infinite loop to keep the program running */
	return (infinite_while);
}

/**
 * infinite_while - creates 5 zombie processes.
 * Return: 0 eachtime success.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

