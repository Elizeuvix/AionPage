using System.Collections;
using UnityEngine;
using System;
using System.Diagnostics;
using System.IO;

public class LauncherModule : MonoBehaviour
{
    [Header("Server Config")]
    public string serverIP = "127.0.0.1";
    public string serverPort = "2106";
    [Tooltip("KR:0 , NA:1, EU:2, JAP:4, SDO:5, RUS:7")]
    [Range(0, 7)]
    public int countryCode = 2;
    public string language = "ENG";
    public void StartAion()
    {
        string part1 = $"start bin64\\Aion.bin -ip:{serverIP} -port:{serverPort} -cc:{countryCode} -lang:{language}";
        string part2 = "-noweb -nowebshop -nokicks -ncg -noauthgg -charnamemenu -ingameshop -disable-xigncode -win10-mouse-fix";

        ExecuteCommand($"{part1} {part2}");
        StartCoroutine("MinimizeThis");
    }

    private IEnumerator MinimizeThis()
    {
        yield return new WaitForSeconds(3);
        Application.OpenURL("xdotool getactivewindow windowminimize");
    }

    public void QuitApp()
    {
        Application.Quit();
    }

    private void ExecuteCommand(string command)
    {
        int exitCode;
        ProcessStartInfo processInfo;
        Process process;

        processInfo = new ProcessStartInfo("cmd.exe", "/c " + command);
        processInfo.CreateNoWindow = true;
        processInfo.UseShellExecute = false;
        // * Redirect the output *
        processInfo.RedirectStandardError = true;
        processInfo.RedirectStandardOutput = true;

        process = Process.Start(processInfo);
        process.WaitForExit();

        // * Read the streams *
        // Warning: This approach can lead to deadlocks, see Edit #2
        string output = process.StandardOutput.ReadToEnd();
        string error = process.StandardError.ReadToEnd();

        exitCode = process.ExitCode;

        process.Close();
    }
}
