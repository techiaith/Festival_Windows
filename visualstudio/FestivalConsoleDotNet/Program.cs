using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using FestivalTTSCOMLib;

namespace FestivalConsoleDotNet
{
    class Program
    {
        static void Main(string[] args)
        {           
              FestivalTTSEngine ftts = new FestivalTTSEngine();
              ftts.eval_command("(voice_cb_cy_llg_diphone)");

              while (true)
              {
                  Console.Out.WriteLine("Be tisio i mi ddweud?");
                  String text = Console.In.ReadLine();
                  ftts.say_text(text);
                  ftts.text_to_wave(text, System.IO.Path.Combine(Environment.CurrentDirectory, text + ".wav"));               
              }

        }
    }
}
