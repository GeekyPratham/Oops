#include <iostream>
using namespace std;
int main(){
    int i;
    FILE *fp;
    fp = fopen("a.txt","w");
    int *a = (int*)malloc(1000*sizeof(int));
    srand(time(0));
    for(int i=0;i<1000;i++){
        a[i]=rand();
    }

    for(int i=0;i<1000;i++){
        fprintf(fp,"%d",a[i]);
    }
}