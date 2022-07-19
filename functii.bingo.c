
void afisare(int v[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%i ",v[i]);
}
void ordonare(int V[],int n)
{
    int i,j,schimb;
    for(i=0;i<=n-2;i++)
{
	for(j=i+1;j<=n-1;j++)
	{
		if(V[i]>V[j])
		{
		schimb=V[i];
		V[i]=V[j];
		V[j]=schimb;
		}
	}

}
}
void afisare_talon(int a[8][5],int n,int m,int v[])
{
    int i,j,k=0,s=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s==v[k])
            {
                printf("\033[0;31m");
                printf("%i ",s);
                printf("\033[0m");
                k++;
            }
            else
                printf("%i ",s);
            s++;
        }
        printf("\n");


    }
}
int verificare_finala(int x,int v[],int n)
{
    if(verificare_nr_5_40(x,v,n)==0)
        return 0;
    if(validare_nr_vect(x,v,n)==0)
        return 0;
    return 1;
}
int verificare_finala_6(int x,int v[],int n)
{
    if(verificare_nr_6_49(x,v,n)==0)
        return 0;
    if(validare_nr_vect(x,v,n)==0)
        return 0;
    return 1;
}
int verificare_nr_5_40(int x,int v[],int n)
{
    int i;
    if(x>40 || x<1)
        return 0;
    else
        return 1;

}
int validare_nr_vect(int x,int v[],int n)
{int i;
     for(i=0;i<n;i++)
        if(x==v[i])
            return 0;
    return 1;
}
void afisare_talon_castigator(int a[8][5],int n,int m,int v[])
{
    int i,j,k=0,s=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s==v[k])
            {
                printf("\033[0;35m");
                printf("%i ",s);
                printf("\033[0m");
                k++;
            }
            else
                printf("%i ",s);
            s++;
        }
        printf("\n");


    }
}
int gasit(int x,int v[],int m)
{
    int i;
    for(i=0;i<m;i++)
        if(v[i]==x)
            return 1;
    return 0;
}
int verificare_nr_6_49(int x,int v[],int n)
{
    int i;
    if(x>49 || x<1)
        return 0;
    else
        return 1;

}
void afisare_talon_6nr(int a[9][5],int n,int m,int v[])
{
    int i,j,k=0,s=1,s1=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s==v[k])
            {
                printf("\033[0;31m");
                printf("%i ",s);
                printf("\033[0m");
                k++;
            }
            else
                printf("%i ",s);
            s++;
             if(s==50)
            break;
        }
        printf("\n");


    }
}
void afisare_talon_castigator_6nr(int a[9][6],int n,int m,int v[])
{
    int i,j,k=0,s=1,s1=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s==v[k])
            {
                printf("\033[0;35m");
                printf("%i ",s);
                printf("\033[0m");
                k++;
            }
            else
                printf("%i ",s);
            s++;
            if(s==50)
            break;

        }
        printf("\n");


    }
}
void messaj_castigator_5(int nregale,int nr_win[])
{
    switch(nregale)
            {
            case 0:
                printf("\033[0;33m");
                printf("Nu ati ghicit nici un numar\n");
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 1:
                printf("\033[0;33m");
                printf("Ati ghicit un singur numar din 5 acela este %i\n",nr_win[0]);
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 2:
                printf("\033[0;33m");
                printf("Ati ghicit doua numere din 5 acelea sunt: %i %i\n",nr_win[0],nr_win[1]);
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 3:
                printf("\033[0;33m");
                printf("Ati ghicit trei numere din 5 acelea sunt: %i %i %i\n",nr_win[0],nr_win[1],nr_win[2]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 4:
                printf("\033[0;33m");
                printf("Ati ghicit 4 numere din 5 acelea sunt: %i %i %i %i\n",nr_win[0],nr_win[1],nr_win[2],nr_win[3]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 5:
                printf("\033[0;33m");
                printf("Ati ghicit 5 numere din 5 acelea sunt: %i %i %i %i %i \n",nr_win[0],nr_win[1],nr_win[2],nr_win[3],nr_win[4]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT MARELE PREMIU!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            }
}
void messaj_castigator_6(int nregale,int nr_win[])
{
    switch(nregale)
            {
            case 0:
                printf("\033[0;33m");
                printf("Nu ati ghicit nici un numar\n");
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 1:
                printf("\033[0;33m");
                printf("Ati ghicit un singur numar din 6 acela este %i\n",nr_win[0]);
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 2:
                printf("\033[0;33m");
                printf("Ati ghicit doua numere din 6 acelea sunt: %i %i\n",nr_win[0],nr_win[1]);
                printf("\033[0m");
                printf("\033[0;32m");
                printf("!!!!!!!!!!!!!!ATI PIERDUT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 3:
                printf("\033[0;33m");
                printf("Ati ghicit trei numere din 6 acelea sunt: %i %i %i\n",nr_win[0],nr_win[1],nr_win[2]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 4:
                printf("\033[0;33m");
                printf("Ati ghicit 4 numere din 6 acelea sunt: %i %i %i %i\n",nr_win[0],nr_win[1],nr_win[2],nr_win[3]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 5:
                printf("\033[0;33m");
                printf("Ati ghicit 5 numere din 6 acelea sunt: %i %i %i %i %i \n",nr_win[0],nr_win[1],nr_win[2],nr_win[3],nr_win[4]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            case 6:
                 printf("\033[0;33m");
                printf("Ati ghicit 6 numere din 6 acelea sunt: %i %i %i %i %i %i\n",nr_win[0],nr_win[1],nr_win[2],nr_win[3],nr_win[4],nr_win[5]);
                printf("\033[0m");
                printf("\033[0;36m");
                printf("!!!!!!!!!!!!!!ATI CASTIGAT MARELE PREMIU!!!!!!!!!!!!!!\n");
                printf("\033[0m");
                printf("\033[0;33m");
                printf("Pentru a putea juca din nou apasati enter");
                printf("\033[0m");
                getchar();
                getchar();
                break;
            }
}
