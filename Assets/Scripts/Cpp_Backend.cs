using UnityEngine;
using System.Runtime.InteropServices;

public class Cpp_Backend : MonoBehaviour
{
    [DllImport("backend")]
    private static extern int ReturnFunction();
}
