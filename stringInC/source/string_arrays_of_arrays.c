
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80]={
		"I left my heart in Harvard Med School",
		"Newark, Newark - a wonderful town",
		"Dancing with a Dork",
		"From here to maternity",
		"The girl from Iwo Jima",
		"It ok it ok",

	};

/*int main(){
        int match_exist=0;
	char track_name[80];
	printf("please input your track name:");
	fgets(track_name,sizeof(track_name),stdin);
        printf("size of trucks is :%i\n",sizeof(tracks));
	for (int i=0; i< 6; i++){
		int mach_exist = strcmp(tracks[i],track_name);
		if(mach_exist=1){
        	printf("%s\n",tracks[i]);
        	break;
		}
	}
	if (match_exist==0){
	printf("sorry your track is not found in our list!");
	}

 return 0;
}*/

void find_track(char search_for[])
{
int i;
for (i = 0; i < 5; i++) {
if (strstr (tracks[i] ,search_for ))
printf("Track %i: '%s'\n",i,tracks[i] );
}


}
int main()
{
char search_for[80];
printf("Search for: ");
fgets(search_for, 80, stdin);
find_track(search_for);
return 0;
}



