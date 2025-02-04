#include <stdio.h>




void bubblesort(int arr[], int grandezza){
    int i,c=0;
    printf("\n");
    for (i = 1; i <= grandezza; ++i) {
        for (int j = 0; j < grandezza - i; ++j) {
            if (arr[j + 1] < arr[j]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                c++;
            }
        }
    }
    if (c == 0) {
        i=grandezza;
    }
}





int main(void) {
    int voti[19],max=0,media=0,volte=1;
    printf("inserisci solo voti tra 2 e 10\n");
    for (int i=0; i<20; i++) {
        scanf("%d",&voti[i]);
        while (voti[i]>10 || voti[i]<2) {
            printf("voto invalido riprova\n");
            scanf("%d",&voti[i]);
        }
        if (i==0) {
            voti[i] = max;
        } else if (voti[i] >= max) {
            max = voti[i];
        }
    }
    for (int k=0;k<20;k++) {
        if (voti[k] == max) {
            volte++;
        }
    }
    for (int j=0;j<20;j++) {
        media = voti[j] + media;
    }
    media = media/20;
    printf("hai i inseriti i seguenti voti riordinati:");
    bubblesort(voti,19);
    for (int i=0;i<19;i++) {
        printf("%d ",voti[i]);
    }
    printf("\ntra i 20 voti %d e' stato il voto massimo e lo hai raggiunto %d volte con una media totale di: %d",max,volte,media);
}
