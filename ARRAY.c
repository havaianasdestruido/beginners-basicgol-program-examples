#include <basicgol.h>

// ARRAY simple operations

INTEIRO arr[100], i, j, position, n, element, choice;

PROCEDIMENTO menu(VAZIO);

PROCEDIMENTO insertion(VAZIO) {
    ESCREVA("ENTER THE POSITION YOU WANT TO ENTER THE ELEMENT");
    SE NAO LEIA_OK(position) ENTAO
        ERRO("Invalid input");
    FIM_SE
    position = position - 1;
    SE position < 0 OU position > n OU n >= 100 ENTAO
        ESCREVAL("\n INVALID POSITION");
        RETORNE;
    FIM_SE
    ESCREVA("ENTER THE ELEMENT ");
    SE NAO LEIA_OK(element) ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA_PASSO (i, n - 1, position, -1) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    n = n + 1;
}

PROCEDIMENTO traversing(VAZIO) {
    ESCREVAL("\n THE ARRAY ENTERED IS:--");
    PARA (i, 0, n - 1) {
        ESCREVA_FMT("%d\t", *(arr + i));
    }
}

PROCEDIMENTO deletion(VAZIO) {
    ESCREVA("ENTER THE POSITION OF THE ELEMENT TO BE DELETED");
    SE NAO LEIA_OK(position) ENTAO
        ERRO("Invalid input");
    FIM_SE
    position = position - 1;
    SE position < 0 OU position > n - 1 ENTAO
        ESCREVAL("\n INVALID POSITION");
        RETORNE;
    FIM_SE
    PARA (i, position, n - 2) {
        arr[i] = arr[i + 1];
    }
    ESCREVAL("ELEMENT IS DELETED!!!");
    n = n - 1;
}

PROCEDIMENTO updation(VAZIO) {
    ESCREVA("ENTER THE POSITION WHERE U WANT TO UPDATE");
    SE NAO LEIA_OK(position) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE position < 1 OU position > n ENTAO
        ESCREVAL("\n INVALID POSITION");
        RETORNE;
    FIM_SE
    ESCREVA("\n ENTER THE ELEMENT :-");
    SE NAO LEIA_OK(element) ENTAO
        ERRO("Invalid input");
    FIM_SE
    arr[position - 1] = element;
}

PROCEDIMENTO linear_search(VAZIO) {
    ESCREVAL("ENTER THE ELEMENT YOU WANT TO SEARCH");
    SE NAO LEIA_OK(element) ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA (i, 0, n - 1) {
        SE arr[i] == element ENTAO
            ESCREVA_FMT("ELEMENT FOUND AT THE POSITION %d\n\n", i + 1);
            choice = 20;
            PARE;
        FIM_SE
    }
    SE choice != 20 ENTAO
        ESCREVA("\nELEMNT NOT FOUND!!!");
    FIM_SE
}
PROCEDIMENTO bubble_sort_algo(VAZIO) {
    PARA (i, 0, n - 1) {
        PARA (j, 0, n - i - 2) {
            SE arr[j] > arr[j + 1] ENTAO
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            FIM_SE
        }
    }
}
PROCEDIMENTO bubble_sort(VAZIO) {
    bubble_sort_algo();
    ESCREVAL("\nTHE ARRAY HAS BEEN SORTED");
}

PROCEDIMENTO binary_search(VAZIO) {
    ESCREVAL("ENTER THE ELEMENT YOU WANT TO SEARCH");
    SE NAO LEIA_OK(element) ENTAO
        ERRO("Invalid input");
    FIM_SE
    INTEIRO beg, mid, end, check;
    check = 0;
    beg = 0;
    end = n - 1;
    bubble_sort_algo();
    ENQUANTO beg <= end FACA
        mid = (beg + end) / 2;
        SE arr[mid] == element ENTAO
            ESCREVA_FMT("ELEMENT FOUND AT POSITION: %d, AFTER THE SORTING", mid + 1);
            check = 10;
            PARE;
        SENAO_SE arr[mid] > element ENTAO
            end = mid - 1;
        SENAO_SE arr[mid] < element ENTAO
            beg = mid + 1;
        FIM_SE
    FIM_ENQUANTO
    SE check != 10 ENTAO
        ESCREVA("ELEMENT NOT FOUND IN THE ARRAY!!!");
    FIM_SE
}

PROCEDIMENTO selection_sort(VAZIO) {
    PARA (i, 0, n - 2) {
        PARA (j, i + 1, n - 1) {
            SE arr[i] > arr[j] ENTAO
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            FIM_SE
        }
    }
    ESCREVA("ARRAY IS SORTED");
}

PROCEDIMENTO menu(VAZIO) {
    ENQUANTO VERDADEIRO FACA
        ESCREVAL("\n1. INSERTION\t 2. UPDATION\t 3. TRAVERSING\t 4. DELETION\t 5.EXIT\t 6. RECREATE THE "
                 "ARRAY ");
        ESCREVAL("7. LINEAR SEARCH\t 8. BUBBLE SORT\t 9. BINARY SEARCH\t 10. SELECTION SORT\n");
        SE NAO LEIA_OK(choice) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCOLHA(choice)
        CASO 1:
            insertion();
            PARE;
        CASO 2:
            updation();
            PARE;
        CASO 3:
            traversing();
            PARE;
        CASO 4:
            deletion();
            PARE;
        CASO 5:
            exit(0);
        CASO 6:
            RETORNE;
        CASO 7:
            linear_search();
            PARE;
        CASO 8:
            bubble_sort();
            PARE;
        CASO 9:
            binary_search();
            PARE;
        CASO 10:
            selection_sort();
            PARE;
        CONTRARIO:
            ESCREVAL("Invalid option");
            PARE;
        FIM_ESCOLHA
    FIM_ENQUANTO
}

INICIO
    ESCREVA("ENTER THE ELEMENTS OF ARRAY");
    i = 0;
    ENQUANTO VERDADEIRO FACA
        ESCREVAL("\nENTER THE ELEMENT:-");
        AFIRME(LEIA_OK(arr[i]), "Invalid input");
        ESCREVAL("\nDO YOU WANT TO ENTER ANOTHER ELEMENT PRESS ANY KEY ELSE PRESS 1");
        SE NAO LEIA_OK(choice) ENTAO
            ERRO("Invalid input");
        FIM_SE
        SE choice == 1 OU i == 99 ENTAO
            n = i + 1;
            menu();
            i = -1;
        FIM_SE
        i++;
    FIM_ENQUANTO

    RETORNE 0;
FIM
