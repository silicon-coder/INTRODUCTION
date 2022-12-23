function binarySearch(arr, num) {
  let startPoint = 0;
  let endPoint = arr.length - 1;
  let middle = Math.floor((startPoint + endPoint) / 2);
  while (arr[middle] !== num && startPoint <= endPoint) {
    if (num > arr[middle]) {
      startPoint = middle + 1;
    } else {
      endPoint = middle - 1;
    }
    middle = Math.floor((startPoint + endPoint) / 2);
  }

  return arr[middle] === num ? middle : -1;
}

