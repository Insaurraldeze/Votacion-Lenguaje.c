#include<stdio.h>
int main()
{
	int p1=0,p2=0,p3=0,p4=0,p5=0;
	int votos;
	
	do
	{
		printf("INGRESE EL VOTO: ");
		scanf("%d",&votos);
		fflush(stdin);
		if(votos==0)
		{
			printf("VOTO INVALIDO\n:");
		}
		
		switch(votos)
		{
			case 1:
				{
					printf("VOTO INGRESADO A P1");
					p1++;
					break;
				}
			case 2:
			    {
				    printf("VOTO INGRESADO A P2");
				    p2++;
				    break;
			    }
			case 3:
			    {
			    	printf("VOTO INGRESADO A P3");
			    	p3++;
			    	break;
				}		
			case 4:
			    {
			    	printf("VOTO INGRESADO A P4");
			    	p4++;
			    	break;
				}
			case 5:
			    {
			    	printf("VOTO INGRESADO A P5");
			    	p5++;
			    	break;
				}
					
		}
	
	}while(votos!=0);
	
	printf("P1 TIENE %d: votos, P2 TIENE %d: votos, P3 TIENE %d: votos, P4 TIENE %d: votos, P5 TIENE %d: votos", p1,p2,p3,p4,p5);
	
}
