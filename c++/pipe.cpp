#include <iostream>
#include <unistd.h>
#include <cstring>

using namespace std;
int main(){

int fd[2];
pipe(fd);

int pid=fork();

if(pid==0){
 close(fd[1]);
 char buffer[100];
 read(fd[0],buffer,sizeof(buffer));
 cout<<"Child received :"<<buffer<<endl;
close(fd[0]);
}
else{
close(fd[0]);
const char* msg= "Hello World";
write(fd[1],msg,strlen(msg)+1);
close(fd[1]);

}

return 0;
}
