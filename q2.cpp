void selectionSort(std::vector<int>& arr)
{
int temp , length = size;
    for(int i = 0; i < size ; i++){
        for(int j = i + 1; j < size ; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }
    }
}