/*
    Given an array of size length, return an array of [mean, mode]
*/

typedef struct nums nums
{
  int *data;
  int size;
}

int* meanAndMode (nums arr)
{
    int mean = 0;
    int mode = 0;



    for (int i = 0; i < nums.size; i++)
    {
        for (int j = 0; j < nums.size; j++)
        {
            // if its null, meaning it was previously indexed to mode, skip it
            if (nums.data[j] == NULL) continue;
            if (nums.data[i] == nums.data[j])
            {
                mean += nums.data[j];
                // add nums.data[j] to mode and then set nums.data[j] to NULL
                
            }
        }
    }
    mean /= nums.size;
}