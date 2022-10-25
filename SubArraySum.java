public class SubArraySum {
    public static void main(String[] args) {
        int arr[] = {1,0,3,4,5,6,7,8,9,10,1,1};
        int s = 2;
        int i=0,j=1;
        int sum=arr[i];
        while(j<=arr.length){
            if(sum==s){
                System.out.println(sum);
                System.out.println((i+1)+" "+(j));
                break;
            }
            if(sum<s){
             sum+=arr[j++];
             ;   
            }
            if(sum>s){
                sum-=arr[i++];
                
            }
        }
    }
}
