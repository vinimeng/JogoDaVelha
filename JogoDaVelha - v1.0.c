#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

#define SETA_ESQUERDA 97
#define SETA_DIREITA  100
#define SETA_CIMA     119
#define SETA_BAIXO    115
#define TECLA_X       120
#define TECLA_O       111

int main()
{
    int pos[2] = {0};
    char table[3][3];
    bool tecla_valida;
    int i, j, k=1, l, m, n;
    while(k != 0){
    	for(i = 0; i < 3; i++) for(j = 0; j < 3; j++) table[i][j] = '-';
    	printf("*--\n---\n---"); 
    	while(1)
    	{
            	tecla_valida = true;
            	int t = getch();
            	switch(t)
            	{
                     	case SETA_ESQUERDA:
                          	pos[0]--;
                          	if(pos[0] < 0) pos[0] = 0;
                          	break;
                     	case SETA_DIREITA:
                          	pos[0]++;
                          	if(pos[0] > 2) pos[0] = 2;
                          	break;     
                     	case SETA_CIMA:
                          	pos[1]--;
                          	if(pos[1] < 0) pos[1] = 0;  
                          	break;
                     	case SETA_BAIXO:
                          	pos[1]++;
                          	if(pos[1] > 2) pos[1] = 2;  
                          	break;
                     	case TECLA_X:
                          	switch(pos[1])
                          	{
                               	case 0:    
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[0][0] == '-') table[0][0] = 'x';
                                               	break;
                                          	case 1:
                                               	if(table[0][1] == '-') table[0][1] = 'x';
                                               	break;
                                          	case 2:
                                               	if(table[0][2] == '-') table[0][2] = 'x';
                                               	break;
                                    	}
                                    	break;       
                               	case 1:
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[1][0] == '-') table[1][0] = 'x';
                                               	break;
                                          	case 1:
                                               	if(table[1][1] == '-') table[1][1] = 'x';
                                               	break;
                                          	case 2:
                                               	if(table[1][2] == '-') table[1][2] = 'x';
                                               	break;
                                    	}
                                    	break; 
                               	case 2:
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[2][0] == '-') table[2][0] = 'x';
                                               	break;
                                          	case 1:
                                               	if(table[2][1] == '-') table[2][1] = 'x';
                                               	break;
                                          	case 2:
                                               	if(table[2][2] == '-') table[2][2] = 'x';
                                               	break;
                                    	}
                                    	break;      
                          	}
                          	break;
                     	case TECLA_O:
                          	switch(pos[1])
                          	{
                               	case 0:    
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[0][0] == '-') table[0][0] = 'o';
                                               	break;
                                          	case 1:
                                               	if(table[0][1] == '-') table[0][1] = 'o';
                                               	break;
                                          	case 2:
                                               	if(table[0][2] == '-') table[0][2] = 'o';
                                               	break;
                                    	}
                                    	break;       
                               	case 1:
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[1][0] == '-') table[1][0] = 'o';
                                               	break;
                                          	case 1:
                                               	if(table[1][1] == '-') table[1][1] = 'o';
                                               	break;
                                          	case 2:
                                               	if(table[1][2] == '-') table[1][2] = 'o';
                                               	break;
                                    	}
                                    	break; 
                               	case 2:
                                    	switch(pos[0])
                                    	{
                                          	case 0:
                                               	if(table[2][0] == '-') table[2][0] = 'o';
                                               	break;
                                          	case 1:
                                               	if(table[2][1] == '-') table[2][1] = 'o';
                                               	break;
                                          	case 2:
                                               	if(table[2][2] == '-') table[2][2] = 'o';
                                               	break;
                                    	}
                                    	break;      
                          	}
                     	default:
                          	tecla_valida = false;
                          	break;
            	}
            	if(tecla_valida)
            	{
                  	system("cls");
                  	switch(pos[1])
                  	{
                       	case 0:
                            	switch(pos[0])
                            	{
                                   	case 0:
                                        	printf("*%c%c", table[0][1], table[0][2]);
                                        	break;
                                   	case 1:
                                        	printf("%c*%c", table[0][0], table[0][2]); 
                                        	break;
                                   	case 2:
                                        	printf("%c%c*", table[0][0], table[0][1]);
                                        	break;
                             
                            	}
                            	for(i = 1; i < 3; i++)
                            	{
                                  	printf("\n");
                                  	for(j = 0; j < 3; j++) printf("%c", table[i][j]);    
                            	}
                            	break;
                       	case 1:
                            	for(j = 0; j < 3; j++) printf("%c", table[0][j]);
                            	printf("\n");
                            	switch(pos[0])
                            	{
                                   	case 0:
                                        	printf("*%c%c", table[1][1], table[1][2]);
                                        	break;
                                   	case 1:
                                        	printf("%c*%c", table[1][0], table[1][2]); 
                                        	break;
                                   	case 2:
                                        	printf("%c%c*", table[1][0], table[1][1]);
                                        	break;
                            	}
                            	printf("\n");
                            	for(j = 0; j < 3; j++) printf("%c", table[2][j]);
                            	break;   
                       	case 2:
                            	for(j = 0; j < 3; j++) printf("%c", table[0][j]);
                            	printf("\n");
                            	for(j = 0; j < 3; j++) printf("%c", table[1][j]);
                            	printf("\n");
                            	switch(pos[0])
                            	{
                                   	case 0:
                                        	printf("*%c%c", table[2][1], table[2][2]);
                                        	break;
                                   	case 1:
                                        	printf("%c*%c", table[2][0], table[2][2]); 
                                        	break;
                                   	case 2:
                                        	printf("%c%c*", table[2][0], table[2][1]);
                                        	break;
                            	}
                            	break;     
                  	}
         	 	}
          	if(table[0][0]=='x' && table[0][1]=='x' && table[0][2]=='x' || table[0][0]=='o' && table[0][1]=='o' && table[0][2]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][0]);
		  		  	break;
          	}
          	if(table[1][0]=='x' && table[1][1]=='x' && table[1][2]=='x' || table[1][0]=='o' && table[1][1]=='o' && table[1][2]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[1][0]);
		  		  	break;
          	}
          	if(table[2][0]=='x' && table[2][1]=='x' && table[2][2]=='x' || table[2][0]=='o' && table[2][1]=='o' && table[2][2]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[2][0]);
		  		  	break;
          	}
          	if(table[0][0]=='x' && table[1][0]=='x' && table[2][0]=='x' || table[0][0]=='o' && table[1][0]=='o' && table[2][0]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][0]);
		  		  	break;
          	}
          	if(table[0][1]=='x' && table[1][1]=='x' && table[2][1]=='x' || table[0][1]=='o' && table[1][1]=='o' && table[2][1]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][1]);
		  		  	break;
          	}
          	if(table[0][2]=='x' && table[1][2]=='x' && table[2][2]=='x' || table[0][2]=='o' && table[1][2]=='o' && table[2][2]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][2]);
		  		  	break;
          	}
          	if(table[0][0]=='x' && table[1][1]=='x' && table[2][2]=='x' || table[0][0]=='o' && table[1][1]=='o' && table[2][2]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][0]);
		  		  	break;
          	}
          	if(table[0][2]=='x' && table[1][1]=='x' && table[2][0]=='x' || table[0][2]=='o' && table[1][1]=='o' && table[2][0]=='o'){
		  		  	printf("\n\n %c WINS!!!\n\n", table[0][2]);
		  		  	break;
          	}
          	n=0;
			for(l=0;l<3;l++){
					for(m=0;m<3;m++){
							if(table[l][m]=='x' || table[l][m]=='o') n++;
					}
			}
			if(n==9){
				printf("\n\nDeu Velha!!!\n\n");
				break;
			}
    	} 
    	printf("\nQuer jogar outra vez?(s/n): ");
    	int f = getch();
    	if(f==110) k=0;
    	system("cls");
	}
    system("PAUSE");
}
