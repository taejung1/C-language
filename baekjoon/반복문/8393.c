int main()
{
    int n,sum;
    sum = 0;
    scanf("%d" , &n);
    for(int i = 0; i <= n ; i++){
                sum = i + sum;
    }
    printf("%d" , sum);
    return 0;
}