/* Here's the receiver program. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>


struct my_msg_st {
    long int my_msg_type;
    char some_text[BUFSIZ];
};

int main(int argc,char** argv)
{
    int running = 1;
    int msgid;
    struct my_msg_st some_data;

/* First, we set up the message queue. */
    msgid = msgget((key_t)1234, 0666 | IPC_CREAT);
    if (msgid == -1) {
        fprintf(stderr, "msgget failed with error: %d\n", errno);
        exit(EXIT_FAILURE);
    }

/* Then the messages are retrieved from the queue, until an end message is encountered.
 Lastly, the message queue is deleted. */

	if(0 == strcmp(argv[1],"-a"))
	{
		some_data.my_msg_type = atoi(argv[2]);
		strcpy(some_data.some_text, argv[3]);
		if (msgsnd(msgid, (void *)&some_data, BUFSIZ , 0) == -1) {
			fprintf(stderr, "msgsnd failed\n");
			exit(EXIT_FAILURE);
		}
	}
	else if(0 == strcmp(argv[1],"-r"))
	{
		some_data.my_msg_type = atoi(argv[2]);
		if (msgrcv(msgid, (void *)&some_data, BUFSIZ,
					some_data.my_msg_type , 0) == -1) {
			fprintf(stderr, "msgrcv failed with error: %d\n", errno);
			exit(EXIT_FAILURE);
		}
		printf("get[%s]\n", some_data.some_text);
	}
	else if(0 == strcmp(argv[1],"-d"))
	{
		if (msgctl(msgid, IPC_RMID, 0) == -1) {
			fprintf(stderr, "msgctl(IPC_RMID) failed\n");
			exit(EXIT_FAILURE);
		}
	}

	exit(EXIT_SUCCESS);
}
