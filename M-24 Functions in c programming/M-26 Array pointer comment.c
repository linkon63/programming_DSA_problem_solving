 int arr[10] = {2,3,6,4,8};
    int a = 10;
    int *p = &a;

    int *arrAdd = &arr;

    int updateA = *p+10;
    printf("Hello p:%d \n", *p);
    printf("Hello updateA:%d \n", updateA);
    arrAdd[0] = 3333;
    printf("Hello arrAdd:%d  \n", arrAdd[0]);
    printf("Hello arr:%d  \n", arr[0]);
