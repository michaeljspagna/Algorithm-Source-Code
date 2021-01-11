#Time Complexity: O(n)
#Space Complexity: O(1)

def selectionSort(array):
    for i in range(len(array)):
        minIdx = i
        
        for j in range(i, len(array)):
            if array[j] < array[minIdx]:
                minIdx = j
                
        array[minIdx], array[i] = array[i], array[minIdx]
        
    return array

if __name__ == "__main__":
    array = [86,43,21,67,43,12,3,1,46,1,6,]
    sorted = selectionSort(array)
    print(sorted) #[1, 1, 3, 6, 12, 21, 43, 43, 46, 67, 86]