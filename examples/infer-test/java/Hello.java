public class Hello
{
	public static synchronized int test()
	{
		// String s = null;
		String s = "";
		return s.length();
	}


	public static void main(String[] args)
	{
		int t = test();
	}
}
