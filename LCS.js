<script>
	function max(x, y){
		return (x > y) ? x : y;
	}
		
	function lps(seq, i, j){
		if (i == j){
			return 1;
		}

			if (seq[i] == seq[j] && i + 1 == j){
				return 2;
			}
	
			if (seq[i] == seq[j]){
				return lps(seq, i + 1, j - 1) + 2;
			}
			return max(lps(seq, i, j - 1), lps(seq, i + 1, j));
	}
	
	let seq = "GEEKSFORGEEKS";
	let n = seq.length;
	document.write("The length of the LPS is ", lps(seq.split(""), 0, n - 1));
</script>

