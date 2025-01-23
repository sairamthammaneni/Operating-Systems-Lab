#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent *dptr;
int main(){
	char buff[100];
	DIR *dirp;
	printf("\nENTER DIRECTORY NAME : ");
	scanf("%s",buff);
	if((dirp=opendir(buff))==NULL){
		printf("The given directory doesnot exist\n");
		exit(1);
	}
	while(dptr==readdir(dirp)){
		printf("%s\n",dptr->d_name);
	}
	closedir(dirp);
}
