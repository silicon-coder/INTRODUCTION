#include<stdio.h> 
int main(){
	FILE *fp; 
	fp = fopen("Student.txt","w"); 
	fputs("Name Age Rollnumber \n",fp); 
	fputs("Shivendu 19 2000290120153 \n",fp);
	fputs("Shiva 12 2000290120146 \n",fp); 
	fputs("Yashasvi 62 2000290120199 \n",fp); 
	fclose(fp); 
	FILE *in=fopen("Student.txt","r");
	char c;
	while((c=fgetc(in))!=EOF)
		putchar(c);
	fclose(in); 
	return 0;
}