#include <basicgol.h>

INTEIRO CAPACITY = 10;
INTEIRO size;

REGISTRO(task)
    INTEIRO id;
    INTEIRO priority;
FIM_REGISTRO(task);

FUNCAO INTEIRO getLeftChildIndex(INTEIRO i);
FUNCAO INTEIRO getRightChildIndex(INTEIRO i);
FUNCAO INTEIRO getParentIndex(INTEIRO i);
FUNCAO LOGICO hasLeftChild(INTEIRO i);
FUNCAO LOGICO hasRightChild(INTEIRO i);
FUNCAO LOGICO hasParent(INTEIRO i);
FUNCAO task leftChild(INTEIRO i, task *taskList);
FUNCAO task rightChild(INTEIRO i, task *taskList);
FUNCAO task parent(INTEIRO i, task *taskList);
PROCEDIMENTO swap(INTEIRO i, INTEIRO j, task *taskList);
PROCEDIMENTO ensureExtraCapacity(task **taskList);
FUNCAO task peek(task *taskList);
FUNCAO task poll(task *taskList);
PROCEDIMENTO addTask(task t, task *taskList);
PROCEDIMENTO heapifyUp(task *taskList);
PROCEDIMENTO heapifyDown(task *taskList);

INICIO
    task *taskList = malloc(TAMANHO_DE(task) * CAPACITY);
    AFIRME(taskList != NULL, "Allocation failed");
    task task;
    INTEIRO op;
    ESCREVAL("\tIn this program the greater the priority value of the task, the higher is the priority "
             "of the task");
    INTEIRO i;
    PARA (i, 0, 109) {
        ESCREVA("-");
    }
    ESCREVA_LINHA();
    REPITA
        ESCREVAL("1...Enter a new task");
        ESCREVAL("2...Remove highest priority task");
        ESCREVAL("3...Show highest priority task");
        ESCREVAL("4...Exit");
        ESCREVAL("Enter you option below:");
        ESCREVA("-> ");
        SE NAO LEIA_OK(op) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCREVA_LINHA();

        ESCOLHA(op)
        CASO 1:
            ESCREVAL("Enter the task ID:");
            ESCREVA("-> ");
            SE NAO LEIA_OK(task.id) ENTAO
                ERRO("Invalid input");
            FIM_SE

            ESCREVAL("Enter the task Priority:");
            ESCREVA("-> ");
            SE NAO LEIA_OK(task.priority) ENTAO
                ERRO("Invalid input");
            FIM_SE

            ensureExtraCapacity(&taskList);
            addTask(task, taskList);
            PARE;
        CASO 2:
            task = poll(taskList);
            ESCREVAL("Element Processed is:");
            ESCREVA_FMT("ID: %d\n", task.id);
            ESCREVA_FMT("Priority: %d\n", task.priority);
            PARE;
        CASO 3:
            task = peek(taskList);
            ESCREVAL("Element Ready to be Processed first is:");
            ESCREVA_FMT("ID: %d\n", task.id);
            ESCREVA_FMT("Priority: %d\n", task.priority);
            PARE;
        CASO 4:
            // nothing to see here...
            PARE;
        CONTRARIO:
            ESCREVAL("Invalid option entered, please try again !\n");
            PARE;
        FIM_ESCOLHA
        INTEIRO lineIndex;
        PARA (lineIndex, 0, 99) {
            ESCREVA("-");
        }
        ESCREVA_LINHA();
    ATE_QUE(op == 4);
    free(taskList);
    RETORNE 0;
FIM

PROCEDIMENTO heapifyDown(task *taskList) {
    INTEIRO index = 0;
    INTEIRO greaterChildIndex;
    ENQUANTO hasLeftChild(index) FACA
        greaterChildIndex = getLeftChildIndex(index);
        SE hasRightChild(index) E
            rightChild(index, taskList).priority > leftChild(index, taskList).priority ENTAO
            greaterChildIndex = getRightChildIndex(index);
        FIM_SE
        SE taskList[index].priority > taskList[greaterChildIndex].priority ENTAO
            PARE;
        SENAO
            swap(index, greaterChildIndex, taskList);
        FIM_SE
        index = greaterChildIndex;
    FIM_ENQUANTO
}

PROCEDIMENTO heapifyUp(task *taskList) {
    INTEIRO index = size - 1;
    ENQUANTO hasParent(index) E parent(index, taskList).priority < taskList[index].priority FACA
        swap(getParentIndex(index), index, taskList);
        index = getParentIndex(index);
    FIM_ENQUANTO
}

PROCEDIMENTO addTask(task t, task *taskList) {
    taskList[size] = t;
    ++size;
    heapifyUp(taskList);
}

FUNCAO task poll(task *taskList) {
    SE NAO size ENTAO
        ESCREVAL("Error !");
        exit(0);
    FIM_SE
    task t = taskList[0];
    taskList[0] = taskList[size - 1];
    --size;
    heapifyDown(taskList);
    RETORNE t;
}

FUNCAO task peek(task *taskList) {
    SE NAO size ENTAO
        ESCREVAL("Error !");
        exit(0);
    FIM_SE
    RETORNE taskList[0];
}

PROCEDIMENTO ensureExtraCapacity(task **taskList) {
    SE size == CAPACITY ENTAO
        CAPACITY *= 2;
        task *larger = realloc(*taskList, CAPACITY * TAMANHO_DE(task));
        AFIRME(larger != NULL, "Allocation failed");
        *taskList = larger;
    FIM_SE
}

PROCEDIMENTO swap(INTEIRO i, INTEIRO j, task *taskList) {
    task temp = taskList[i];
    taskList[i] = taskList[j];
    taskList[j] = temp;
}

FUNCAO task parent(INTEIRO i, task *taskList) {
    RETORNE taskList[getParentIndex(i)];
}

FUNCAO task rightChild(INTEIRO i, task *taskList) {
    RETORNE taskList[getRightChildIndex(i)];
}

FUNCAO task leftChild(INTEIRO i, task *taskList) {
    RETORNE taskList[getLeftChildIndex(i)];
}

FUNCAO LOGICO hasParent(INTEIRO i) {
    RETORNE i > 0;
}

FUNCAO LOGICO hasRightChild(INTEIRO i) {
    RETORNE getRightChildIndex(i) < size;
}

FUNCAO LOGICO hasLeftChild(INTEIRO i) {
    RETORNE getLeftChildIndex(i) < size;
}

FUNCAO INTEIRO getLeftChildIndex(INTEIRO i) {
    RETORNE 2 * i + 1;
}

FUNCAO INTEIRO getRightChildIndex(INTEIRO i) {
    RETORNE 2 * i + 2;
}

FUNCAO INTEIRO getParentIndex(INTEIRO i) {
    RETORNE (i - 1) / 2;
}
