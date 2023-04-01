#include<stdio.h>


int main() {
	int n;scanf("%d",&n);
	char s[100000];
	scanf("%s",&s);
	int tot = 0;
	for(int i = 0;i < n;++i){
		if(s[i] == 'A') tot++;
		else tot--;
	}
	if(tot == 0) printf("Friendship\n");
	else if(tot > 0) printf("Anton\n");
	else printf("Danik\n");
 	return 0;
}
