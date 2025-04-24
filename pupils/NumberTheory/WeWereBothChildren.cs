namespace NumberTheory;
public class WeWereBothChildren{
    public static void Main(){
        int t = int.Parse(Console.ReadLine() ?? "0");
        while(t-- > 0){
            solution();
        }
    }

    static void solution(){
        int n = int.Parse(Console.ReadLine() ?? "0"),max = 0;
        int[] a = new int [n+1];
        string[] tmp = Console.ReadLine()?.Split(' ') ?? new string[]{"0"};
        int[] cord = new int[n+1];
        
        for(int i=0;i<n;i++){
            int tmp2 = int.Parse(tmp[i]);
            if(tmp2<=n) a[tmp2]++;
        }

        for(int i=1;i<=n;i++){
            if(a[i]!=0){
                for(int j=i;j<=n;j+=i){
                   cord[j]+=a[i];
                   if(cord[j] > max) max = cord[j]; 
                }
            }
        }
        Console.WriteLine(max);
    }
}

