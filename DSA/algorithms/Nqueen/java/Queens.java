import java.io.*;
class Queens
{
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	static String a[][];				 //to make the combinations
	static int n,s=0;   				 //to store the number of outputs
	public static void main(String arghh[])throws IOException
	{
		System.out.println("Enter the range");
		n=Integer.parseInt(br.readLine());
		a=new String[n][n];               //making the matrix of required size
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		a[i][j]="0";                      //filling the matrix with default values
		generate(a,0,0);                  //function for generating combinations. 0,0 are the index for loop to stop repetitions
		System.out.println("Total Soulutions "+s);
	}
	static void generate(String [][]a,int x,int y)throws IOException
	{
		for(int i=x;i<n;i++)
		{
			for(int j=y;j<n;j++)
			{
				y=0;						//for resetting the loop
				if(checkValidity(a,i,j))	//function to check valid(safe) places for queens to sit
				{
					a[i][j]="*";			//placing the queen
					checkGrid(a);			//checking if all the n queens are satisfied
					generate(a,i,j);		//sending recursion for next combinations
					a[i][j]="0";			//removing queen(backtracking)
				}
			}
		}
	}
	static void checkGrid(String [][]a)		//function to check if all queens are satisfied
	{
		int c=0,d=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(checkValidity(a,i,j)==false)		//checking if no other queen is required
				c++;
				if(a[i][j].equals("*"))		//finding the number of queens in the Grid
				d++;
			}
		}
		if(c==n*n&&d==n)					//satisfying the above conditions
		{
			s++;							//incrementing value for correct output
			display(a);						//displaying output
		}
	}
	static boolean checkValidity(String [][]a,int i,int j)			//checking for valid(safe) places for queens. i,j contain the index of the location
	{
		for(int x=0;x<n;x++)
		{
			if(i-x>=0&&j-x>=0)					//to see if diagonal above-left is within grid
				if(a[i-x][j-x].equals("*"))		//to see if it has another queen
					return false;
			if(i-x>=0&&j+x<n)					//to see if diagonal down-left
				if(a[i-x][j+x].equals("*"))		//to see if it has another queen
					return false;
			if(i+x<n&&j-x>=0)					//to see for diagonal above-right
				if(a[i+x][j-x].equals("*"))
					return false;
			if(i+x<n&&j+x<n)					//to see for diagonal down-right
				if(a[i+x][j+x].equals("*"))
					return false;
			if(a[x][j].equals("*")||a[i][x].equals("*"))		//to see if another queen is in the same row or column
				return false;
		}
		return true;
	}
	static void display(String [][]a)			//display the combination
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			System.out.print(a[i][j]+" ");
			System.out.println();
		}
		System.out.println("Total Solutions till now "+s+"\n");
	}
}