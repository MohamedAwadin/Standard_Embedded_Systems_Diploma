

void array_print(const int* arr,int size) //(int* p,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

void array_ofCharprint(char* arr)
{
    int i;
    for(i=0; arr[i]; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}


void array_ofShortprint(short* arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

int array_sum_elements(int* arr,int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];

    }
    return sum;
}

int array_search_FirstLocation(int* arr,int size,int num)
{

    for(int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }

    }
    return -1;
}

void array_max_min_element(int* arr,int size,int* max,int* min )
{
    *max = arr[0],*min = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}


int array_scan(int* arr,int MaxSize)
{
    int i,n;
    printf(":array_scan:Enter total numbers (not more than %d):",MaxSize);
    scanf("%d",&n);
    for(i = 0 ; (i<n)&&(i<MaxSize); i++)
    {
        scanf("%d",&arr[i]);
        //scanf("%d",arr+i);
        //scanf("%d",&*(arr+i));
    }
    return i;
}

int* array_scanDynamic(void)
{
    int size,i;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int* arr = malloc(size * sizeof(int));
    if(arr == 0)
    {
        return 0;
    }
    printf("Enter Numbers:\n");
    for(int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("%d   ",arr);
    array_print(arr,size);
    return arr;
}
void array_reverse(int* arr,int size)
{
    int temp,i,j=size-1;
    for(i=0; i<=j ; i++)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
}
void array_swap(int* arr1,int* arr2,int size1,int size2)
{
    int max,temp,i;
    if(size2 > size1)
    {
        max = size1;
    }
    else
    {
        max = size2;
    }
    for(i=0; i<max ; i++)
    {
        temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}
void array_ReverseSwap(int* arr1,int* arr2,int size1,int size2)
{
    array_swap(arr1,arr2,size1,size2);
    array_reverse(arr2,size2);
    array_reverse(arr1,size1);
}
void array_ReverseSwap2(int* arr1,int* arr2,int size1,int size2)
{
    int max=size1,temp,i,j=size1-1;
    if(size2 < size1)
    {
        max = size2;
        j=size2-1;
    }
    for(i=0; i<max  ; i++,j--)
    {
        temp = arr1[i];
        arr1[i]=arr2[j];
        arr2[j]=temp;
    }
}

int array_search_repeated(int* arr,int size,int num)
{
    int i,c=0;
    for(int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            c++;
        }
    }
    return c;
}

int array_search(int* arr,int size,int num,int* pindex_f,int* pindex_l)
{
    int i,c=0;

    for(int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            *pindex_l=i;
            c++;
            if(c==1)
            {
                *pindex_f=i;
            }
        }
    }
    return c;
}


int array_most_repeated(int* arr,int size)
{
    int index,c=0,max=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j]== arr[i])
            {
                c++;
            }
        }
        if(c>max)
        {
            index=arr[i];
            max = c;
        }
        c=0;
    }
    return index;
}

int* remove_repeated_dynamic(int* arr,int size,int* size_new)
{
    int i=0,j=0,k=0,flag=1;
    int* arrnew = (int*)malloc(size * sizeof(int));
    for(i=0; i<size; i++)
    {
        flag = 1 ;
        for(k=0; k<i; k++)
        {
            if(arr[i]==arr[k])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            arrnew[j] = arr[i];
            printf("::arrnew[%d] = arr[%d] = %d \n",j,i,arrnew[j]);
            j++;
        }
    }
    *size_new = j;
    arrnew = realloc(arrnew,j*sizeof(int));
    return arrnew;
}

void array_remove_prime(int* arr,int size)
{
    for(int i=0; i<size; i++)
    {
        if (check_prime(arr[i])==0){
            arr[i] =0;
        }
    }
}

int array_search_last(int* arr,int size,int num)
{
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            index=i;
        }
    }
    return index;
}

