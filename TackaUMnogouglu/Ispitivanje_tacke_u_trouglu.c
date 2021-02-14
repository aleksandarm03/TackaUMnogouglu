#include<stdio.h>
#include<math.h>
typedef struct{
    int x,y;
}Tacka;
int tackaUMnogouglu(Tacka M[], Tacka A,int n){

// mnogougao mora da ima bar 3 temena
if (n < 3)
return 0;
int uMnogouglu = -1;
for(int i = 0; i < n; i++){
// naredno teme u poretku mnogougla
int j = (i+1)%n;
// ukoliko se x koordinata tacke A nalazi izmedju vrednosti
// x koordinata krajnjih tacaka ivice i presecna tacka je
// na vertikalnoj polupravoj usmerenoj nanize sa pocetkom u tacki A
if ( A.x > fmin(M[i].x,M[j].x) && A.x < fmax(M[i].x,M[j].x)
&& M[i].y + (M[j].y - M[i].y)/(M[j].x - M[i].x)* (A.x - M[i].x) < A.y)
// registrujemo jos jedan presek
uMnogouglu *=-1;
}
return uMnogouglu;
}
int main()
{
Tacka M[] = {{0, 0}, {10, 1}, {12, 12}, {2, 10}};
int n = sizeof(M)/8;
Tacka A = {5, 8};
if (tackaUMnogouglu(M, A,n)>0)
printf("Tacka se nalazi u mnogouglu");
else
printf("Tacka se ne nalazi u mnogouglu");
return 0;
}
