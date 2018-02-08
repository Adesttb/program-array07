#include <stdio.h>
main ()
{
    float himpa[100],himpb[100];
    int n,a,himpc[100];
        printf ("masukkan jumlah elemen : ");
        scanf  ("%d",&n);
        for (a=1;a<=n;a++){
            printf ("masukkan himpunan A[%d] : ",a);
            scanf  ("%f", &himpa[a]);
            printf ("masukkan himpunan B[%d] : ",a);
            scanf  ("%f", &himpb[a]);
            }
         printf ("jumlah kedua himpunan : { ");
         for (a=1;a<=n;a++){
             himpc[a]=himpa[a]+himpb[a];
             printf ("%d ", himpc[a]);}
             printf (" }");
			 
            return 0;
}
