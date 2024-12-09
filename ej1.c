#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> 
#include <uistd.h>

int main ( int argc, char *argv[] ){
    if (argc != 2){
        return -1;
    }
    const char *nom_arxiu = argv[1];
    
    int fd= open(nom_arxiu, O_RDWR);
    if (fd == -1){

    }
    else{

    }
}