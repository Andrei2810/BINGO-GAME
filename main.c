#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
void generator_5(int v[],int n)
{
    int m=0;
    time_t t;
    srand((unsigned) time(&t));
    int random;
    while(m<=n)
    {
        random=rand() % 40 +1;
        if(gasit(random,v,m)==0)
        {
            v[m]=random;
            m++;
        }
    }
}
void generator_6(int v[],int n)
{
    int m=0;
    time_t t;
    srand((unsigned) time(&t));
    int random;
    while(m<=n)
    {
        random=rand() % 49 +1;
        if(gasit(random,v,m)==0)
        {
            v[m]=random;
            m++;
        }
    }
}
int main()
{

    char c;
    int a[8][5],j,i,vnr[6],v[6],b[8][5],k,nregale,nr_win[6];

    while(1)
    {
        system("cls");
        printf("\033[0;33m");
        printf("BINGO\n");
        printf("\033[0m");
         printf("\033[0;36m");
        printf("A. 5 din 40\n");
        printf("\033[0m");
         printf("\033[0;33m");
        printf("B. 6 din 49\n");
          printf("\033[0m");
          printf("\033[0;35m");
        printf("C.Reguli si indicatii\n");
          printf("\033[0m");
          printf("\033[0;32m");
        printf("I.Informatii autor\n");
          printf("\033[0m");
        printf("\033[0;31m");
        printf("E.Iesire\n");
          printf("\033[0;34m");
        printf("Alegeti tipul de joc pe care doriti sa il jucati:");
          printf("\033[0m");
        c=toupper(getchar());
        fflush(stdin);
        switch(c)
        {
        case 'A':
            j=1;
            for(i=0; i<5; i++)
                v[i]=0;
            nregale=0;

            generator_5(vnr,5);

            system("cls");
            printf("Ati ales optiunea 5 din 40 de numere\n");
            printf("Introduceti cele 5 numere pe care doriti sa le puneti pe bilet\n");
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//VERIFICAREA NUMERELOR IN CAZ CA TE INDOIESTI CA POTI CASTIGA POTI VEDEA NUMERELE CASTIGATOARE SI APOI SA LE INTRODUCI
//             for(i=0;i<5;i++)
//                printf("%i ",vnr[i]);
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            while(j<=5)
            {
                if(j==1)
                    printf("Introduceti primul numar: ");
                else
                    printf("Introduceti al %i-lea numar : ",j);
                scanf("%i",&i);
                //validare numar i
                while(verificare_finala(i,v,5)==0)
                {
                    if(verificare_nr_5_40(i,v,5)==0)//nu apartine intervalului 1 40
                    {
                        printf("\033[0;31m");
                        printf("!!!!!!!!!NUMAR INVALID INTRODUCETI UN NUMAR CARE SA APARTINA INTERVALULUI!!!!!!!!!\n");
                        printf("\033[0m");
                        printf("Introduceti al %i-lea numar : ",j);
                        scanf("%i",&i);
                    }
                    else//numarul a fost introdus si inainte
                    {
                        printf("\033[0;31m");
                        printf("!!!!!!!!!NUMAR INVALID NUMARUL PE CARE L-ATI INTRODUS A FOST INTRODUS ANTERIOR!!!!!!!!!\n");
                        printf("\033[0m");
                        printf("Introduceti al %i-lea numar : ",j);
                        scanf("%i",&i);
                    }


                }
                v[j-1]=i;
                j++;
            }
            ordonare(vnr,5);
            ordonare(v,5);
            system("cls");
            printf("Talonul cu numerele alese de dumneavoastra :\n");
            afisare_talon(a,8,5,v);
            printf("Talonul cu numere castigatoare:\n");
            afisare_talon_castigator(a,8,5,vnr);

            for(i=0; i<5; i++)
                for(j=0; j<5; j++)
                    if(v[i]==vnr[j])
                    {
                        nr_win[nregale]=v[i];
                        nregale++;
                    }

            messaj_castigator_5(nregale,nr_win);
            //PRIMUL JOC 5 DIN 40 INCHEIAT
            break;
        case 'B':
        //REINITIALIZARE VAR....PENTRU A PUTEA JUCA JOCUL LA NESFARSIT
         j=1;
            for(i=0; i<6; i++)
                v[i]=0;
            nregale=0;
            generator_6(vnr,6);
            system("cls");
            printf("Ati ales optiunea 6 din 49 de numere\n");
            printf("Introduceti cele 6 numere pe care doriti sa le puneti pe bilet\n");
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//VERIFICAREA NUMERELOR IN CAZ CA TE INDOIESTI CA POTI CASTIGA POTI VEDEA NUMERELE CASTIGATOARE SI APOI SA LE INTRODUCI
             for(i=0;i<6;i++)
                printf("%i ",vnr[i]);
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            while(j<=6)
            {
                if(j==1)
                    printf("Introduceti primul numar: ");
                else
                    printf("Introduceti al %i-lea numar : ",j);
                scanf("%i",&i);
                //validare numar i
                while(verificare_finala_6(i,v,6)==0)
                {
                    if(verificare_nr_6_49(i,v,6)==0)//nu apartine intervalului 1 40
                    {
                        printf("\033[0;31m");
                        printf("!!!!!!!!!NUMAR INVALID INTRODUCETI UN NUMAR CARE SA APARTINA INTERVALULUI!!!!!!!!!\n");
                        printf("\033[0m");
                        printf("Introduceti al %i-lea numar : ",j);
                        scanf("%i",&i);
                    }
                    else//numarul a fost introdus si inainte
                    {
                        printf("\033[0;31m");
                        printf("!!!!!!!!!NUMAR INVALID NUMARUL PE CARE L-ATI INTRODUS A FOST INTRODUS ANTERIOR!!!!!!!!!\n");
                        printf("\033[0m");
                        printf("Introduceti al %i-lea numar : ",j);
                        scanf("%i",&i);
                    }
                }
                v[j-1]=i;
                j++;
            }
            ordonare(vnr,6);
            ordonare(v,6);
            system("cls");
            printf("Talonul cu numerele alese de dumneavoastra :\n");
            afisare_talon_6nr(b,9,6,v);
            printf("Talonul cu numere castigatoare:\n");
            afisare_talon_castigator_6nr(b,9,6,vnr);


            for(i=0; i<6; i++)
                for(j=0; j<6; j++)
                    if(v[i]==vnr[j])
                    {
                        nr_win[nregale]=v[i];
                        nregale++;
                    }
            messaj_castigator_6(nregale,nr_win);

            break;
        default:
            printf("ALEGETI O VARIANTA VALIDA\n");
            printf("Asteptati...\n");
            sleep(1);
            break;
        case 'C':
            printf("In ce consta jocul?\n");
            printf("1.Jocul consta in alegerea a 5 din 40 de numere castigatore sau a 6 din 49 de numere,depinde de alegerea pe care doriti sa o faceti.\n");
            printf("2.Pentru a putea castiga in acest joc este nevoie sa ghiciti cel putin 3 numere.\n");
            printf("3.Daca ati ales jocul cu 5 numere din 40 atunci va trebui sa introduceti cele 5 numere alese de dumneavoastra care vor fi ulterior notate pe talon.\n");
            printf("4.Daca ati ales jocul cu 6 numere din 49 atunci va trebui sa introduceti 6 numere alese de dumneavoastra care vor fi ulterior notate pe talon.\n");
            printf("5.Dupa introducerea numerelor o sa puteti vedea talonul castigator si talonul pe care l-ati ales dumneavoastra.\n");
            printf("6.In cazul in care veti castiga va va aparea un mesaj care va felicita,in caz contrar va va aparea mesaujul ati pierdut.\n");
            printf("MENTIUNI\n");
            printf("Dupa ce se afiseaza talonul cu numere castigatoare pentru a juca din nou apasati ENTER\n");
            printf("Pentru a putea vedea daca programul este corect am pus niste comentarii care pot fi dezactivate pentru a sti numerele inainte de extragere\n");
            printf("Programul nu functioneaza pentru citirea unor numere reale\n");
            printf("Numerele alese de utilizator nu se pot repeta!!!Acestea sunt verificate iar daca un numar nu este bun va aparea un mesaj de eroare care va informa utilizatorul despre greseala lui\n");
            printf("TIN SA MENTIONEZ CA NUMERELE GENERATE SUNT UNICE ADICA NU POATE CA UN NUMAR SA FIE ALES DE 2 ORI");
            getchar();
            break;
        case 'E':
            return 0;
            break;
        case 'I':
            printf("Aluculesei Andrei-Bogdan\n");
            printf("Grupa 3111b\n");
            getchar();
            break;
        }
    }



    return 0;
}
