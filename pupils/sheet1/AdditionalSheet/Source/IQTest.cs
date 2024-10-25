namespace AdditionalSheet.Source;
class IQTest{
	public static void Solution(){
		string [] paper = new string [4];
		
		for(int i=0;i<4;i++)
			paper[i] = Console.ReadLine() ?? "";
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				int hash = 0,dot = 0;
				for(int k = i;k <= i+1;k++){
					for(int l = j; l <= j+1;l++){
						if(paper[k][l] == '#') hash++;
						else dot++;
					}
						
				}
				if(hash >= 3 || dot >= 3){
					Console.WriteLine("YES");
					return;
				}
			}
		}
		Console.WriteLine("NO");
		return;
	}
}