int array_between(int* arr,int size,int num1,int num2)
{
    int c=0;
    if(num1>num2)
    {
        num1 = num1 ^ num2;
        num2 = num2 ^ num1;
        num1 = num1 ^ num2;
    }
    //n1=2 , n2=6
    for(int i=1; i<size; i++)
    {
        if ((num1+i) != num2)
        {
            arr[i-1]=num1+i;
            c++;
        }
        else{
            return c;
        }
    }
    return c;
}
int array_search_repeated_consecutive_num(int* arr,int size,int num)
{
    int i,c=0,max=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            c++;
        }
        else
        {
            if(c>max)
            {
                max=c;
            }
            c=0;
        }
    }

    return max;
}
int array_search_repeated_most_consecutive(int* arr,int size,int* number)
{
    int i,c=0,num,max=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j+i]==arr[i])
            {
                c++;  //1  2
            }
            else
            {
                break;
            }
        }

        if(c>max)
        {
            max=c;
            num = arr[i];
        }
        c=0;
    }
    if(max > 1)
    {
        *number = num;
        return max;
    }
    else{
        return -1;
    }

}
int * array_merg_dynamic(int* arr1,int* arr2,int size1,int size2,int* size_merg)
{
    int i=0,j=0;
    int s1 = size1 + size2 ;
    int* array_merg = (int*)malloc(s1 * sizeof(int));
    int s2 = size1 > size2 ? size2 : size1;
    s2 = s2 * 2;
    int* arr_rem = size1 > size2 ? arr1 : arr2;
    for(i=0; i<s2; i++)
    {
        if(i % 2 == 0)
        {
            array_merg[i]=arr1[j];
        }
        else {
            array_merg[i]=arr2[j];
            j++;
        }
    }
    for(;i<s1;i++){
        array_merg[i]=arr_rem[j];
        j++;
    }
    *size_merg = s1;
    return array_merg;
}
int array_merg(int* arr1,int* arr2,int size1,int size2,int *arr_merg,int size_merg)
{
    int size,i=0,j=0;
    size = size1 + size2;
    if(size > size_merg)
    {
        size = size_merg ;
    }
    int s2 = size1>size2 ? size2 : size1;  //check for small array
    int *arr_m=size1>size2?arr1:arr2;
    s2 = s2 *2;
    for(i=0; i<s2; i++)
    {
        if(i%2 == 0)
        {
            arr_merg[i] = arr1[j];
        }
        else
        {
            arr_merg[i] = arr2[j];
            j++;
        }
    }
    for(; i<size; i++)
    {
        arr_merg[i] = arr_m[j];
        j++;
    }
    return size;
}

