//int main() {
//    int opt, i, pozitie, lungime, k = 0;
//    char sir[50], sub[50];
//
//    printf("Dati cuvantul:");
//    gets(sir);
//
//
//    while (1) {
//        printf("\na) Şterge dintr - un şir de caractere un subşir specificat prin poziţie şi lungime.\n");
//        printf("b) Inserează într - un şir începând cu o poziţie dată un al şir.\n");
//        printf("c) Citeşte doua cuvinte şi înlocuieşte într - un text introdus de la tastatură toate apariţiile primului cuvânt prin cel de - al doilea.\n");
//        printf("Alegeti o optiune\n");
//        scanf("%d", &opt);
//
//        //switch (opt) { 
//        //case 1:
//        //    printf("Dati lungime  :");
//        //    scanf("%d ",&lungime);
//        //    printf("Dati pozitie  :");
//        //    scanf("%d ",&pozitie);
//
//        //    /for (i = 0; i < strlen(sir); i++){
//        //        if (i<pozitie && i>pozitie + lungime)
//        //            sub[k++] = sir[i];
//        //}
//        //    sub[k] = '\0';
//        //    strcpy(sir, sub);
//        //    printf("%s", sir);/
//        //    printf("%d %d", lungime, pozitie);
//        //    break;
//        //default:
//        //    exit(0);
//        //}
//        switch (opt)
//        {
//        case 0:
//            exit(1);
//            break;
//        case 1:
//            printf("Dati lungime  :");
//            scanf("%d ", &lungime);
//            printf("Dati pozitie  :");
//            scanf("%d ", &pozitie);
//            printf("%d %d", lungime, pozitie);
//            break;
//
//
//        default:
//            break;
//        }
//    }
//
//
//
//    return 0;
//}