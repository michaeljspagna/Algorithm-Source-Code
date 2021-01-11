//Time Complexity: O(n)
//Space Complexity: O(1)

function selectionSort(array){
    for(var i=0; i<array.length; i++){
        var minIdx = i;
        
        for(var j=0; j<array.length; j++){
            if(array[j] < array[minIdx]){
                minIdx = j;
            }
        }
        array[i], array[minIdx] = array[minIdx], array[i];
    }
    return array;
}

var array = [86,43,21,67,43,12,3,1,46,1,6,];
var sorted = selectionSort(array);
console.log(sorted); //[1, 1, 3, 6, 12, 21, 43, 43, 46, 67, 86]