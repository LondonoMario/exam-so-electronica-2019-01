#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid,pid2;
	int status;
	pid = fork();
	if (pid != 0){
		pid2 = waitpid(pid, &status, WNOHANG);
		printf("Soy el padre y voy primero \n");
		printf("El pid proceso padre: %d\n",getpid());
		printf("El pid del padre del padre es:%d\n",getppid());
	}

	else {
		struct timeval tv; //tomado de stackoverflow.com/question/264350/is-there-an-alternative-for-sleep-in-c
		tv.tv_sec = 1/2;
		tv.tv_usec = 50;
		select(0, NULL, NULL, NULL,&tv);
		printf("Soy el hijo y voy segundo \n");
//		int w = waitpid(getppid() , &status, 0);
//		printf("El waitpid es %d\n", w);
		printf("El pid del proceso es: %d\n",getpid());
		printf("El pid del padre: %d \n",getppid());
	}
	return 0;
}

//
