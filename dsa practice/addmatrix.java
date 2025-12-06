import java.util.scanner
Public class AddMatrix {
    public static void main(String [] args){
        Scanner S= New ScannerSystem.in);
        System.out.println("Enter rows and columns of matrices:");
        int r=s.nextInt(),c=s.nextInt();
        int[][]a=new int[r][c],b=new int[r][c],sum=new int[r][c];
        System.out.println("enter first matrix:");
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
             a[i][j]=s.nextInt();
        System.out.println("enter first matrix");
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
              b[i][j]=s.nextInt();
        System.out.println("enter second matrix");
        for(int i=0;i<r;i++){
            for(intj=0;j<c;j++){
                sum[i][j]=a[i][j]+b[i][j];
                System.out.prinntln(sum[i][j]+" ");
            
            
            }
            System.out.println()
        }
    
    
    }
}