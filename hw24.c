#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int calculus51;

	int computer51;

	int programming;

} p;



int main(void)

{

    FILE *pFile;

	printf("          �ΰ�Ū�Ҧ�Ū��couse.txt        \n");


	printf("Ū�����e���G\n");

	pFile=fopen("course.txt", "r");

        

    if (pFile==NULL)

    {

        printf("�ɮ׶}�ҥ���!!\n");

        exit(1);

	}   

    else

    {

    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming)!=EOF) 

    	    printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}


