//Time Complexity: O(n)
//Space Complexity: O(1)

func selectionSort(array:inout [Int]){
    for i in 0 ..< array.count{
        var minIdx = i
        
        for j in i ..< array.count{
            if array[j] < array[minIdx]{
                minIdx = j
            }
        }
        array.swapAt(i, minIdx)
    }
}

var array = [86,43,21,67,43,12,3,1,46,1,6,]
selectionSort(array: &array)
print(array) //[1, 1, 3, 6, 12, 21, 43, 43, 46, 67, 86]