#include ;
#include ;
#include ;
using namespace std;
int main()
{
int vet[11], n, vet_v1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2}, vet_v2[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2}, dig_v1, dig_v2, p_esc, mod, repete;
srand(time(NULL));
cout &lt;&lt; "Gerando CPF...";
while(repete != 2)
{
for (n = 0, p_esc = 0; n &lt; 9; n++) { vet[n] = rand()%10; p_esc = vet[n] * vet_v1[n] + p_esc; } mod = p_esc % 11; if (mod == 0 or mod == 1) dig_v1 = 0; if (mod &gt;=2 &amp;&amp; mod &lt;= 10) dig_v1 = 11 - mod; vet[9] = dig_v1; for (n = 0, p_esc = 0; n &lt; 10; n++) p_esc = vet[n] * vet_v2[n] + p_esc; mod = p_esc % 11; if (mod == 0 or mod == 1) dig_v2 = 0; if (mod &gt;= 2 &amp;&amp; mod &lt;= 10)
dig_v2 = 11 - mod;
vet[10] = dig_v2;
cout &lt;&lt; "\n\nCPF gerado: ";
for (n = 0; n &lt; 11; n ++)
{
cout &lt;&lt; vet[n];

if (n == 2 or n == 5)
cout &lt;&lt; ".";
if (n == 8)
cout &lt;&lt; " - ";
}
repete = 2;
cout &lt;&lt; "\n\nInsira 1 para Gerar um novo CPF ou 2 para fechar: "; cin &gt;&gt; repete;
}

}
