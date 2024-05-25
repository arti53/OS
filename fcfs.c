#include<stdio.h>
#include<conio.h>
#define max 30
void main(){
int i,j,n,bt[max],wt[max],tat[max];
float awt=0,atat=0;
clrscr();
printf("Enter the number of processes");
scanf("%d",&n);
printf("Enter the burst time of processes");
for(i=0;i<n;i++){
    scanf("%d",&bt[i]);
}
printf("process\t burst time\t waiting time\t\t")
}
/*
#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    char name[5];
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct Student arr[], int low, int high) {
    int pivot = arr[high].roll;
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j].roll <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(struct Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    struct Student students[5];
    int roll;

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll: ");
        scanf("%d", &roll);
        students[i].roll = roll;
    }

    printf("\nEntered student data:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d %s\n", students[i].roll, students[i].name);
    }

    quickSort(students, 0, 4);

    printf("\nSorted student data:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d %s\n", students[i].roll, students[i].name);
    }

    return 0;
}*/