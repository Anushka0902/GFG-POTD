  int isRepresentingBST(int arr[], int N)
    {
        for (int i=0;i<N-1;i++)
        {
            if (arr[i]<arr[i+1])
                continue;
            else return 0;
        }
        return 1;
    }
