#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE* result = popen("results.txt","wr");




char url[150];

char command_buffer[300];
printf("=====> input the url");
scanf("%s",url);

for (int c=33; c<140 ; c++)
{

        snprintf(command_buffer, sizeof(command_buffer) , "curl -X POST  %s  -d \"key=KEY%c\" | grep mono >> results.txt",url,c);
        system("echo  \"=====>\">> results.txt");
        int status = system(command_buffer);
        



if ( status ==0)
printf("=====> done\n");

else{
printf("=====> failed\n");
}
}
}
