#include <bits/stdc++.h>


using namespace std;

void odmocnina(){
    int N=0;
    double sum=0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        sum += sqrt(i);
    }
}

void _stringchar(){
    char c[15];
    int i = 0;
    while(scanf("%s",c)!=EOF){

    if(strcmp(c,"777")==0)i++;
    //else printf("a");

    }
    printf("%d",i);
}

void _string2(){
    char c[15];
    string s;
    int i = 0;
    while(scanf("%s",c)!=EOF){
    s = string(c);
    if(s=="777")i++;

    }
    printf("%d",i);
}

void generateNrandomNumbers(int N){
    srand(0);
    for(int i=0;i<N;i++){
        printf("%d\n",rand());
    }
}

int main()
{
    _string2();

    return 0;
}
