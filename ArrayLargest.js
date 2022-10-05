<script>

// JavaScript program to find
// maximum in arr[] of size n

	function largest(arr) {
		let i;
	
		// Initialize maximum element
		let max = arr[0];

		// Traverse array elements
		// from second and compare
		// every element with current max
		for (i = 1; i < arr.length; i++) {
			if (arr[i] > max)
				max = arr[i];
		}
		
	return max;
}
	
	// Driver code
	let arr = [10, 324, 45, 90, 9808];
	document.write("Largest in given array is " + largest(arr));
	

</script>
