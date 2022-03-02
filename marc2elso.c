#include <stdio.h>

void sor_kiir(int szelesseg, int csillagok){
int szokozok=(szelesseg-csillagok)/2;
for(int i=0; i<szokozok; i++){
    putchar(' ');
}
for(int i=0; i<csillagok; i++){
    putchar('*');
}
puts("");  // printf("\n");
}



int main(){
int n;
printf("Adja meg a magasságot!\n");
scanf("%d",&n);

for(int i=1; i<=n; i+=2){
    sor_kiir(n,i);
}

for(int i=n-2; i>=1; i-=2){
    sor_kiir(n,i);
}

return 0;
}