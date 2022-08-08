#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int Note1[13];
    int Note2[15];
    int tri[28];
    int i, j, N, moy,k=13;
    int c =0;
    int min, max;
do{
    printf ("pour sortir du programme entrer 0");
    printf("donner le  numero du classe : ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("veuiller entrer les notes pour la classe 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &Note1[i]);
        }
        max = Note1[0];
        min = Note1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < Note1[i])
                max = Note1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (Note1[i] < min)
                min = Note1[i];
        }
        for (i = 0; i < 13; i++)
                {if (Note1[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=10 est:%d\n",c);
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n ", max, min);
        break;

    case 2:
        printf("veuiller entrer les notes pour la classe 2:\n");
            c=0;
        for (i = 0; i < 15; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &Note2[i]);
        }
        max = Note2[0];
        min = Note2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < Note2[i])
                max = Note2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > Note2[i])
                min = Note2[i];
        }
                for (i = 0; i < 15; i++)
                {if (Note2[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=10 est:%d\n",c);
        
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n", max, min);
        break;
    case 3:
        printf("veuiller entrer les notes pour les deux classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=Note1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[k]=Note2[i];
         k++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("les notes de deux classes par ordre croissant est:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("veuiller choisir 1 ou 2 ou 3");
    }
    }while(N!=0);
    }
