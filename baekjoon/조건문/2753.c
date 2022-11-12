int main()
{
    int N;
    scanf("%d" , &N);
     if(N % 4 == 0  && N%100 !=0 || N % 400 == 0) {
        printf("1");
    } else {
        printf("0");
    }
   return 0;
}

