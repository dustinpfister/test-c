#include <stdio.h>
#include <dirent.h>

int main(){
    DIR *folder;
    struct dirent *entry;
    int files = 0;
    folder = opendir(".");
    if(folder == NULL){
        return 1;
    }
    while( (entry=readdir(folder)) ){
        files++;
        printf("%s\n", entry->d_name);
    }
    closedir(folder);
    return 0;
}