//=============================
//>>>>>>>>>>>>>>ME<<<<<<<<<<<<<<<<<<<<<<<<
void array_Swap_AfterZEROS(int* arr)
{
    int i=0,j=0,c=0,flag=0,temp=0;
    for(i=0;; i++)
    {
        if(arr[i] == 0)
        {
            for(j=i+4 ;; j++)
            {
                if(arr[j]==0)
                {
                    c++;
                    j++;
                }
                if(c>0)
                {
                    temp   = arr[++i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    c++;
                    if(c==4)
                    {
                        flag =1;
                        break;
                    }
                }
            }
        }
        if(flag == 1){
            break;
        }
    }
}
//>>>>>>>>>>>>>>LECTURE<<<<<<<<<<<<<<<<<<<<<<<<
void array_Swap_AfterZEROS_2(int* arr)
{
    int i=0,first_zero,second_zero,flag=0;
    for(i=0;flag<2; i++)
    {
        if((arr[i] == 0)&&(flag == 0))
        {
            first_zero = i;
            flag = 1;
        }
        else if((arr[i] == 0)&&(flag == 1)){
            second_zero = i;
            flag = 2;
        }
    }
    swap(&arr[first_zero+1],&arr[second_zero+1]);
    swap(&arr[first_zero+2],&arr[second_zero+2]);
    swap(&arr[first_zero+3],&arr[second_zero+3]);

}

//===============================


int array_sorted_remove_repeated(int* arr, int arr_size, int* arr_store,int max_size)
{
    int i=1,j=0,flag=0;
    arr_store[0]=arr[0];

    for(i=1;(i<=arr_size)&&(j<max_size);i++){
        if(arr_store[j] != arr[i]){
            j++;
            arr_store[j]=arr[i];
        }
    }
    return j;

}


int array_longest_sequnce(int*arr,int size,int* pfrist,int* pindex)
{
    int i=0,c=1,max=0;
    for(i=0; i<size-1; i++)
    {
        //printf(":;:array.c:c = %d, arr[%d]+1 == arr[%d]=%d=%d \n",c,i,i,arr[i]+1,arr[i+1]);
        if(arr[i]+1 == arr[i+1]){
            c++;
            //printf(":array.c:c = %d, arr[%d]+1 == arr[%d]=%d=%d \n",c,i,i,arr[i]+1,arr[i+1]);
        }
        else{
            *pfrist = arr[i-1]-c-1;
            *pindex = i-c-1;
            c=1;
            //printf(":array.c:c = %d \n",c);
        }
        if(c>max){
            max= c;
            //printf(":array.c:max = %d \n",max);
        }
    }
    return max;

}
int array_diff_MaxMin(int* arr,int size)
{
    int max ,min = arr[0],index=0,diff=0;
    for(int i=1; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    max = arr[index];
    for(int i=index+1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    diff = max - min ;
    return diff;
}
int array_most_repeated_mono(int* arr, int arr_size, int* pnum)
{
    int i=0,count[10]= {0},max=0;
    for(i=0; i<arr_size; i++)
    {
        count[arr[i]]++;
    }
    for(i=0; i<10; i++)
    {

        if(max<count[i])
        {
            max = count[i];
            *pnum = i;
        }
    }
    return max;

}

//O(n) Time-Complexity && O(n+k) Space-Complexity
//&&&&&&&&&&&&&&&&&&&77
int array_most_repeated_2(int* arr, int arr_size, int* pnum)
{
    int i = 0, max_num =arr[0], min_num =arr[0],i_max_num =0, i_min_num =0,count_size=0,max =0 ;
    for(i = 0 ; i<arr_size ; i++)
    {
        if(arr[i] > max_num)
        {
            max_num = arr[i];
            i_max_num = i;
        }
        if(arr[i] < min_num)
        {
            min_num = arr[i];
            i_min_num = i;
        }
    }
    count_size = max_num-min_num+1;
    int * arr_count = (int*)calloc(count_size, sizeof(int));
    for(i =0 ; i<arr_size ; i++)
    {
        arr_count[arr[i]-min_num]++;
    }
    for(i = 0 ; i<count_size ; i++)
    {
        printf("arr_count[%d]= arr_count[%d] = %d\n",i,i+min_num,arr_count[i]);
    }
    for(i = 0 ; i<count_size ; i++)
    {
        if(arr_count[i] > max)
        {
            max = arr_count[i];
            *pnum = i+min_num;
        }
    }
    free(arr_count);
    return max ;
}
//  O(n) Time-Complexity && o(1) Space-Complexity "Only Sorted data"
int array_most_repeated_sorted(int* arr, int arr_size, int* pnum)
{
    int i=1,j=0,num=0,max=0;

    for(i=0; i<arr_size; i++)
    {
        if(arr[i] == arr[i+1])
        {
            j++;
        }
        else
        {
            if(j>max)
            {
                max = j ;
                num = arr[i];
            }
            j=0;
        }
    }
    *pnum = num;
    return max+1;

}
//  O(n) Time-Complexity && o(1) Space-Complexity
int array_find(int * arr, int size,int num)
{
    for (int i=0 ; i<size ; i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
}

//  O(LOG(n)) Time-Complexity && o(1) Space-Complexity

int array_find_binary_search(int * arr, int size,int num)
{
    int f,l,m,c=0;
    f=0;
    l = size -1;
    while(f<=l)
    {
        m = (f+l)/2;
        if(arr[m]==num)
        {
            return m;
        }
        else if(num < arr[m])
        {
            l = m -1;
        }
        else
        {
            f = m+1;
        }

    }
    return -1;

}
int array_find_max(int* arr,int size)
{
    int i = 0, index = 0;
    for(int i=1; i<size; i++)
    {
        if(arr[i] > arr[index])
        {
            index = i;
        }
    }
    return index ;
}

int array_find_min(int* arr,int size)
{
    int i = 0, index = 0;
    for(int i=1; i<size; i++)
    {
        if(arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index ;
}


//===========Array -SORTING - Algorithms ==========
//1- Bubble Sorting
void array_bubble_sorting_ascending(int* arr,int size)
{
    int i=0,j=0,temp =0,c=0 ;
    for(i=0 ; i< size ; i++)
    {

        for(j =0 ; j< size-1-i ; j++)
        {
            c++;
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("c = %d size = %d\n",c,size);

}

void array_bubble_sorting_descending(int* arr,int size)
{
    int i=0,j=0,temp =0,c=0 ;
    for(i=0 ; i< size ; i++)
    {

        for(j =0 ; j< size-1-i ; j++)
        {
            c++;
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("c = %d size = %d\n",c,size);

}
//>>>>>>>>>>>>>>ME<<<<<<<<<<<<<<<<<<<<<<<<
void array_sorting_me(int* arr,int size)
{
    int i=0,j=0,temp =0,c=0 ;
    for(i=0 ; i< size ; i++)
    {

        for(j =i+1 ; j< size ; j++)
        {
            c++;
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("c = %d size = %d\n",c,size);

}


//=======================================
//2- Selection - Sorting
void array_selection_sort_ascending(int* arr,int size)
{
    int i = 0,j = 0, i_max = 0, last = size-1,temp,c=0 ;
    for(j =0 ; j< size ; j++)
    {
        i_max = array_find_max(arr, last+1);
        swap(arr+i_max, arr+last);
        last--;
    }
    printf("::C = %d\n",c);

}

void array_selection_sort_descending(int* arr,int size)
{
    int j = 0, i_min = 0, last = size-1,c=0 ;
    for(j =0 ; j< size ; j++)
    {
        i_min = array_find_min(arr, last+1);
        swap(arr+i_min, arr+last);
        last--;
    }
    printf("::C = %d\n",c);

}
//>>>>>>>>>>>>>>ME<<<<<<<<<<<<<<<<<<<<<<<<
void array_selection_sort_me(int* arr,int size)
{
    int i= 0,j=0,max  = 0,index=0,temp = 0,c=0,flag = 0;
    for(j = size-1 ; j>0 ; j--)
    {
        max = 0;
        flag = 0;

        for(i=0 ; i<=j ; i++)
        {
            c++;
            if (0 == i)
            {
                max = arr[i];
                //printf("::max = %d\n",max);
            }

            //printf("::arr[%d] = %d\n",i,arr[i]);
            if(arr[i] >= max)
            {
                //printf("::arr[%d] = %d , max = %d\n",i,arr[i],max);
                max = arr[i];
                index = i;
                flag = 1;
                //printf(":::arr[%d] = %d , max = %d\n",i,arr[i],max);
            }
        }
        //printf("::arr[%d] = %d , arr[%d] = %d\n",index,arr[index],j,arr[j]);
        if((index != j)&&(flag == 1))
        {
            temp = arr[j];
            arr[j] = arr[index];
            arr[index] = temp;
            //printf(":::arr[%d] = %d , arr[%d] = %d\n",index,arr[index],j,arr[j]);
        }

        //array_print(arr,size);
    }
    printf("::C = %d\n",c);

}
//=====================================
//3- Counting Sort
void array_counting_sort_mono(int* arr,int size)
{
    int j=0,i = 0,freq_arr[10]= {0};
    for(i= 0 ; i<size ; i++)
    {
        freq_arr[arr[i]]++;
    }
    for(i= 0, j=0; i<10; i++)
    {
        while(freq_arr[i])
        {
            arr[j] = i;
            freq_arr[i]--;
            j++;
        }
    }
}

void array_counting_sort(int* arr,int size)
{
    int i=0, max_num=arr[0], min_num=arr[0],count_size=0;
    for(i = 0 ; i< size ; i++){
        if(arr[i]>max_num){
            max_num = arr[i];
        }
        if(arr[i]<min_num){
            min_num = arr[i];
        }
    }
    //printf("MaxN= %d, MinN=%d\n",max_num,min_num);
    count_size = max_num - min_num +1;
    //printf("count_size=%d\n",count_size);
    int* count_arr = (int*)calloc(count_size,sizeof(int));
    for(i = 0 ; i<size ; i++){
        count_arr[arr[i]-min_num]++;
    }
    /*for(i = 0 ; i<count_size ; i++){
        printf("count_arr[%d] = count_arr[%d] = %d\n",i,i+min_num,count_arr[i]);

    }*/
    int j = 0 ;
    for(i = 0 ; i<count_size ; i++){
        while(count_arr[i]){
            arr[j] = i+min_num;
            //printf("arr[%d] = %d\n",j,arr[j], i+min_num);
            j++;
            count_arr[i]--;
        }
    }

}
//=====================================
//4- Merg Sort
void merge(int arr[], int l, int m, int r)//m = l + (r - l) / 2;
{
    int i, j, k;
    int n1 = m - l + 1;// First subarray is arr[l..m]
    int n2 = r - m;// Second subarray is arr[m+1..r]
    int *L=(int*)malloc(n1*sizeof(int));
    int *R=(int*)malloc(n2*sizeof(int));
    //int *R=new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void array_mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        array_mergeSort(arr, l, m);
        array_mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
//=====================================
//3- Quick Sorting

int partition1(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        }
        while (arr[i] <= p);
        do
        {
            j--;
        }
        while (arr[j] > p);

        if (i < j)
            swap(arr+i, arr+j);
    }
    swap(arr+l, arr+j);
    return j;
}

void array_quickSort1(int arr[], int l, int h)
{

    if (l < h)
    {
        int piv = partition1(arr, l, h);
        array_quickSort1(arr, l, piv);
        array_quickSort1(arr, piv + 1, h);
    }

}

int partition2(int arr[], int iBegin, int jEnd)
{
    int i = iBegin;
    int j = jEnd;
    int pivLoc = i;
    while (1)
    {
        while (arr[pivLoc] <= arr[j] && pivLoc != j)
        {
            j--;
        }
        if (pivLoc == j)
            break;
        else if (arr[pivLoc] > arr[j])
        {
            swap(arr+j, arr+pivLoc);
            pivLoc = j;
        }

        while (arr[pivLoc] >= arr[i] && pivLoc != i)
        {
            i++;
        }
        if (pivLoc == i)
            break;
        else if (arr[pivLoc] < arr[i])
        {
            swap(arr+i, arr+pivLoc);
            pivLoc = i;
        }
    }
    return pivLoc;
}


void array_quickSort2(int arr[], int l, int h)
{

    if (l < h)
    {
        int piv = partition2(arr, l, h);
        array_quickSort2(arr, l, piv - 1);
        array_quickSort2(arr, piv + 1, h);
    }

}
//=====================================
//3- insertion Sort
void array_insertion_sort(int * arr, int size)
{
    int key, j ;
    for(int i= 1 ; i< size ; i++)
    {
        key = arr[i];
        // printf("key = %d\n",key);
        j = i -1;
        // printf("arr[%d] = %d\n",j,arr[j]);

        while(j>=0 && arr[j] > key)
        {
//printf("arr[%d] =%d , arr[%d] = %d\n",j+1,arr[j+1],j,arr[j]);
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
        // printf("??key = %d\n",key);
    }
}


//==========================================================================================================================
//++++++++++++++++++++++++++++++++++++++++array_of_pointers+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void array_OfPointers_print(char** arr, int size )
{
    int i = 0,j=0;
    for(i = 0 ; i<size ; i++)
    {

        string_print(*(arr+i));

    }
}


void array_ofPointers_swap(char** arr, int size )
{
    int i = 0,j=0;
    char* temp = 0;
    temp = *(arr+1);
    *(arr+1) = *(arr+2);
    *(arr+2) = temp ;
    printf("===================\n");

}


int array_OfPointers_search(char** arr,int size,char* str)
{
    int i = 0,j = 0,flag = 1 ;
    printf("%c\n",str[0]);

    for(i=0; i<size; i++)
    {
        if(string_CompareNotCaseSens(arr[i],str))
        {
            return i ;
        }
    }
    return -1;
}



void array_OfPointers_String_BubbleSort_ascending(char**arr,int size)
{
    int j,i,temp,c=0,sorted_flag=0;

    for(j=0; j<size; j++)
    {
        sorted_flag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(array_OfPointers_string_CompareNotCaseSens(arr[i],arr[i+1])==1)
            {
                swap_pointers(arr+i, arr+i+1);
                sorted_flag=0;
            }
        }
        if(sorted_flag==1)
        {
            break;
        }
    }
    //printf("size=%d   c=%d\n",size,c);

}

void array_OfPointers_String_BubbleSort_descending(char**arr,int size)
{
    int j,i,temp,c=0,sorted_flag=0;

    for(j=0; j<size; j++)
    {
        sorted_flag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(array_OfPointers_string_CompareNotCaseSens(arr[i],arr[i+1])==-1)
            {
                swap_pointers(arr+i, arr+i+1);
                sorted_flag=0;
            }
        }
        if(sorted_flag==1)
        {
            break;
        }
    }
    //printf("size=%d   c=%d\n",size,c);

}



int array_Ofpointers_string_Compare(char* str1,char* str2)
{
    int i;
    for(i=0; str1[i] || str2[i]; i++)
    {
        if(str1[i] > str2[i])
        {
            return 1;
        }
        else if(str1[i] < str2[i])
        {
            return -1;
        }
    }

    return 0;
}




int array_OfPointers_string_CompareNotCaseSens(char* str1,char* str2)
{
    int i ;
    char ch1,ch2;

    for(i=0; str1[i] || str2[i]; i++)
    {
        ch1 =str1[i];
        ch2 =str2[i];
        if((ch1>='A')&&(ch1<='Z'))
        {
            ch1 = ch1 - 'A' + 'a';
        }
        if((ch2>='A')&&(ch2<='Z'))
        {
            ch2 = ch2 - 'A' + 'a';
        }
        if(ch1 > ch2)
        {
            return 1;
        }
        else if(ch1 < ch2)
        {
            return -1;
        }
    }

    return 0;
}



int array_OfPointers_string_find_BinarySearch(char ** arr, int size,char* str)
{
    int f,l,m,c=0;
    f=0;
    l = size-1;
    while(f<=l)
    {
        m = (f+l)/2;
        if(array_OfPointers_string_CompareNotCaseSens(arr[m],str)==0)
        {
            //printf("m = %d\n",m);
            return m;
        }
        else if(array_OfPointers_string_CompareNotCaseSens(arr[m],str)==1)
        {
            l = m -1;
            //printf("l= %d\n",l);
        }
        else
        {
            f = m+1;
            //printf("f = %d\n",f);
        }
    }
    return -1;
}

int array_OfPointers_string_find_char(char ** arr, int size,char ch, int* word_i , int* char_i)
{
    int i= 0, j =0, repeated = 0, word_index =0, char_index = 0,flag =0;
    for(i =0 ; i< size ; i++)
    {
        for(j= 0 ; arr[i][j] ; j++)
        {
            if(arr[i][j] == ch)
            {
                repeated++;
                if(flag ==0 )
                {
                    word_index = i;
                    char_index = j;
                    flag = 1;
                }

            }
        }
    }
    *word_i = word_index;
    *char_i = char_index;
    return repeated;
}



//==========================================================================================================================
//++++++++++++++++++++++++++++++++++++++++2D - Arrays+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void array2D_print_1(int (*arr) [3],int row, int col)
{

    for(int i =0 ; i<row ; i++)
    {
        for(int j =0 ; j<col ; j++)
        {

            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
}


//act as 1D array
void array2D_print_2(int *arr,int row, int col)
{

    for(int i =0 ; i<row ; i++)
    {
        for(int j =0 ; j<col ; j++)
        {

            printf("%3d ",arr[i*col + j]);
        }
        printf("\n");
    }
}
//more geniric
void array2D_print(int arr [][100],int row, int col)
{

    for(int i =0 ; i<row ; i++)
    {
        for(int j =0 ; j<col ; j++)
        {

            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
}

int array2D_SumDimeters(int arr [][100],int row, int col, int* sum)
{
    int sL = 0,sR = 0 ;

    if(row != col)
    {
        return 0;
    }
    for(int i =0 ; i<row ; i++)
    {
        for(int j =0 ; j<col ; j++)
        {
            if( i == j)
            {
                sL = sL + arr[i][j];
            }
            if( (i + j) == col-1)
            {
                sR = sR + arr[i][j];
            }

        }
        //printf("\n");
    }
    //printf("sum = %d\n",sR+sL);
    *sum = sR + sL;
    return 1;
}
int array2D_SumDimeters_2(int arr [][100],int row, int col, int* sum)
{
    int sL = 0,sR = 0 ;

    if(row != col)
    {
        return 0;
    }
    int i = 0,j = col - 1 ;
    for(i =0 ; i<row ; i++)
    {
        sL = sL + arr[i][i];
        sR = sR + arr[i][col -1 -i];
        j--;
    }
    *sum = sR + sL;
    return 1;
}

void array2D_print_ZigZag(int arr [][100],int row, int col)
{
    int i =0, j = 0;

    for(i =0 ; i<row ; i++)
    {
        for(j =0 ; (j<col)&&(i%2 ==0 ) ; j++)
        {

            printf("%3d ",arr[i][j]);
        }
        for(j =col-1 ; (j>=0)&&(i%2 ==1 )  ; j--)
        {

            printf("%3d ",arr[i][j]);
        }
        printf("->");
    }
}


void array2D_Strings_print(char arr[][15], int size)
{
    int i = 0,j=0;
    for(i = 0 ; i<size ; i++)
    {

        string_print(*(arr+i));

    }
}

//++++++++++++++++++++++++++++++++++++++++2D _ array_Star_Function+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void star_print(char arr[][30], int row, int col)
{
    int i = 0, j = 0 ;
    for(i = 0 ; i<row; i++)
    {
        for(j = 0 ; j<col; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
void star_set(char arr[][30], int row, int col,int x,int y)
{
    int i = 0, j = 0 ;
    for(i = 0 ; i<row; i++)
    {
        for(j = 0 ; j<col; j++)
        {
            if((x==i)&&(j<y))
            {
                arr[i][j] = '>';
            }
            else if((x==i)&&(j>y))
            {
                arr[i][j] = '<';
            }
            else if((j==y)&&(i<x))
            {
                arr[i][j] = 'v';
            }
            else if((j==y)&&(i>x))
            {
                arr[i][j] = '^';
            }
            else if((j<y)&&(i<x))
            {
                arr[i][j] = '!';
            }
            else if((j>y)&&(i<x))
            {
                arr[i][j] = '%';
            }
            else if((j<y)&&(i>x))
            {
                arr[i][j] = '&';
            }
            else if((j>y)&&(i>x))
            {
                arr[i][j] = '#';
            }
            else
            {
                arr[i][j] = '0';
            }

        }
    }
    arr[x][y] = '*';
}


void star_find(char arr[][30], int row, int col,int *px,int *py)
{
    int i = 0, j = 0 ;
    for(i = 0 ; i<row; i++)
    {
        for(j = 0 ; j<col; j++)
        {
            if(arr[i][j] == '*')
            {
                *px = i;
                *py = j;
                return;
            }
        }
    }
}



void star_find_binary(char arr[][30], int row, int col,int *px,int *py)
{
    int middel_row = 0, middel_col = 0;
    int first_row = 0, first_col = 0;
    int last_row = row - 1, last_col = col -1;

    while((first_row<=last_row)&&(first_col<=last_col))
    {
        middel_row = (first_row + last_row)/2;
        middel_col = (first_col + last_col)/2;
        if(arr[middel_row][middel_col]=='*')
        {
            *px = middel_row;
            *py = middel_col;
            return;
        }
        else if(arr[middel_row][middel_col]=='<')
        {
            last_col = middel_col - 1;
        }
        else if(arr[middel_row][middel_col]=='>')
        {
            first_col = middel_col + 1;
        }
        else if(arr[middel_row][middel_col]=='v')
        {
            first_row = middel_row + 1;
        }
        else if(arr[middel_row][middel_col]=='^')
        {
            last_row = middel_row - 1;
        }
        else if(arr[middel_row][middel_col]=='!')
        {
            first_row = middel_row + 1;
            first_col = middel_col + 1;

        }
        else if(arr[middel_row][middel_col]=='%')
        {
            first_row = middel_row + 1;
            last_col = middel_col - 1;

        }
        else if(arr[middel_row][middel_col]=='&')
        {
            last_row = middel_row - 1;
            first_col = middel_col + 1;
        }
        else if(arr[middel_row][middel_col]=='#')
        {
            last_row = middel_row - 1;
            last_col = middel_col - 1;

        }

    }

}
