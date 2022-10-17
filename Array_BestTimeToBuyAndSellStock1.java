package DSA;

public class Array_BestTimeToBuyAndSellStock1 {
    //here we buy and sell a stock onl;y one time
    public static int BTS(int a[]){
        int minSofar=a[0];
        int maxProfit=0;
        for(int i=0;i<a.length;i++){
            minSofar=Math.min(minSofar,a[i]);
            int profit=a[i]-minSofar;
            maxProfit=Math.max(maxProfit,profit);
        }
        return maxProfit;
    }

    public static void main(String[] args) {
        int s[]={5,2,6,1,4};
        System.out.println(BTS(s));
    }
}
