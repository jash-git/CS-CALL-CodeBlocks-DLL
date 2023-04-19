using System;
using System.Runtime.InteropServices;

public class Program
{
    [DllImport("CB_BaseLib.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall, EntryPoint = "SomeFunction")]
    static extern void SomeFunction(String StrMsg);

    [DllImport("CB_BaseLib.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall, EntryPoint = "SomeFunction01")]
    static extern IntPtr SomeFunction01(String StrMsg);

    [DllImport("CB_BaseLib.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall, EntryPoint = "Add")]
    static extern double Add(double A,double B);

    static void Pause()
    {
        Console.Write("Press any key to continue...");
        Console.ReadKey(true);
    }
    public static void Main()
    {
        try
        {
            SomeFunction("中文 123456 ABCD");
            Console.WriteLine("SomeFunction01():" + Marshal.PtrToStringAnsi(SomeFunction01("中文 ABCD 123456")));
            Console.WriteLine("Add():" + Add(100,200));
        }
        catch (Exception e)
        {
            Console.WriteLine("C# ERROR" + e.ToString());
        }

        Pause();
    }
}
