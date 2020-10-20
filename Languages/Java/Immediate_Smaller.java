import java.util.*;
class Immediate_Smaller
{
    Scanner sc=new Scanner(System.in);
    void main()
    {
        int t=sc.nextInt();
        int i=0;
        while(t-->0)
        {
            int n=sc.nextInt();
            int[] Ar=new int[n];
            for(i=0;i<n;i++)
            {
                Ar[i]=sc.nextInt();
            }
            for(i=0;i<n-1;i++)
            {
                if(Ar[i+1]<Ar[i])
                {
                    System.out.print(Ar[i+1]+" ");
                }
                else
                {
                    System.out.print("-1 ");
                } 
            }
            System.out.print("-1");
            System.out.println();
        }
    }
}
            