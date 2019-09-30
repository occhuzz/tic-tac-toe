#include<stdio.h>
#include<stdlib.h>

void loop(char matriz[][3]);
void inicio(char matriz[][3]);
void tablero(char matriz[][3]);
void jugador1(char matriz[][3]);
void jugador2(char matriz[][3]);
void winner(char matriz[][3]);

int main()
{
    char matriz[3][3];

    loop(matriz);

    return 0;
}

void loop (char matriz[][3])
{
    int i;

    inicio(matriz);
    tablero(matriz);

    for(i=0;i<4;i++)
    {
        jugador1(matriz);
        tablero(matriz);
        winner(matriz);
        jugador2(matriz);
        tablero(matriz);
        winner(matriz);
    }
    jugador1(matriz);
    tablero(matriz);
    winner(matriz);
}

void inicio(char matriz[][3])
{
    int i,j;

    char letra;

    letra='1';

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matriz[i][j]=letra++;
        }
    }
}

void tablero(char matriz[][3])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<2)
            {
                printf("%c | ", matriz[i][j]);
            }else
            {
                printf("%c", matriz[i][j]);
            }
        }
        if(i<2)
        {
           printf("\n----------\n");
        }
    }
    printf("\n\n");
}

void jugador1(char matriz[][3])
{
    int i,j,k;
    char ficha1;

    do
    {
        do
        {
            printf("\nJugador 1 elija la posicion: ");
            scanf("%c",&ficha1);
            fflush(stdin);
            printf("\n");
        }while(ficha1<'1' || ficha1>'9');

        k=0;

        switch(ficha1)
        {
            case '1':
            {
                i=0;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '2':
            {
                i=0;
                j=1;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '3':
            {
                i=0;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '4':
            {
                i=1;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '5':
            {
                i=1;
                j=1;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '6':
            {
                i=1;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '7':
            {
                i=2;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '8':
            {
                i=2;
                j=1;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '9':
            {
                i=2;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
        }
    }while(k==1);
}

void jugador2(char matriz[][3])
{
    int i,j,k;
    char ficha1;

    do
    {
        do
        {
            printf("\nJugador 2 elija la posicion: ");
            scanf("%c",&ficha1);
            fflush(stdin);
            printf("\n");
        }while(ficha1<'1' || ficha1>'9');

        k=0;

        switch(ficha1)
        {
            case '1':
            {
                i=0;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '2':
            {
                i=0;
                j=1;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '3':
            {
                i=0;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '4':
            {
                i=1;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '5':
            {
                i=1;
                j=1;
                if(matriz[i][j]=='O'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='X';
            }
            break;
            case '6':
            {
                i=1;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '7':
            {
                i=2;
                j=0;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '8':
            {
                i=2;
                j=1;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
            case '9':
            {
                i=2;
                j=2;
                if(matriz[i][j]=='X'||matriz[i][j]=='O')
                {
                    k=1;
                    printf("Casilla ocupada, elija otra casilla\n");
                }else
                matriz[i][j]='O';
            }
            break;
        }
    }while(k==1);
}

void winner(char matriz[][3])
{
    if(matriz[0][0]=='X'&&matriz[1][1]=='X'&&matriz[2][2]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][0]=='O'&&matriz[1][1]=='O'&&matriz[2][2]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[0][0]=='X'&&matriz[1][0]=='X'&&matriz[2][0]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][0]=='O'&&matriz[1][0]=='O'&&matriz[2][0]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[0][0]=='X'&&matriz[0][1]=='X'&&matriz[0][2]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][0]=='O'&&matriz[0][1]=='O'&&matriz[0][2]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[1][0]=='X'&&matriz[1][1]=='X'&&matriz[1][2]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[1][0]=='O'&&matriz[1][1]=='O'&&matriz[1][2]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[0][1]=='X'&&matriz[1][1]=='X'&&matriz[2][1]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][1]=='O'&&matriz[1][1]=='O'&&matriz[2][1]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[0][2]=='X'&&matriz[1][2]=='X'&&matriz[2][2]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][2]=='O'&&matriz[1][2]=='O'&&matriz[2][2]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }

    if(matriz[0][2]=='X'&&matriz[1][1]=='X'&&matriz[2][0]=='X')
    {
        printf("\nJugador 1 gana.");
        exit(1);
    }
    else if(matriz[0][2]=='O'&&matriz[1][1]=='O'&&matriz[2][0]=='O')
    {
        printf("\nJugador 2 gana.");
        exit(1);
    }
}
