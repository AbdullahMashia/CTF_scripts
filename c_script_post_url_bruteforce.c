#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE* result = popen("results.txt","wr");




char url[150];
char base_word[10];

char command_buffer[300];
printf("=====> input the url:");
printf("=====> enter the base word:");
scanf("%s",base_word);
        
scanf("%s",url);

for (int c=33; c<140 ; c++)
{

        snprintf(command_buffer, sizeof(command_buffer) , "curl -X POST  %s  -d \"key=%s%c\" | grep mono >> results.txt",url,base_word,c);
        system("echo  \"=====>\">> results.txt");
        int status = system(command_buffer);
        



if ( status ==0)
printf("=====> done\n");

else{
printf("=====> failed\n");
}
}
}
