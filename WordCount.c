#include<stdio.h>
#include<string.h>
int main(int argc, char **argv){
	
	char s[255];

    FILE *fp = fopen(argv[2], "r");
    
    fgets(s, "%s", fp);
    int len = strlen(s);
	if(argv[1][1] == 'c'){
		printf("字符数：%d", len);
	}else{
		int cnt = 0;
	    for(int i = 0; i < len; i++){
			if(s[i] == ' ' || s[i] == ',') cnt++;
		}
		
		printf("单词数：%d", cnt + 1);
	}
	fclose(fp);
	return 0;
}

